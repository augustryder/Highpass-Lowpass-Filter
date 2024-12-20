# High-pass and Low-pass filter audio plugin 

## Overview
This is a JUCE-based audio plugin providing highpass and lowpass filtering functionality for DAWs like Ableton, Waveform, etc.

## Features
- Intense Highpass and Lowpass filtering!!
- Seriously customizable cutoff frequency (with a slider 😵)
- Impressive design 🤤
  
<img width="203" alt="Screenshot 2024-12-20 at 3 54 05 PM" src="https://github.com/user-attachments/assets/7a5fb28e-f627-48b2-8efe-1d26f8320f32" />

### Prerequisites
- CMake

### Build Instructions
1. Clone this repository.
2. Open terminal and run:
   ```bash
   cmake -S . -B build
   cmake --build build
   ```
3. Copy the generated .vst3 from build/plugin/AudioPlugin_artefacts into your personal audio plugins folder.
4. Open your DAW and scan for new plugins.
5. Enjoy the power of premium filtering!
