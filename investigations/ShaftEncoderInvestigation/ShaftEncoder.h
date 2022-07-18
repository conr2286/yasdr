/**
   @file Definitions for the ShaftEncoder  module
*/

  long getEncoderPosition();

class ShaftEncoder {

  
  public:
    ShaftEncoder(uint8_t a, uint8_t b);
    static void encoderSetup();
    static long getPosition();
    static void setPosition(long);
    static unsigned getNInvalids();
 
};
