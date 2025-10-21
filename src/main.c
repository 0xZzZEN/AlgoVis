#include <stdio.h>
#include <stdint.h>
#include <raylib.h>

#include "./states/MenuState/menuState.c"
/*#include "./states/LoadingState/LoadingState.h"
#include "./states/RandomState/RandomState.h"
#include "./states/PlayState/PlayState.h"
*/

/* some global constants for initalization*/

// actual initialized window
const int32_t SCREEN_WIDTH = 1280;
const int32_t SCREEN_HEIGHT = 720;

// virtual size inside window (scalable)
/* const int32_t VIRTUAL_WIDTH = 480; 
const int32_t VIRTUAL_HEIGHT = 320;

to be implemented
*/

int main(void)
{
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Algorithms Interactive Visualiser");

    // define a global statemachine, starting at MenuState
    // states: MenuState, LoadingState, RandomState, PlayState
    struct StateMachine gStateMachine = {.currentState = MENUSTATE};
    // while ESC key not pressed
    while (!WindowShouldClose())
    {
        // runs every frame
        BeginDrawing();
            ClearBackground(BLACK);
            DrawText("Congrats! You created your first window!", 190, 200, 20, WHITE);
        EndDrawing();
        /*
        #if defined(PLATFORM_DESKTOP_WIN_x64_x86_DEBUG)
            DrawFPS(10, 10);
            Draw_debug_mem??
        #endif
        */
        
        /*
        mainLoop
        menuState
        loadingState
        randomState
        playState
    */
    }

    CloseWindow();
    return 0;
}