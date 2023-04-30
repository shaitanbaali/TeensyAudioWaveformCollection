/*  Example for waveform integration
 *   
 *  Teensy Audio 
 *  https://github.com/PaulStoffregen/Audio 
 * 
 *  This code is in the public domain, CC0 1.0 Universal (CC0 1.0)
 *  https://creativecommons.org/publicdomain/zero/1.0/
 *
 *  This example is provided with the TeensyAudioWaveformCollection 
 *  Converted by Marcelo Valeria, https://github.com/shaitanbaali 
 */

#include <Audio.h>
#include "AKWF_0101_256.h"

// GUItool: begin automatically generated code
AudioSynthWaveform       waveform1;      //xy=256,173
AudioOutputI2S           i2s1;           //xy=445,157
AudioOutputAnalogStereo  dacs1;          //xy=457,262
AudioConnection          patchCord1(waveform1, 0, i2s1, 0);
AudioConnection          patchCord2(waveform1, 0, dacs1, 0);
AudioConnection          patchCord3(waveform1, 0, i2s1, 1);
AudioConnection          patchCord4(waveform1, 0, dacs1, 1);
AudioControlSGTL5000     sgtl5000_1;     //xy=324,321
// GUItool: end automatically generated code

void setup() {
  Serial.begin(9600);
  // Audio connections require memory to work.  For more
  // detailed information, see the MemoryAndCpuUsage example
  AudioMemory(10);

  // Comment these out if not using the audio adaptor board.
  // This may wait forever if the SDA & SCL pins lack
  // pullup resistors
  sgtl5000_1.enable();
  sgtl5000_1.volume(0.5); 

  waveform1.arbitraryWaveform(AKWF_0101_256_DATA, 172.0);

  // configure both waveforms for 440 Hz and mid amplitude
  waveform1.frequency(440);
  waveform1.amplitude(0.5);
  waveform1.begin(WAVEFORM_ARBITRARY);
}

void loop() {
  
}
