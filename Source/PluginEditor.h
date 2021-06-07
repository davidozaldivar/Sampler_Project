/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class Sampler_ProjectAudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    Sampler_ProjectAudioProcessorEditor (Sampler_ProjectAudioProcessor&);
    ~Sampler_ProjectAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    Sampler_ProjectAudioProcessor& audioProcessor;
    juce::TextButton mLoadButton {"Load"};
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Sampler_ProjectAudioProcessorEditor)
};
