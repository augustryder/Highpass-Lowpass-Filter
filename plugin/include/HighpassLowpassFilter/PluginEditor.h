#pragma once

#include "PluginProcessor.h"

namespace audio_plugin {

class AudioPluginAudioProcessorEditor : public juce::AudioProcessorEditor {
public:
  explicit AudioPluginAudioProcessorEditor(AudioPluginAudioProcessor&, juce::AudioProcessorValueTreeState& vts);
  ~AudioPluginAudioProcessorEditor() override;

  void paint(juce::Graphics&) override;
  void resized() override;

private:
  // This reference is provided as a quick way for your editor to
  // access the processor object that created it.
  AudioPluginAudioProcessor& processorRef;

  juce::Slider cutoffFrequencySlider;
  std::unique_ptr<juce::AudioProcessorValueTreeState::SliderAttachment> cutoffFrequencyAttachment;
  juce::Label cutoffFrequencyLabel;

  juce::ToggleButton highpassButton;
  std::unique_ptr<juce::AudioProcessorValueTreeState::ButtonAttachment> highpassAttachment;
  juce::Label highpassButtonLabel;

  JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(AudioPluginAudioProcessorEditor)
};
}  // namespace audio_plugin
