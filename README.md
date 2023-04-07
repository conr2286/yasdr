# yasdr
 Yet Another Software-Defined Radio
 
YASDR is a software-defined radio transceiver for FSK (Frequency Shift Keying) and CW digital modes constructed around the wsjt-x software executing on a Raspberry Pi 4.
 
 # Investigations
 * Implementing the controller for the SI5351a VFO on Raspberry Pi 4
 * Controlling the output power of the Class E final amplifier
 * Fabrication of four layer PCB prototypes
 * Encode/decode CW in wsjt-x
 * Replace wsjt-x with a low-power, embedded implementation of the digital modulators/demodulators
 
 ## Project Milestones
 * Port an existing SI5351a "library" to the RPi
 * Implement CAT controls on the RPi
 * Using Raspberry Pi hardware and an existing commercial transceiver, replace the off-the-shelf wsjt-x binaries with built-from-source binaries 
 * Replace the commercial transceiver with homebrew SDR front-end delivering IQ signals to a derivative of wsjt-x modified to decode IQ audio from the stereo CODEC
 * Implement support for CW in wsjt-x and key-shaping in the Class E PA
 
 ## Status
04/07/2023 investigations/SI5351V2 code generates quadrature signals

