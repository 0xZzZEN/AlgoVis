#ifndef STATEMACHINE_H
#define STATEMACHINE_H

#include <stdint.h>

// states of the program
enum ProgramStates
{
    MENUSTATE, // a selection option for choosing data structures, particular algorithm, etc
    LOADINGSTATE, // transit between MenuState to the RandomState
    RANDOMSTATE, // random event 33%, happening in the LoadingState
    PLAYSTATE // visualization of the algo
};

struct StateMachine
{
    uint8_t currentState;
};

extern struct StateMachine gStateMachine; // global state declaration to keep track where are we

// StateMachine's function prototypes
void init(void);
void change(void);
void update(float dt);
void render(void);

#endif