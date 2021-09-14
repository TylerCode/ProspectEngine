#include "Structs/background.h";
#include "Structs/character.h";
#include "Structs/state.h";
#include "Structs/dialogbox.h";
#include <time.h>;
#include <stdbool.h>;
#include <SDL2/SDL.h>;
#include <SDL2/SDL_image.h>;
#include <iostream>;

//I will try to keep all the directly SDL related shit in here.
//This file will be a chonker bonker but then if you want to port
//the engine to say, the PSP (something I want to do) then you only
//have to change this one file.

void DrawMainScreen(void);
void DrawMenu(void);

int game(void)
{
    SDL_Window *window = NULL;

    SDL_Renderer *renderer = NULL;

    bool quit = false;
    State gameState;

    gameState.state = 0;

    while(!quit)
    {
        if(gameState.state == 0)
        {
            DrawMenu();
        }
        else
        {
            DrawMainScreen();
        }

        break;
    }

    return 0;
}

void DrawMainScreen(void)
{
    // Draw the background
    // Draw the character(s)
    // Draw the decorations (like sun shafts, rain, etc)
    // Draw the text box
    // Draw the buttons
    // Draw the text
}

void DrawMenu(void)
{
    std::cout << "Draw Menu\n";
    // Draw the background
    // Draw the text box
    // Draw the buttons
    // Draw the text
}