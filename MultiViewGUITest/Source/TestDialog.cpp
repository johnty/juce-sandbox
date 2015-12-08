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

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "TestDialog.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
TestDialog::TestDialog ()
{
   //[Constructor_pre] You can add your own custom stuff here..
   //[/Constructor_pre]
   
   addAndMakeVisible (tabbedComponent = new TabbedComponent (TabbedButtonBar::TabsAtTop));
   tabbedComponent->setTabBarDepth (30);
   tabbedComponent->addTab (TRANS("Devices"), Colours::grey, new SlidersPage(), false);
   tabbedComponent->addTab (TRANS("Sensors"), Colour (0xfffcc5c5), new SlidersPage(), false);
   tabbedComponent->addTab (TRANS("Analysis"), Colour (0xffaafbbb), new SlidersPage(), true);
   tabbedComponent->setCurrentTabIndex (0);
   tabbedComponent->addTab(TRANS("Sliders"), Colours::chartreuse, new SlidersPage(), true);
   
   
   //[UserPreSize]
   //[/UserPreSize]
   
   setSize (600, 400);
   
   
   //[Constructor] You can add your own custom stuff here..
   //[/Constructor]
}

TestDialog::~TestDialog()
{
   //[Destructor_pre]. You can add your own custom destruction code here..
      //[/Destructor_pre]
   
   tabbedComponent = nullptr;
   
   
   //[Destructor]. You can add your own custom destruction code here..
   //[/Destructor]
}

//==============================================================================
void TestDialog::paint (Graphics& g)
{
   //[UserPrePaint] Add your own custom painting code here..
   //[/UserPrePaint]
   
   g.fillAll (Colours::white);
   
   //[UserPaint] Add your own custom painting code here..
   //[/UserPaint]
}

void TestDialog::resized()
{
   //[UserPreResize] Add your own custom resize code here..
   //[/UserPreResize]
   
   tabbedComponent->setBounds (0, 0, proportionOfWidth (1.0000f), proportionOfHeight (1.0000f));
   //[UserResized] Add your own custom resize handling here..
   //[/UserResized]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Introjucer information section --
 
 This is where the Introjucer stores the metadata that describe this GUI layout, so
 make changes in here at your peril!
 
 BEGIN_JUCER_METADATA
 
 <JUCER_COMPONENT documentType="Component" className="TestDialog" componentName=""
 parentClasses="public Component" constructorParams="" variableInitialisers=""
 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
 fixedSize="0" initialWidth="600" initialHeight="400">
 <BACKGROUND backgroundColour="ffffffff"/>
 <TABBEDCOMPONENT name="new tabbed component" id="30cbd6f0ece528df" memberName="tabbedComponent"
 virtualName="" explicitFocusOrder="0" pos="0 0 100% 100%" orientation="top"
 tabBarDepth="30" initialTab="0">
 <TAB name="Devices" colour="ff808080" useJucerComp="0" contentClassName=""
 constructorParams="" jucerComponentFile=""/>
 <TAB name="Sensors" colour="fffcc5c5" useJucerComp="0" contentClassName=""
 constructorParams="" jucerComponentFile=""/>
 <TAB name="Analysis" colour="ffaafbbb" useJucerComp="0" contentClassName=""
 constructorParams="" jucerComponentFile=""/>
 </TABBEDCOMPONENT>
 </JUCER_COMPONENT>
 
 END_JUCER_METADATA
 */
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
