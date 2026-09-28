# AlgoVis
An interactive, cross-platform (currently for Linux/Windows) algorithm visualizer built with C and raylib. Explore a combination of logic, entertainment and art

## Project goals
Educational project to understand how rendering works without any prior knowledge about graphics API like OpenGL, DirectX..
To be able to render simple **algorithms** using different **datastructures** on the screen and use a **faceless croupier character** to step through..

Build everything without relying on heavy frameworks, focusing on low-level concepts and **software rendering**.

Work In Progress
## A concept art from PlayState (WIP, doesn't represent the final outcome)
<img width="1024" height="588" alt="croupier_playState2" src="https://github.com/user-attachments/assets/20ee1eed-6a12-4bc6-a59b-eec4ef5f57ac" /> 

## Program states
StartState - a starting state after execution. The croupier appearance <br>
MenuState - a selection option for choosing data structures, particular algorithm, etc <br>
LoadingState - transition from the MenuState to the PlayState <br>
RandomState - a random event with a 33% chance, happening in the LoadingState <br>
PlayState - a visualization of the particular algorithm, with step by step approach
## Transition map
MenuState->RandomState or StartState->PlayState

## AlgoVis License

### 1. Source Code
The source code of AlgoVis is licensed under the **GNU General Public License v3.0 (GPLv3)**.
It is free software: you can redistribute it and/or modify it under the terms of the GPLv3.

### 2. Character Art & Visual Assets
All character artwork, sprites, and visual assets are licensed under **Creative Commons Attribution-NonCommercial 4.0 International (CC BY-NC 4.0)**.
You may not use the artistic material for commercial purposes without explicit permission.

If you wish to use the source code or artistic material for proprietary, closed-source, or commercial purposes, or require alternative licensing terms, please contact: **vitalii.mitichkin@gmail.com**

## Future goals
add support for complex algorithms (ex: Dijkstra's algorithm)
add more data structures
add walkthroughs and comparison during real-time and underlying (split screen) C code for specific algorithms
add math (?) notations to understand time-complexity of algorithms, memory-complexity 
add OpenGL or Vulkan support
