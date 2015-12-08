/*
 ==============================================================================
 
 This file was auto-generated!
 
 ==============================================================================
 */

#ifndef MAINCOMPONENT_H_INCLUDED
#define MAINCOMPONENT_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"
#include "TestDialog.h"


//==============================================================================
/*
 This component lives inside our window, and this is where you should put all
 your controls and content.
 */
class MainContentComponent   : public Component
{
public:
   //==============================================================================
   MainContentComponent();
   ~MainContentComponent();
   
   void paint (Graphics&);
   void resized();
   
private:
   //==============================================================================
   JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainContentComponent)
   
   ScopedPointer<TestDialog> myMainDialog;
};


#endif  // MAINCOMPONENT_H_INCLUDED
