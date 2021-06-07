/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
Sampler_ProjectAudioProcessorEditor::Sampler_ProjectAudioProcessorEditor (Sampler_ProjectAudioProcessor& p)
    : AudioProcessorEditor (&p), audioProcessor (p)
{
    mLoadButton.onClick = [&]() { audioProcessor.loadFile();  };
    
    addAndMakeVisible(mLoadButton);
    
    setSize (200, 200);
}

Sampler_ProjectAudioProcessorEditor::~Sampler_ProjectAudioProcessorEditor()
{
}

//==============================================================================
void Sampler_ProjectAudioProcessorEditor::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));

    g.setColour (juce::Colours::white);
    g.setFont (15.0f);
    g.drawFittedText ("Hello World!", getLocalBounds(), juce::Justification::centred, 1);
}

void Sampler_ProjectAudioProcessorEditor::resized()
{
    mLoadButton.setBounds(getWidth() / 2 - 50, getHeight() / 2 - 50, 100, 100);
}
