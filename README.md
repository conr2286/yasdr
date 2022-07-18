# yasdx --- Yet Another Software Defined (Radio) Transceiver
Yasdx is yet another software defined transceiver inspired by the SDX thread.  The objective is to implement a single band Summits on the Air (SOTA) transceiver using the popular Tayloe Detector, an Arduino-like processor relaxing the constraints imposed upon SDX by the ATmega328 architecture, and an SDX-inspired Class E QRP transmitter.

### Roadmap
* Investigate technology decisions to pivot away from the ATmega318 processor limitations
* Prototype the receiver's DSP signal flow using gnuradio
* Implement the hardware drawing inspiration from the uSDX-x project
* Implement the firmware (fw) for a minimal receiver
* Receiver enhancements (AGC, filters, noise reduction, RIT, and related goodies)
* Transmitter
* Activate an Idaho SOTA peak 

### Status
06/11/2022 Began the initial planning/organization leveraging ideas from the xSDX project
07/17/2022 Ongoing investigations required to pivot away from the ATmega328 constraints

### Objectives
* Encourage homebrew development with open source/hardware licensing & tools
* Ongoing experimentation with firmware and hardware
* Facilitate cost, feature and performance choices (a la Scott's uSDX-x)
* Relax firmware constraints imposed by the ATmega328 microprocessor
* Flexible component sourcing to escape unobtainium parts constrained by COVID
* Portable, SOTA-friendly embodiment (I am *not* backpacking an 8-band station up a hill:)

### Attribution
* Hans (QRP Labs - G0UPL) QCX kits inspired widespread interest in home built SDR equipment
* Guido (PE1NNZ) demonstrated SSB/etc DSP firmware executing on an 8-bit ATmega328
* Scott (KD9PDP) drew from multiple sources to create the uSDX-x thread
* Many other contributors whose names only appear in the bibliographic material
* Jim (KQ7B) your author, a curious engineer and retired professor of Computer Science :)

### Manifest
* hw:  Hardware files (and their licenses)
* fw:  Firmware files (nothing implemented yet)
* doc: xSDX Documentation
* bib: Bibliography (the "shoulders of giants") documenting previous contributions and resources
* investigations:  Small stand-alone projects investigating technology decisions to be made

### Tools
* Firmware development with the Arduino IDE 2.0
* Hardware development with KiCad 

### Parts Suppliers
* Adafruit
* Arduino
* Sparkfun
