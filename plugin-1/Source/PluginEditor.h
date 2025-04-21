/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

class Plugin1AudioProcessorEditor : public juce::AudioProcessorEditor
{
public:
    Plugin1AudioProcessorEditor(Plugin1AudioProcessor&);
    ~Plugin1AudioProcessorEditor() override;

    void paint(juce::Graphics&) override;
    void resized() override;

private:
    Plugin1AudioProcessor& audioProcessor; // Parent object reference
    juce::Slider le_slider;
    juce::LookAndFeel_V4 le_slider_look_and_feel;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Plugin1AudioProcessorEditor)
};
