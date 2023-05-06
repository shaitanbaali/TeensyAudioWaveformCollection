Teensy Audio AKWF Waveform Collection
====================

Waveform collection for Teensy Audio Library converted from 
Adventure Kid Waveforms (AKWF) Open library using 
Wolfram Mathematica 12:

Code:
```Mathematica
Flatten[Floor[32765 Import["File.wav", "Data", SampleRate -> 18816]]]
```

The notebook for Mathematica is in the tools folder. 

Features:

* 4358 waveforms with a visual index guide and the original WAV 16 bit 44.1 kHz file normalized to -0.1dB for amplitude consistency.
* A 256 samples long Arduino H waveform library for each waveform ready for use with Teensy Audio Library. 
* 16 bit, 44.1 kHz streaming audio is generated by interpolation on Teensy Audio library.
* One instrument can import and use multiple waveforms as supported by Teensy Audio library.



Adventure Kid Waveforms(AKWF) Open waveforms library
https://www.adventurekid.se/akrt/waveforms/adventure-kid-waveforms/ 

Waveforms Visual Index
https://www.adventurekid.se/AKRTfiles/AKWF/view/waveforms_index.html

Teensy Audio Library 
16 bit, 44.1 kHz streaming audio library for Teensy 3.x and Teensy 4.x
https://www.pjrc.com/teensy/td_libs_Audio.html 


This code is in the public domain, CC0 1.0 Universal (CC0 1.0)
https://creativecommons.org/publicdomain/zero/1.0/

Converted by Marcelo Valeria 
https://github.com/shaitanbaali

