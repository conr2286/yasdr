# wsjtxr
 WSJTX Software-Defined Radio
 
 WSJTX is a software-defined radio for FSK (Frequency Shift Keying) and ASK (Amplitude Shift Keying --- e.g. CW) digital modes constructed around the wsjt-x software executing on a Raspberry Pi 4.
 
 ## Project Plan
 1. Collect supporting documentation
 1. Choose a CODEC and get the off-the-shelf binary wsjt-x running on the Raspberry Pi using a commercial transceiver (e.g. Elecraft K3) for the RF board
 1. Replace the off-the-shelf wsjt-x binaries with built-from-source binaries
 1. Replace the commercial transceiver with homebrew SDR front-end delivering IQ signals to a derivative of wsjt-x modified to decode the IQ audio
 1. Implement CW key-shaping firmware to control the rise/fall times (and, hence, the spectrum width) of the transmitted signal
 1. Implement CW mode in wsjt-x
 
 ## Status
Collecting supporting documentation

