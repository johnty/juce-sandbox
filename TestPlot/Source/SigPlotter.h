/*
  ==============================================================================

    SigPlotter.h
    Created: 7 Dec 2015 5:39:24pm
    Author:  johnty

  ==============================================================================
*/

#ifndef SIGPLOTTER_H_INCLUDED
#define SIGPLOTTER_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"

class SigPlotter : public AudioVisualiserComponent
{
public:
   
   float val;
   
   SigPlotter() : AudioVisualiserComponent(2)
   {
      val = -.5;
      
      setBufferSize(500);
      setRepaintRate(25);
      setSamplesPerBlock(10);
      
   }
   
   
   void addPlotVal(float val)
   {
      AudioSampleBuffer* buff = new AudioSampleBuffer(2, 1);
      buff->clear();
      float* vals = new float[2];
      buff->addSample(0, 0, val);
      buff->addSample(1, 0, 0.5-val);
      vals[0] = val;
      vals[1] = 0.5 - val;
      //pushSample(vals, 2);
      pushBuffer(*buff);
      delete buff;
   }
   
   void addPlotBuff()
   {
      val = -0.5;
      int buff_size = 100;
      AudioSampleBuffer* buff = new AudioSampleBuffer(2, buff_size);
      buff->clear();
      
      float sign = 1.0;
      for (int i=0; i<buff_size; i++)
      {
         val += 1.0/(buff_size);
         
         if (val > 0.5) val = -0.5;
         
         /*if (val > .5)
            sign = -1.0;
         if (val < -0.5)
            sign = 1.0;*/
         
         buff->addSample(0, i, val);
         buff->addSample(1, i, 0.5-val);
         
         pushBuffer(*buff);
         
      }
      delete buff;
   }
   
   void timerCallback()
   {
      //addPlotBuff();
      //repaint();
      //return;
      
      float sign = 1.0;
      for (int i=0; i<100; i++)
      {
         val += sign*1.0/50;
         addPlotVal(val);
         if (val >= .5)
            sign = -1.0;
         if (val <= -0.5)
            sign = 1.0;
      }
      
      repaint();
   }
   
};




#endif  // SIGPLOTTER_H_INCLUDED
