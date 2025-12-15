#include "../StateMachine.h"

#include "MenuState.h"



const char *main_menu[2] = {"Choose A Datastructure", "Exit"};


if (gStateMachine == MenuState)
{
    // render menu
    statemachine_render(&gStateMachine);
}