#ifndef PROGRAMSTATES_H
#define PROGRAMSTATES_H

// states of the program
enum ProgramStates
{
    StartState, // a starting state after execution. The croupier appearance
    MenuState, // a selection option for choosing data structures, particular algorithm, etc
    LoadingState, // transit between MenuState to the RandomState
    RandomState, // random event 33%, happening in the LoadingState
    PlayState, // visualization of the particular algorithm, with step by step approach
};

#endif