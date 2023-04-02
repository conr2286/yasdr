/**
 *
 * yasdrx --- Yet Another Software Defined Radio Transceiver
 * 
 * @section Description
 * Yasdrx is (yet another) software defined amateur radio transceiver.  Unlike uSDX,
 * yasdrx implements only digital modes (no SSB) including CW (unlike the QRP Labs
 * QDX kit, https://qrp-labs.com/qdx.html).  If you don't care about CW, you can save
 * yourself a lot of trouble by purchasing the off-the-shelf QDX kit.  
 * 
 * Yasdrx V1.0's receiver uses the well-known Tayloe detector emitting I and Q baseband
 * audio driving a commercial CODEC and a modified implementation of wsjt-x executing
 * in a Raspberry Pi.  The transmitter implements a FSK (not AFSK) modulator for digital
 * modes, and ASK (Amplitude Shift Keying) for CW (it's not *really* a continuous wave
 * as a trule continuous wave would be an unmodulated carrier;).  Yasdrx tames key clicks
 * with pulse width modulation of the digital signal driving the Class E final amplifier.
 * The Raspberry's wsjt-x implementation directly controls the transmitter's frequency
 * (FSK) rather than indirectly through an audio signal and an AFSK modulator.  Note that
 * the transmitter's RF drivers are digital, not analog.
 *
 * @section Limitations
 * Sadly, while the RF board is power efficient, the Raspberry Pi is not.  The RPi 4 can
 * draw as much as 15 watts, more than the power delivered by the transmitter's QRP
 * final amp --- less than ideal for a SOTA operation.  Hopefully, by the time the
 * yasdxr hardware and software are fully implemented, power efficient versions of
 * the RPi will become capable of supporting digimode software akin to wsjt-x.
 * 
 * @section Milestones
 * Get CAT working in the Arduino
 * Get the Si5351 VFO working on a breadboard with the Arduino
 * Implement the FSK transmitter keying in the Arduino
 * Integration of prototype hardware, Arduino firmware and modified wsjt-x on the RPi
 * Implement CW receive path
 * Finish the PWM of the Class E final amp investigation
 * Implement CW transmitter path
 * Spectral analysis (!)
 * 
 * @file
 * @section Attribution
 * @author Guido PE1NNZ <pe1nnz@amsat.org> 
 * @author Jim Conrad, KQ7B <conr2286@gmail.com
 * @copyright Copyright 2019, 2020, 2021, Guido PE1NNZ
 * @copyright Copyright 2023, Jim Conrad KQ7B
 * This software has additional contributors including inspiration from Hans at QRP
 * Labs with code from Guido PE1NNZ uSDX, Charlie Morris ZL2CTM, and Alex PE1EVX.
 * Quite likely I've missed mentioning someone.  The yasdrx pivot by Jim KQ7B
 * moves the uSDX DSP processing to a 32/64-bit CPU, thereby relaxing the memory and
 * performance requirements on the 8-bit Arduino board.
 *
 * @section MIT License
 * Permission is hereby granted, free of charge, to any person obtaining a copy of this
 * software and associated documentation files (the "Software"), to deal in the Software
 * without restriction, including without limitation the rights to use, copy, modify, merge,
 * publish, distribute, sublicense, and/or sell copies of the Software, and to permit 
 * persons to whom the Software is furnished to do so, subject to the following conditions:
 * The above copyright notice and this permission notice shall be included in all copies
 * or substantial portions of the Software. THE SOFTWARE IS PROVIDED "AS IS", WITHOUT 
 * WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT
 * SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF
 * OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
**/


//Define constants related to the hardware implementation
#define F_XTAL 27005000   // 27MHz SI5351 crystal
#define SI5351_ADDR 0x60  // SI5351A I2C address: 0x60 for SI5351A-B-GT, Si5351A-B04771-GT, MS5351M; 0x62 for SI5351A-B-04486-GT; 0x6F for SI5351A-B02075-GT; see here for other variants: https://www.silabs.com/TimingUtility/timing-download-document.aspx?OPN=Si5351A-B02075-GT&OPNRevision=0&FileType=PublicAddendum

//VFO globals
volatile bool change = true;
volatile int32_t freq = 14000000;


//Potential modes
enum mode_t { LSB,
              USB,
              CW,
              FM,
              AM };
volatile uint8_t mode = USB;

enum vfo_t { VFOA = 0,
             VFOB = 1,
             SPLIT = 2 };
volatile uint8_t vfosel = VFOA;
volatile int16_t rit = 0;
static int32_t vfo[] = { 7074000, 14074000 };
static uint8_t vfomode[] = { USB, USB };

volatile uint32_t cw_offset;
uint8_t rx_ph_q = 90;




#if 0
// I2C communication starts with a START condition, multiple single byte-transfers (MSB first) followed by an ACK/NACK and stops with a STOP condition;
// during data-transfer SDA may only change when SCL is LOW, during a START/STOP condition SCL is HIGH and SDA goes DOWN for a START and UP for a STOP.
// https://www.ti.com/lit/an/slva704/slva704.pdf
class I2C {
public:
#if (F_MCU > 20900000)
#define I2C_DELAY 6
#else
#define I2C_DELAY 4  // Determines I2C Speed (2=939kb/s (too fast!!); 3=822kb/s; 4=731kb/s; 5=658kb/s; 6=598kb/s). Increase this value when you get I2C tx errors (E05); decrease this value when you get a CPU overload (E01). An increment eats ~3.5% CPU load; minimum value is 3 on my QCX, resulting in 84.5% CPU load
#endif
#define I2C_DDR DDRC  // Pins for the I2C bit banging
#define I2C_PIN PINC
#define I2C_PORT PORTC
#define I2C_SDA (1 << 4)  // PC4
#define I2C_SCL (1 << 5)  // PC5
#define DELAY(n) \
  for (uint8_t i = 0; i != n; i++) asm("nop");
#define I2C_SDA_GET() I2C_PIN& I2C_SDA
#define I2C_SCL_GET() I2C_PIN& I2C_SCL
#define I2C_SDA_HI() I2C_DDR &= ~I2C_SDA;
#define I2C_SDA_LO() I2C_DDR |= I2C_SDA;
#define I2C_SCL_HI() \
  I2C_DDR &= ~I2C_SCL; \
  DELAY(I2C_DELAY);
#define I2C_SCL_LO() \
  I2C_DDR |= I2C_SCL; \
  DELAY(I2C_DELAY);

  I2C() {
    I2C_PORT &= ~(I2C_SDA | I2C_SCL);
    I2C_SCL_HI();
    I2C_SDA_HI();
#ifndef RS_HIGH_ON_IDLE
    suspend();
#endif
  }
  ~I2C() {
    I2C_PORT &= ~(I2C_SDA | I2C_SCL);
    I2C_DDR &= ~(I2C_SDA | I2C_SCL);
  }
  inline void start() {
#ifdef RS_HIGH_ON_IDLE
    I2C_SDA_LO();
#else
    resume();                                  //prepare for I2C
#endif
    I2C_SCL_LO();
    I2C_SDA_HI();
  }
  inline void stop() {
    I2C_SDA_LO();  // ensure SDA is LO so STOP-condition can be initiated by pulling SCL HI (in case of ACK it SDA was already LO, but for a delayed ACK or NACK it is not!)
    I2C_SCL_HI();
    I2C_SDA_HI();
    I2C_DDR &= ~(I2C_SDA | I2C_SCL);  // prepare for a start: pull-up both SDA, SCL
#ifndef RS_HIGH_ON_IDLE
    suspend();
#endif
  }
#define SendBit(data, mask) \
  if (data & mask) { \
    I2C_SDA_HI(); \
  } else { \
    I2C_SDA_LO(); \
  } \
  I2C_SCL_HI(); \
  I2C_SCL_LO();
  /*#define write
  (data) \
    SendBit(data, 1 << 7) \
    SendBit(data, 1 << 6) \
    SendBit(data, 1 << 5) \
    SendBit(data, 1 << 4) \
    SendBit(data, 1 << 3) \
    SendBit(data, 1 << 2) \
    SendBit(data, 1 << 1) \
    SendBit(data, 1 << 0) \
    I2C_SDA_HI();  // recv ACK \
    DELAY(I2C_DELAY);     \
    I2C_SCL_HI();         \
    I2C_SCL_LO();*/
  inline void write
  (uint8_t data) {
    SendBit(data, 1 << 7);
    SendBit(data, 1 << 6);
    SendBit(data, 1 << 5);
    SendBit(data, 1 << 4);
    SendBit(data, 1 << 3);
    SendBit(data, 1 << 2);
    SendBit(data, 1 << 1);
    SendBit(data, 1 << 0);
    I2C_SDA_HI();  // recv ACK
    DELAY(I2C_DELAY);
    I2C_SCL_HI();
    I2C_SCL_LO();
  }
  inline uint8_t RecvBit(uint8_t mask) {
    I2C_SCL_HI();
    uint16_t i = 60000;
    for (; !(I2C_SCL_GET()) && i; i--)
      ;  // wait util slave release SCL to HIGH (meaning data valid), or timeout at 3ms
    //if(!i){ lcd.setCursor(0, 1); lcd.print(F("E07 I2C timeout")); }
    uint8_t data = I2C_SDA_GET();
    I2C_SCL_LO();
    return (data) ? mask : 0;
  }
  inline uint8_t RecvByte(uint8_t last) {
    uint8_t data = 0;
    data |= RecvBit(1 << 7);
    data |= RecvBit(1 << 6);
    data |= RecvBit(1 << 5);
    data |= RecvBit(1 << 4);
    data |= RecvBit(1 << 3);
    data |= RecvBit(1 << 2);
    data |= RecvBit(1 << 1);
    data |= RecvBit(1 << 0);
    if (last) {
      I2C_SDA_HI();  // NACK
    } else {
      I2C_SDA_LO();  // ACK
    }
    DELAY(I2C_DELAY);
    I2C_SCL_HI();
    I2C_SDA_HI();  // restore SDA for read
    I2C_SCL_LO();
    return data;
  }
  inline void resume() {
#ifdef LCD_RS_PORTIO
    I2C_PORT &= ~I2C_SDA;  // pin sharing SDA/LCD_RS mitigation
#endif
  }
  inline void suspend() {
    I2C_SDA_LO();  // pin sharing SDA/LCD_RS: pull-down LCD_RS; QCXLiquidCrystal require this for any operation
  }

  void begin(){};
  void beginTransmission(uint8_t addr) {
    start();
    write
    (addr << 1);
  };
  bool write(uint8_t byte) {
    write
    (byte);
    return 1;
  };
  uint8_t endTransmission() {
    stop();
    return 0;
  };
};

//#define log2(n) (log(n) / log(2))
uint8_t log2(uint16_t x) {
  uint8_t y = 0;
  for (; x >>= 1;) y++;
  return y;
}

I2C i2c;

#else  //0
#include <Wire.h>
#endif //0

TwoWire i2c;



class SI5351 {
public:
  volatile int32_t _fout;
  volatile uint8_t _div;  // note: uint8_t asserts fout > 3.5MHz with R_DIV=1
  volatile uint16_t _msa128min512;
  volatile uint32_t _msb128;
  //volatile uint32_t _mod;
  volatile uint8_t pll_regs[8];

#define BB0(x) ((uint8_t)(x))  // Bash byte x of int32_t
#define BB1(x) ((uint8_t)((x) >> 8))
#define BB2(x) ((uint8_t)((x) >> 16))

#define FAST __attribute__((optimize("Ofast")))

  volatile uint32_t fxtal = F_XTAL;

#define NEW_TX 1
#ifdef NEW_TX
  inline void FAST freq_calc_fast(int16_t df)  // note: relies on cached variables: _msb128, _msa128min512, _div, _fout, fxtal
  {
#define _MSC 0x10000
    uint32_t msb128 = _msb128 + ((int64_t)(_div * (int32_t)df) * _MSC * 128) / fxtal;

    uint16_t msp1 = _msa128min512 + msb128 / _MSC;  // = 128 * _msa + msb128 / _MSC - 512;
    uint16_t msp2 = msb128;                         // = msb128 % _MSC;  assuming MSC is covering exact uint16_t so the mod operation can dissapear (and the upper BB2 byte) // = msb128 - msb128/_MSC * _MSC;

    //pll_regs[0] = BB1(msc);  // 3 regs are constant
    //pll_regs[1] = BB0(msc);
    //pll_regs[2] = BB2(msp1);
    //pll_regs[3] = BB1(msp1);
    pll_regs[4] = BB0(msp1);
    pll_regs[5] = ((_MSC & 0xF0000) >> (16 - 4)) /*|BB2(msp2)*/;  // top nibble MUST be same as top nibble of _MSC !  assuming that BB2(msp2) is always 0 -> so reg is constant
    pll_regs[6] = BB1(msp2);
    pll_regs[7] = BB0(msp2);
  }

  inline void SendPLLRegisterBulk() {
    //i2c.start();
    //i2c.write(SI5351_ADDR << 1);
    i2c.beginTransmission(SI5351_ADDR<<1);
    i2c.write(26 + 0 * 8 + 4);  // Write to PLLA
    //i2c.write(26+1*8 + 4);  // Write to PLLB
    i2c.write(pll_regs[4]);
    i2c.write(pll_regs[5]);
    i2c.write(pll_regs[6]);
    i2c.write(pll_regs[7]);
    //i2c.stop();
    i2c.endTransmission();    
  }
#else                 // !NEW_TX
  inline void FAST freq_calc_fast(int16_t df)  // note: relies on cached variables: _msb128, _msa128min512, _div, _fout, fxtal
  {
#define _MSC 0x80000  //0x80000: 98% CPU load   0xFFFFF: 114% CPU load
    uint32_t msb128 = _msb128 + ((int64_t)(_div * (int32_t)df) * _MSC * 128) / fxtal;
    //uint32_t msb128 = ((int64_t)(_div * (int32_t)df + _mod) * _MSC * 128) / fxtal; // @pre: 14<=_div<=144, |df|<=5000, _mod<=1800e3 (for fout<30M), _MSC=524288

    //#define _MSC  (F_XTAL/128)   // MSC exact multiple of F_XTAL (and maximized to fit in max. span 1048575)
    //uint32_t msb128 = (_div * (int32_t)df + _mod);

    //#define _MSC  0xFFFFF  // Old algorithm 114% CPU load, shortcut for a fixed fxtal=27e6
    //register uint32_t xmsb = (_div * (_fout + (int32_t)df)) % fxtal;  // xmsb = msb * fxtal/(128 * _MSC);
    //uint32_t msb128 = xmsb * 5*(32/32) - (xmsb/32);  // msb128 = xmsb * 159/32, where 159/32 = 128 * 0xFFFFF / fxtal; fxtal=27e6

    //#define _MSC  (F_XTAL/128)  // 114% CPU load  perfect alignment
    //uint32_t msb128 = (_div * (_fout + (int32_t)df)) % fxtal;

    uint32_t msp1 = _msa128min512 + msb128 / _MSC;  // = 128 * _msa + msb128 / _MSC - 512;
    uint32_t msp2 = msb128 % _MSC;                  // = msb128 - msb128/_MSC * _MSC;
    //uint32_t msp1 = _msa128min512;  // = 128 * _msa + msb128 / _MSC - 512;  assuming msb128 < _MSC, so that msp1 is constant
    //uint32_t msp2 = msb128;  // = msb128 - msb128/_MSC * _MSC, assuming msb128 < _MSC

    //pll_regs[0] = BB1(msc);  // 3 regs are constant
    //pll_regs[1] = BB0(msc);
    //pll_regs[2] = BB2(msp1);
    pll_regs[3] = BB1(msp1);
    pll_regs[4] = BB0(msp1);
    pll_regs[5] = ((_MSC & 0xF0000) >> (16 - 4)) | BB2(msp2);  // top nibble MUST be same as top nibble of _MSC !
    pll_regs[6] = BB1(msp2);
    pll_regs[7] = BB0(msp2);
  }

  inline void SendPLLRegisterBulk() {
    //i2c.start();
    i2c.beginTransmission(SI5351_ADDR << 1)
    //i2c.write(SI5351_ADDR << 1);
    i2c.write(26 + 0 * 8 + 3);  // Write to PLLA
    //i2c.write(26+1*8 + 3);  // Write to PLLB
    i2c.write(pll_regs[3]);
    i2c.write(pll_regs[4]);
    i2c.write(pll_regs[5]);
    i2c.write(pll_regs[6]);
    i2c.write(pll_regs[7]);
    //i2c.stop();
    i2c.endTransmission();
  }
#endif                // !NEW_TX

  void SendRegister(uint8_t reg, uint8_t* data, uint8_t n) {
    //i2c.start();
    i2c.beginTransmission(SI5351_ADDR << 1);
  //i2c.write(SI5351_ADDR << 1);
    i2c.write(reg);
    while (n--) i2c.write(*data++);
    //i2c.stop();
    i2c.endTransmission();
  }
  void SendRegister(uint8_t reg, uint8_t val) {
    SendRegister(reg, &val, 1);
  }
  int16_t iqmsa;  // to detect a need for a PLL reset
                  ///*
  enum ms_t { PLLA = 0,
              PLLB = 1,
              MSNA = -2,
              MSNB = -1,
              MS0 = 0,
              MS1 = 1,
              MS2 = 2,
              MS3 = 3,
              MS4 = 4,
              MS5 = 5 };

  void ms(int8_t n, uint32_t div_nom, uint32_t div_denom, uint8_t pll = PLLA, uint8_t _int = 0, uint16_t phase = 0, uint8_t rdiv = 0) {
    uint16_t msa;
    uint32_t msb, msc, msp1, msp2, msp3;
    msa = div_nom / div_denom;                                                  // integer part: msa must be in range 15..90 for PLL, 8+1/1048575..900 for MS
    if (msa == 4) _int = 1;                                                     // To satisfy the MSx_INT=1 requirement of AN619, section 4.1.3 which basically says that for MS divider a value of 4 and integer mode must be used
    msb = (_int) ? 0 : (((uint64_t)(div_nom % div_denom) * _MSC) / div_denom);  // fractional part
    msc = (_int) ? 1 : _MSC;
    //lcd.setCursor(0, 0); lcd.print(n); lcd.print(":"); lcd.print(msa); lcd.print(" "); lcd.print(msb); lcd.print(" "); lcd.print(msc); lcd.print(F("    ")); delay(500);
    msp1 = 128 * msa + 128 * msb / msc - 512;
    msp2 = 128 * msb - 128 * msb / msc * msc;
    msp3 = msc;
    uint8_t ms_reg2 = BB2(msp1) | (rdiv << 4) | ((msa == 4) * 0x0C);
    uint8_t ms_regs[8] = { BB1(msp3), BB0(msp3), ms_reg2, BB1(msp1), BB0(msp1), BB2(((msp3 & 0x0F0000) << 4) | msp2), BB1(msp2), BB0(msp2) };

    SendRegister(n * 8 + 42, ms_regs, 8);  // Write to MSx
    if (n < 0) {
      SendRegister(n + 16 + 8, 0x80 | (0x40 * _int));  // MSNx PLLn: 0x40=FBA_INT; 0x80=CLKn_PDN
    } else {
      //SendRegister(n+16, ((pll)*0x20)|0x0C|0|(0x40*_int));  // MSx CLKn: 0x0C=PLLA,0x2C=PLLB local msynth; 0=2mA; 0x40=MSx_INT; 0x80=CLKx_PDN
      SendRegister(n + 16, ((pll)*0x20) | 0x0C | 3 | (0x40 * _int));  // MSx CLKn: 0x0C=PLLA,0x2C=PLLB local msynth; 3=8mA; 0x40=MSx_INT; 0x80=CLKx_PDN
      SendRegister(n + 165, (!_int) * phase * msa / 90);              // when using: make sure to configure MS in fractional-mode, perform reset afterwards
    }
  }

  void phase(int8_t n, uint32_t div_nom, uint32_t div_denom, uint16_t phase) {
    SendRegister(n + 165, phase * (div_nom / div_denom) / 90);
  }  // when using: make sure to configure MS in fractional-mode!, perform reset afterwards

  void reset() {
    SendRegister(177, 0xA0);
  }  // 0x20 reset PLLA; 0x80 reset PLLB

  void oe(uint8_t mask) {
    SendRegister(3, ~mask);
  }  // output-enable mask: CLK2=4; CLK1=2; CLK0=1

  void freq(int32_t fout, uint16_t i, uint16_t q) {  // Set a CLK0,1,2 to fout Hz with phase i, q (on PLLA)
    uint8_t rdiv = 0;                                // CLK pin sees fout/(2^rdiv)
    if (fout > 300000000) {
      i /= 3;
      q /= 3;
      fout /= 3;
    }  // for higher freqs, use 3rd harmonic
    if (fout < 500000) {
      rdiv = 7;
      fout *= 128;
    }  // Divide by 128 for fout 4..500kHz
    uint16_t d;
    if (fout < 30000000) d = (16 * fxtal) / fout;
    else d = (32 * fxtal) / fout;                                            // Integer part  .. maybe 44?
    if (fout < 3500000) d = (7 * fxtal) / fout;                              // PLL at 189MHz to cover 160m (freq>1.48MHz) when using 27MHz crystal
    if (fout > 140000000) d = 4;                                             // for f=140..300MHz; AN619; 4.1.3, this implies integer mode
    if (d % 2) d++;                                                          // even numbers preferred for divider (AN619 p.4 and p.6)
    if ((d * (fout - 5000) / fxtal) != (d * (fout + 5000) / fxtal)) d += 2;  // Test if multiplier remains same for freq deviation +/- 5kHz, if not use different divider to make same
    uint32_t fvcoa = d * fout;                                               // Variable PLLA VCO frequency at integer multiple of fout at around 27MHz*16 = 432MHz
    // si5351 spectral purity considerations: https://groups.io/g/QRPLabs/message/42662

    ms(MSNA, fvcoa, fxtal);  // PLLA in fractional mode
    //ms(MSNB, fvcoa, fxtal);
    ms(MS0, fvcoa, fout, PLLA, 0, i, rdiv);  // Multisynth stage with integer divider but in frac mode due to phase setting
    ms(MS1, fvcoa, fout, PLLA, 0, q, rdiv);
#ifdef F_CLK2
    freqb(F_CLK2);
#else
    ms(MS2, fvcoa, fout, PLLA, 0, 0, rdiv);
#endif
    if (iqmsa != (((int8_t)i - (int8_t)q) * ((int16_t)(fvcoa / fout)) / 90)) {
      iqmsa = ((int8_t)i - (int8_t)q) * ((int16_t)(fvcoa / fout)) / 90;
      reset();
    }
    oe(0b00000011);  // output enable CLK0, CLK1

#ifdef x
    ms(MSNA, fvcoa, fxtal);
    ms(MSNB, fvcoa, fxtal);
#define F_DEV 4
    ms(MS0, fvcoa, (fout + F_DEV), PLLA, 0, 0, rdiv);
    ms(MS1, fvcoa, (fout + F_DEV), PLLA, 0, 0, rdiv);
    ms(MS2, fvcoa, fout, PLLA, 0, 0, rdiv);
    reset();
    ms(MS0, fvcoa, fout, PLLA, 0, 0, rdiv);
    delayMicroseconds(F_MCU / 16000000 * 1000000UL / F_DEV);  // Td = 1/(4 * Fdev) phase-shift   https://tj-lab.org/2020/08/27/si5351%e5%8d%98%e4%bd%93%e3%81%a73mhz%e4%bb%a5%e4%b8%8b%e3%81%ae%e7%9b%b4%e4%ba%a4%e4%bf%a1%e5%8f%b7%e3%82%92%e5%87%ba%e5%8a%9b%e3%81%99%e3%82%8b/
    ms(MS1, fvcoa, fout, PLLA, 0, 0, rdiv);
    oe(0b00000011);  // output enable CLK0, CLK1
#endif
    _fout = fout;  // cache
    _div = d;
    _msa128min512 = fvcoa / fxtal * 128 - 512;
    _msb128 = ((uint64_t)(fvcoa % fxtal) * _MSC * 128) / fxtal;
    //_mod = fvcoa % fxtal;
  }

  void freqb(uint32_t fout) {  // Set a CLK2 to fout Hz (on PLLB)
    uint16_t d = (16 * fxtal) / fout;
    if (d % 2) d++;             // even numbers preferred for divider (AN619 p.4 and p.6)
    uint32_t fvcoa = d * fout;  // Variable PLLA VCO frequency at integer multiple of fout at around 27MHz*16 = 432MHz

    ms(MSNB, fvcoa, fxtal);
    ms(MS2, fvcoa, fout, PLLB, 0, 0, 0);
  }

  //*/
  /*
  void freq(uint32_t fout, uint16_t i, uint16_t q){  // Set a CLK0,1 to fout Hz with phase i, q
      uint16_t msa; uint32_t msb, msc, msp1, msp2, msp3;
      uint8_t rdiv = 0;             // CLK pin sees fout/(2^rdiv)
      if(fout > 300000000){ i/=3; q/=3; fout/=3; }  // for higher freqs, use 3rd harmonic
      if(fout < 500000){ rdiv = 7; fout *= 128; } // Divide by 128 for fout 4..500kHz

      uint16_t d = (16 * fxtal) / fout;  // Integer part
      //if(fout > 7000000) d = (33 * fxtal) / fout;
      if(fout < 3500000) d = (7 * fxtal) / fout;  // PLL at 189MHz to cover 160m (freq>1.48MHz) when using 27MHz crystal

      if( (d * (fout - 5000) / fxtal) != (d * (fout + 5000) / fxtal) ) d++; // Test if multiplier remains same for freq deviation +/- 5kHz, if not use different divider to make same
      if(d % 2) d++;  // even numbers preferred for divider (AN619 p.4 and p.6)
      bool divby4 = 0; if(fout > 140000000){ d = 4; divby4 = 1; } // for f=140..300MHz; AN619; 4.1.3
      uint32_t fvcoa = d * fout;  // Variable PLLA VCO frequency at integer multiple of fout at around 27MHz*16 = 432MHz
      msa = fvcoa / fxtal;     // Integer part of vco/fxtal. msa must be in range 15..90
      msb = ((uint64_t)(fvcoa % fxtal)*_MSC) / fxtal; // fractional part
      msc = _MSC;
      
      msp1 = 128*msa + 128*msb/msc - 512;
      msp2 = 128*msb - 128*msb/msc * msc;
      msp3 = msc;
      uint8_t pll_regs[8] = { BB1(msp3), BB0(msp3), BB2(msp1), BB1(msp1), BB0(msp1), BB2(((msp3 & 0x0F0000)<<4) | msp2), BB1(msp2), BB0(msp2) };
      SendRegister(26+0*8, pll_regs, 8); // Write to PLLA
      SendRegister(26+1*8, pll_regs, 8); // Write to PLLB
      SendRegister(16+6, 0x80); // PLLA in fractional mode; 0x40=FBA_INT; 0x80=CLK6_PDN
      SendRegister(16+7, 0x80); // PLLB in fractional mode; 0x40=FBB_INT; 0x80=CLK7_PDN

      msa = fvcoa / fout;     // Integer part of vco/fout. msa must be in range 6..127 (support for integer and initial phase offset)
      //lcd.setCursor(0, 0); lcd.print(fvcoa/fxtal); lcd.print(" "); lcd.print(msb); lcd.print(" "); lcd.print(msa); lcd.print(F("     "));
      msp1 = (divby4) ? 0 : (128*msa - 512);     // msp1 and msp2=0, msp3=1, integer division
      msp2 = 0;
      msp3 = 1;
      uint8_t ms_regs[8] = { BB1(msp3), BB0(msp3), BB2(msp1) | (rdiv<<4) | (divby4*0x0C), BB1(msp1), BB0(msp1), BB2(((msp3 & 0x0F0000)<<4) | msp2), BB1(msp2), BB0(msp2) };
      SendRegister(42+0*8, ms_regs, 8); // Write to MS0
      SendRegister(42+1*8, ms_regs, 8); // Write to MS1
      SendRegister(42+2*8, ms_regs, 8); // Write to MS2
      SendRegister(16+0, 0x0C|3|(0x40*divby4));  // CLK0: 0x0C=PLLA local msynth; 3=8mA; 0x40=MS0_INT; 0x80=CLK0_PDN
      SendRegister(16+1, 0x0C|3|(0x40*divby4));  // CLK1: 0x0C=PLLA local msynth; 3=8mA; 0x40=MS1_INT; 0x80=CLK1_PDN
      SendRegister(16+2, 0x2C|3|(0x40*divby4));  // CLK2: 0x2C=PLLB local msynth; 3=8mA; 0x40=MS2_INT; 0x80=CLK2_PDN
      SendRegister(165, i * msa / 90);  // CLK0: I-phase (on change -> Reset PLL)
      SendRegister(166, q * msa / 90);  // CLK1: Q-phase (on change -> Reset PLL)
      if(iqmsa != ((i-q)*msa/90)){ iqmsa = (i-q)*msa/90; SendRegister(177, 0xA0); } // 0x20 reset PLLA; 0x80 reset PLLB
      SendRegister(3, 0b11111100);      // Enable/disable clock

      _fout = fout;  // cache
      _div = d;
      _msa128min512 = fvcoa / fxtal * 128 - 512;
      _msb128=((uint64_t)(fvcoa % fxtal)*_MSC*128) / fxtal;
  }
*/
  uint8_t RecvRegister(uint8_t reg) {
    //i2c.start();  // Data write to set the register address 
    i2c.beginTransmission(SI5351_ADDR << 1);
    //i2c.write(SI5351_ADDR << 1);
    i2c.write(reg);
    i2c.endTransmission();
    //i2c.stop();
    //i2c.start();  // Data read to retrieve the data from the set address
    i2c.beginTransmission((SI5351_ADDR << 1) | 1);
    //i2c.write((SI5351_ADDR << 1) | 1);
    //uint8_t data = i2c.RecvByte(true);
    uint8_t data = i2c.read();
    i2c.endTransmission();
    //i2c.stop();
    return data;
  }
  void powerDown() {
    SendRegister(3, 0b11111111);                                             // Disable all CLK outputs
    SendRegister(24, 0b00010000);                                            // Disable state: CLK2 HIGH state, CLK0 & CLK1 LOW state when disabled; CLK2 needs to be in HIGH state to make sure that cap to gate is already charged, preventing "exponential pulse is caused by CLK2, which had been at 0v whilst it was disabled, suddenly generating a 5vpp waveform, which is “added to” the 0v filtered PWM output and causing the output fets to be driven with the full 5v pp.", see: https://forum.dl2man.de/viewtopic.php?t=146&p=1307#p1307
    SendRegister(25, 0b00000000);                                            // Disable state: LOW state when disabled
    for (int addr = 16; addr != 24; addr++) SendRegister(addr, 0b10000000);  // Conserve power when output is disabled
    SendRegister(187, 0);                                                    // Disable fanout (power-safe)
    // To initialise things as they should:
    SendRegister(149, 0);           // Disable spread spectrum enable
    SendRegister(183, 0b11010010);  // Internal CL = 10 pF (default)
  }
#define SI_CLK_OE 3
};
static SI5351 si5351;




void setup() {

  //Start CAT's USB-serial adapter
  Serial.begin(57600);
  delay(100);
  Serial.write("Starting\n");
}

void loop() {

    if(mode == CW){
      si5351.freq(freq + cw_offset, rx_ph_q, 0/*90, 0*/);  // RX in CW-R (=LSB), correct for CW-tone offset
    } else
    if(mode == LSB)
      si5351.freq(freq, rx_ph_q, 0/*90, 0*/);  // RX in LSB
    else
      si5351.freq(freq, 0, rx_ph_q/*0, 90*/);  // RX in USB, ...
#ifdef RIT_ENABLE
    if(rit){ si5351.freq_calc_fast(rit); si5351.SendPLLRegisterBulk(); }
#endif //RIT_ENABLE


}



// CAT support inspired by Charlie Morris, ZL2CTM, contribution by Alex, PE1EVX, source: http://zl2ctm.blogspot.com/2020/06/digital-modes-transceiver.html?m=1
// https://www.kenwood.com/i/products/info/amateur/ts_480/pdf/ts_480_pc.pdf
#define CATCMD_SIZE 32
char CATcmd[CATCMD_SIZE];

void analyseCATcmd() {

  if ((CATcmd[0] == 'F') && (CATcmd[1] == 'A') && (CATcmd[2] == ';'))
    Command_GETFreqA();

  else if ((CATcmd[0] == 'F') && (CATcmd[1] == 'A') && (CATcmd[13] == ';'))
    Command_SETFreqA();

  else if ((CATcmd[0] == 'I') && (CATcmd[1] == 'F') && (CATcmd[2] == ';'))
    Command_IF();

  else if ((CATcmd[0] == 'I') && (CATcmd[1] == 'D') && (CATcmd[2] == ';'))
    Command_ID();

    else if ((CATcmd[0] == 'K') && (CATcmd[1] == 'Y') && (CATcmd[2] == ';'))
    Command_KY();

  else if ((CATcmd[0] == 'P') && (CATcmd[1] == 'S') && (CATcmd[2] == ';'))
    Command_PS();

  else if ((CATcmd[0] == 'P') && (CATcmd[1] == 'S') && (CATcmd[2] == '1'))
    Command_PS1();

  else if ((CATcmd[0] == 'A') && (CATcmd[1] == 'I') && (CATcmd[2] == ';'))
    Command_AI();

  else if ((CATcmd[0] == 'A') && (CATcmd[1] == 'I') && (CATcmd[2] == '0'))
    Command_AI0();

  else if ((CATcmd[0] == 'M') && (CATcmd[1] == 'D') && (CATcmd[2] == ';'))
    Command_GetMD();

  else if ((CATcmd[0] == 'M') && (CATcmd[1] == 'D') && (CATcmd[3] == ';'))
    Command_SetMD();

  else if ((CATcmd[0] == 'R') && (CATcmd[1] == 'X') && (CATcmd[2] == ';'))
    Command_RX();

  else if ((CATcmd[0] == 'T') && (CATcmd[1] == 'X') && (CATcmd[2] == ';'))
    Command_TX0();

  else if ((CATcmd[0] == 'T') && (CATcmd[1] == 'X') && (CATcmd[2] == '0'))
    Command_TX0();

  else if ((CATcmd[0] == 'T') && (CATcmd[1] == 'X') && (CATcmd[2] == '1'))
    Command_TX1();

  else if ((CATcmd[0] == 'T') && (CATcmd[1] == 'X') && (CATcmd[2] == '2'))
    Command_TX2();

  else if ((CATcmd[0] == 'A') && (CATcmd[1] == 'G') && (CATcmd[2] == '0'))  // add
    Command_AG0();

  else if ((CATcmd[0] == 'X') && (CATcmd[1] == 'T') && (CATcmd[2] == '1'))  // add
    Command_XT1();

  else if ((CATcmd[0] == 'R') && (CATcmd[1] == 'T') && (CATcmd[2] == '1'))  // add
    Command_RT1();

  else if ((CATcmd[0] == 'R') && (CATcmd[1] == 'C') && (CATcmd[2] == ';'))  // add
    Command_RC();

  else if ((CATcmd[0] == 'F') && (CATcmd[1] == 'L') && (CATcmd[2] == '0'))  // need?
    Command_FL0();

  else if ((CATcmd[0] == 'R') && (CATcmd[1] == 'S') && (CATcmd[2] == ';'))
    Command_RS();

  else if ((CATcmd[0] == 'V') && (CATcmd[1] == 'X') && (CATcmd[2] != ';'))
    Command_VX(CATcmd[2]);

  else {
    Serial.print("\n?;");
    Serial.println(CATcmd);
#ifdef DEBUG
    {
      lcd.setCursor(0, 0);
      lcd.print(CATcmd);
      lcd_blanks();
    }  // Print error cmd
#else
    //{ lcd.setCursor(15, 1); lcd.print('E'); }
#endif
  }
}

volatile uint8_t cat_ptr = 0;
void serialEvent() {
  if (Serial.available()) {
    //   rxend_event = millis() + 10;  // block display until this moment, to prevent CAT cmds that initiate display changes to interfere with the next CAT cmd e.g. Hamlib: FA00007071000;ID;
    char data = Serial.read();
    if (data != '\n') {
      CATcmd[cat_ptr++] = data;
      if (data == ';') {
        CATcmd[cat_ptr] = '\0';  // terminate the array
        cat_ptr = 0;             // reset for next CAT command
        analyseCATcmd();
        delay(10);
      } else if (cat_ptr > (CATCMD_SIZE - 1)) {
        Serial.print("E;");
        cat_ptr = 0;
      }  // overrun
    }    
  }
}



//CAT Get VFO A frequency
//Usage:  FA;             
void Command_GETFreqA() {
  char Catbuffer[32];
  unsigned int g, m, k, h;
  uint32_t tf;

  tf = freq;
  g = (unsigned int)(tf / 1000000000lu);
  tf -= g * 1000000000lu;
  m = (unsigned int)(tf / 1000000lu);
  tf -= m * 1000000lu;
  k = (unsigned int)(tf / 1000lu);
  tf -= k * 1000lu;
  h = (unsigned int)tf;

  sprintf(Catbuffer, "FA%02u%03u", g, m);
  Serial.print(Catbuffer);
  sprintf(Catbuffer, "%03u%03u;", k, h);
  Serial.print(Catbuffer);
}

//CAT Set VFO A frequency
//Usage:  FA7030000;    
void Command_SETFreqA() {
  char Catbuffer[16];
  strncpy(Catbuffer, CATcmd + 2, 11);
  Catbuffer[11] = '\0';

  freq = (uint32_t)atol(Catbuffer);
  change = true;
}

//CAT Get radio information
//Usage:  IF;
void Command_IF() {

  char Catbuffer[32];
  unsigned int g, m, k, h;
  uint32_t tf;

  tf = freq;
  g = (unsigned int)(tf / 1000000000lu);
  tf -= g * 1000000000lu;
  m = (unsigned int)(tf / 1000000lu);
  tf -= m * 1000000lu;
  k = (unsigned int)(tf / 1000lu);
  tf -= k * 1000lu;
  h = (unsigned int)tf;

  sprintf(Catbuffer, "IF%02u%03u%03u%03u", g, m, k, h);
  Serial.print(Catbuffer);
  sprintf(Catbuffer, "00000+000000");
  Serial.print(Catbuffer);
  sprintf(Catbuffer, "0000");
  Serial.print(Catbuffer);
  Serial.print(mode + 1);
  sprintf(Catbuffer, "0000000;");
  Serial.print(Catbuffer);
}

//CAT CW/FSK keying
//Usage:  KY <string>;    -- Transmit <string> (max length is 26 chars to avoid overflow of Serial buffer)
//        KYW<string>;    -- Wait for <string> to transmit before processing the next command
void Command_KY() {

}

//CAT Auto-Information (not implemented)
void Command_AI() {
  Serial.print("AI0;");
}

//CAT Set Audio Gain (not implemented)
//Usage:  AG0;
void Command_AG0() {
  Serial.print("AG0;");
}

//CAT Get Data Sub-Mode
//Usage:  DT;            -- In DATA mode, returns 2, FSK D
void Command_DT() {
  Serial.print("DT2;");
}

//CAT Set XIT
//Usage:  XTn;              -- 0=off, 1=on
void Command_XT1() {
  Serial.print("XT1;");
}

//CAT Set RIT
//Usage:  RTn;              -- 0=off, 1=on
void Command_RT1() {
  Serial.print("RT1;");
}

//CAT Reset RIT offset to zero
//Usage:  RC;               -- No parameter
void Command_RC() {
  rit = 0;
  Serial.print("RC;");
}

//CAT Unknown command
void Command_FL0() {
  Serial.print("FL0;");
}

//CAT Get modulation mode
//Usage:  MD;               -- Returns 3=CW, 6=DATA
void Command_GetMD() {
  Serial.print("MD");
  Serial.print(mode + 1);
  Serial.print(';');
}

//CAT Set modulation mode
//Usage:  MDn;               -- Supported values are 3=CW, 6=DATA
void Command_SetMD() {
  mode = CATcmd[2] - '1';

  vfomode[vfosel % 2] = mode;
  change = true;
  si5351.iqmsa = 0;  // enforce PLL reset
}

//CAT Set auto-information
//Usage:  AIn;              -- Unsupported
void Command_AI0() {
  Serial.print("AI0;");
}

//CAT Set T/R to receiver mode (like releasing a transmit button)
//Usage:  RX;
void Command_RX() {
#ifdef TX_ENABLE
  switch_rxtx(0);
  semi_qsk_timeout = 0;  // hack: fix for multiple RX cmds
#endif
  Serial.print("RX0;");
}


//CAT T/R to transmit mode (like pressing a transmit button)
//Usage:  TX;               -- No data
void Command_TX0() {
#ifdef TX_ENABLE
  switch_rxtx(1);
#endif
}

void Command_TX1() {
#ifdef TX_ENABLE
  switch_rxtx(1);
#endif
}

void Command_TX2() {
#ifdef TX_ENABLE
  switch_rxtx(1);
#endif
}

//CAT unknown
void Command_RS() {
  Serial.print("RS0;");
}

//CAT Get VOX mode value
//Usage:  VX;                     -- TODO
void Command_VX(char mode) {
  char Catbuffer[16];
  sprintf(Catbuffer, "VX%c;", mode);
  Serial.print(Catbuffer);
}

//CAT Get transmitter ID
void Command_ID() {
  Serial.print("ID020;");
}

//CAT Get power status
//Usage:  PS;
void Command_PS() {
  Serial.print("PS1;");
}

//CAT Set power status
//Usage:  PSn;              -- 0=off, 1=on
void Command_PS1() {
}

