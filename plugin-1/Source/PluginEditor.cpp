/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
Plugin1AudioProcessorEditor::Plugin1AudioProcessorEditor(Plugin1AudioProcessor& init_audio_processor)
: AudioProcessorEditor(&init_audio_processor), audioProcessor(init_audio_processor)
{
    le_slider.setSliderStyle(juce::Slider::SliderStyle::LinearHorizontal);
    le_slider.setLookAndFeel(&le_slider_look_and_feel);
    le_slider.setName("Fuckyou Slider");
    le_slider.setTextValueSuffix("fuckyous");
    le_slider.setNormalisableRange(juce::NormalisableRange<double>(0.0, 1.0));
    addAndMakeVisible(le_slider);
    setSize(400, 300);
}

Plugin1AudioProcessorEditor::~Plugin1AudioProcessorEditor()
{
    setLookAndFeel(nullptr);
}

void Plugin1AudioProcessorEditor::paint(juce::Graphics& graphics)
{
    graphics.fillAll(getLookAndFeel().findColour(juce::ResizableWindow::backgroundColourId));
}

void Plugin1AudioProcessorEditor::resized()
{
    le_slider.setTextBoxStyle(le_slider.getTextBoxPosition(), true, 200, 20);
    le_slider.setBounds(0, 100, 400, 200);
}
