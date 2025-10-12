#include <stdio.h>

#include <raylib.h>

/*#include "./states/menuState/menuState.h"
#include "./states/loadingState/loadingState.h"
#include "./states/randomState/randomState.h"
#include "./states/playState/playState.h"
*/

int main(void)
{
    InitWindow(1280, 920, "Algorithms Interactive Visualiser");
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