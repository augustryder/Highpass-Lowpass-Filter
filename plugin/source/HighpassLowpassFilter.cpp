#include "HighpassLowpassFilter/HighpassLowpassFilter.h"

void HighpassLowpassFilter::setHighpass(bool highpass)
{
    this->highpass = highpass;
}

void HighpassLowpassFilter::setCutoffFrequency(float cutoffFrequency) 
{
    this->cutoffFrequency = cutoffFrequency;
}

void HighpassLowpassFilter::setSamplingRate(float samplingRate) 
{
    this->samplingRate = samplingRate;
}