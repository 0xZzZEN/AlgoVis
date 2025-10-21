#ifndef STATEMACHINE_H
#define STATEMACHINE_H

struct StateMachine
{
    uint8_t currentState;

};

// states of the program
enum ProgramStates
{
    MENUSTATE, // a selection option for choosing data structures, particular algorithm, etc
    LOADINGSTATE, // transit between MenuState to the RandomState
    RANDOMSTATE, // random event 33%, happening in the LoadingState
    PLAYSTATE // visualization of the algo
};

extern struct StateMachine gStateMachine; // global state declaration to keep track where are we

// StateMachine's function prototypes
void init(void);
void change(void);
void update(dt);
void render(void);

#endif