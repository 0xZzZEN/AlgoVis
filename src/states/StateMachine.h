/*
    Statemachine generic functions and structure to use in the conjunction in the program
*/

#ifndef STATEMACHINE_H
#define STATEMACHINE_H

#include <stdint.h>

// make a bool type
typedef enum {false, true} bool;

// reserved for 2 out of 255 possible event outcomes
enum { EVENT_IGNORED = 0xFE, CANNOT_HAPPEN = 0xFF };

typedef void NoEventData;

// StateMachine constant data
struct StateMachine_const 
{
    const char *NAME;
    const uint8_t MAX_STATES;
    const struct StateStruct *STATEMAP;
    const struct StateStructEx *STATEMAP_Ex;
};

// statemachine instance data

struct StateMachine
{
    const char *name;
    void *pInstance;
    uint8_t newState;
    uint8_t currentState;
    uint8_t eventGenerated;
    void *pEventData;
};

// Generic state function signatures
typedef void (*SM_StateFunc)(struct StateMachine* self, void* pEventData);
typedef bool (*SM_GuardFunc)(struct StateMachine* self, void* pEventData);
typedef void (*SM_EntryFunc)(struct StateMachine* self, void* pEventData);
typedef void (*SM_ExitFunc)(struct StateMachine* self);

struct StateStruct
{
    SM_StateFunc pStateFunc;
};

struct StateStructEx
{
    SM_StateFunc pStateFunc;
    SM_GuardFunc pGuardFunc;
    SM_EntryFunc pEntryFunc;
    SM_ExitFunc pExitFunc;
};


extern struct StateMachine gStateMachine; // global state declaration to keep track where are we


// 


// statemachine's functions prototypes for rendering
void statemachine_init(StartState);
void statemachine_enter();
void statemachine_exit();
void statemachine_change(struct StateMachine *pStateMachine);
void statemachine_update(float dt);
void statemachine_render(struct StateMachine *pStateMachine);

#endif