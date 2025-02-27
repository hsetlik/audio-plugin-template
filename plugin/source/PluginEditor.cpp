#include "YourPluginName/PluginEditor.h"
#include "YourPluginName/PluginProcessor.h"

namespace audio_plugin {
YourPluginNameProcessorEditor::YourPluginNameProcessorEditor(
    YourPluginNameAudioProcessor& p)
    : AudioProcessorEditor(&p), processorRef(p) {
  juce::ignoreUnused(processorRef);
  // Make sure that before the constructor has finished, you've set the
  // editor's size to whatever you need it to be.
  setSize(400, 300);
}

YourPluginNameProcessorEditor::~YourPluginNameProcessorEditor() {}

void YourPluginNameProcessorEditor::paint(juce::Graphics& g) {
  // (Our component is opaque, so we must completely fill the background with a
  // solid colour)
  g.fillAll(
      getLookAndFeel().findColour(juce::ResizableWindow::backgroundColourId));
  g.setColour(juce::Colours::white);
  g.setFont(15.0f);
  g.drawFittedText("Hello World!", getLocalBounds(),
                   juce::Justification::centred, 1);
}

void YourPluginNameProcessorEditor::resized() {
  // This is generally where you'll want to lay out the positions of any
  // subcomponents in your editor..
}
}  // namespace audio_plugin
