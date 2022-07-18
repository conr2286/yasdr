# xSDX RoadMap

1. With a minimum if any changes, fab the uSDX-x hardware with the existing uSDX firmware and measure its performance to establish a baseline for xSDX
2. Replace the Arduino Nano with the Arduino Nano Every to gain more flash and SRAM space for firmware features on a 20mHz 8-bit processor
3. Test and publish an 8-bit SOTA implementation with room to grow
4. Replace the Arduino Nano Every with a 32-bit board (e.g. Arduino RP2040 or whatever) to gain greatly increased performance and expansion capacity
    1. Ensure all C++ datatypes specify their word size and sign expectations
    4. Locate and workaround obvious timing dependencies
    3. Locate and workaround use of asm() for chosen processor
    2. Locate and workaround use of hardwired dependencies upon ATMega328 peripherals
    5. Take advantage of the 12-bit or whatever ADC
5. Test and publish a 32-bit implementation
6. Investigate feasibility/performance of a (for exmample) 10KHz IF rather than DC
7. Investigate feasibility/performance of using an instrumentation amp after Tayloe detector
