# wsjtxr
 WSJTX/R Software-Defined Radio
 
 WSJTX/R is a software-defined radio for FSK (Frequency Shift Keying) and ASK (Amplitude Shift Keying --- e.g. CW) digital modes constructed around the wsjt-x software executing on a Raspberry Pi 4.
 
 # Investigations
 * Controlling the output power of the Class E final amplifier by varying the duty cycle of the exciter's waveform to avoid key clicks (excessive bandwidth of the Amplitude Shift Keying signal)
 * Fabrication of four layer PCB prototypes
 * Encode/decode CW in wsjt-x
 * Replace wsjt-x with a low-power, embedded implementation of the digital modulators/demodulators
 
 ## Project Milestones
 1. Using Raspberry Pi hardware and an existing commercial transceiver, replace the off-the-shelf wsjt-x binaries with built-from-source binaries 
 1. Replace the commercial transceiver with homebrew SDR front-end delivering IQ signals to a derivative of wsjt-x modified to decode the IQ audio
 1. Implement CW key-shaping (Pulse shaping of the Class E power amp) to enable CW operation in the hardware.  Modify the software to send/receive CW.
 
 ## Status
03/29/2023 Working on Milestone 1

