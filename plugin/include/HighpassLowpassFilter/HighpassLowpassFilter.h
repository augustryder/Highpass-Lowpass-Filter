#pragma once
#include <vector>
#include <juce_audio_processors/juce_audio_processors.h>

class HighpassLowpassFilter {
public:
  void setHighpass(bool highpass);
  void setCutoffFrequency(float cutoffFrequency);
  void setSamplingRate(float samplingRate);
  void processBlock(juce::AudioBuffer<float>& buffer, juce::MidiBuffer&);

private:
  bool highpass;
  float cutoffFrequency;
  float samplingRate;
  std::vector<float> dnBuffer;
};
