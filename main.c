#include <stdio.h>

#include <stdint.h>
#include <raylib.h>

/*#include "./states/menuState/menuState.h"
#include "./states/loadingState/loadingState.h"
#include "./states/randomState/randomState.h"
#include "./states/playState/playState.h"
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
    // while ESC key not pressed
    while (!WindowShouldClose())
    {
        BeginDrawing();
            ClearBackground(BLACK);
            DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);
        EndDrawing();
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