#include "HighpassLowpassFilter/PluginEditor.h"
#include "HighpassLowpassFilter/PluginProcessor.h"

namespace audio_plugin {
AudioPluginAudioProcessorEditor::AudioPluginAudioProcessorEditor(AudioPluginAudioProcessor& p, 
                                                                 juce::AudioProcessorValueTreeState& vts)
    : AudioProcessorEditor(&p), processorRef(p) 
{
  addAndMakeVisible(cutoffFrequencySlider);
  cutoffFrequencySlider.setSliderStyle(juce::Slider::SliderStyle::LinearVertical);
  cutoffFrequencyAttachment.reset(new juce::AudioProcessorValueTreeState::SliderAttachment(
    vts, "cutoff_frequency", cutoffFrequencySlider
  ));

  addAndMakeVisible(cutoffFrequencyLabel);
  cutoffFrequencyLabel.setText("Cutoff Frequency", juce::dontSendNotification);

  addAndMakeVisible(highpassButton);
  highpassAttachment.reset(new juce::AudioProcessorValueTreeState::ButtonAttachment(
    vts, "highpass", highpassButton
  ));

  addAndMakeVisible(highpassButtonLabel);
  highpassButtonLabel.setText("Highpass", juce::dontSendNotification);

  juce::ignoreUnused(processorRef);
  // Make sure that before the constructor has finished, you've set the
  // editor's size to whatever you need it to be.
  setSize(200, 400);
}

AudioPluginAudioProcessorEditor::~AudioPluginAudioProcessorEditor() {}

void AudioPluginAudioProcessorEditor::paint(juce::Graphics& g) {
  // (Our component is opaque, so we must completely fill the background with a
  // solid colour)
  g.fillAll(getLookAndFeel().findColour(juce::ResizableWindow::backgroundColourId));

  g.setColour(juce::Colours::white);
  g.setFont(15.0f);
}

void AudioPluginAudioProcessorEditor::resized() {
  // This is generally where you'll want to lay out the positions of any
  // subcomponents in your editor..

  cutoffFrequencySlider.setBounds({15, 35, 100, 300});
  cutoffFrequencyLabel.setBounds({cutoffFrequencySlider.getX() + 30, 
                                  cutoffFrequencySlider.getY() - 30, 200, 50});

  highpassButton.setBounds({cutoffFrequencySlider.getX(), 
                            cutoffFrequencySlider.getY() + cutoffFrequencySlider.getHeight() + 15, 
                            30, 50});
  highpassButtonLabel.setBounds({cutoffFrequencySlider.getX() + highpassButton.getWidth() + 15, 
                                 highpassButton.getY(), 
                                 cutoffFrequencySlider.getWidth() - highpassButton.getWidth(), 
                                 highpassButton.getHeight()});
              
}
}  // namespace audio_plugin
