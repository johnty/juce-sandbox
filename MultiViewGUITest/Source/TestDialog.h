/*
  ==============================================================================

  This is an automatically generated GUI class created by the Introjucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Introjucer version: 4.0.2

  ------------------------------------------------------------------------------

  The Introjucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright (c) 2015 - ROLI Ltd.

  ==============================================================================
*/

#ifndef __JUCE_HEADER_C1153011CCE26488__
#define __JUCE_HEADER_C1153011CCE26488__

//[Headers]     -- You can add your own extra header files here --
#include "JuceHeader.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Introjucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class TestDialog  : public Component
{
public:
    //==============================================================================
    TestDialog ();
    ~TestDialog();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();



private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    //[/UserVariables]

    //==============================================================================
    ScopedPointer<TabbedComponent> tabbedComponent;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (TestDialog)
};

struct SlidersPage  : public Component
{
   SlidersPage()
   : hintLabel ("hint", "Try right-clicking on a slider for an options menu. \n\n"
                "Also, holding down CTRL while dragging will turn on a slider's velocity-sensitive mode")
   {
      
      hintLabel.setBounds (20, 245, 350, 150);
      addAndMakeVisible (hintLabel);
   }
   
private:
   OwnedArray<Slider> sliders;
   Label hintLabel;
   
   Slider* createSlider (bool isSnapping)
   {
      Slider* s = new Slider();
      sliders.add (s);
      addAndMakeVisible (s);
      s->setRange (0.0, 100.0, 0.1);
      s->setPopupMenuEnabled (true);
      s->setValue (Random::getSystemRandom().nextDouble() * 100.0, dontSendNotification);
      return s;
   }
   
   JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (SlidersPage)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_C1153011CCE26488__
