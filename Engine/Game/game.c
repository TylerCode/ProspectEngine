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
bool Initialize(void);

SDL_Window *window = NULL;
SDL_Renderer *renderer = NULL;
State gameState;

int game(void)
{
    bool quit = false;
    gameState.state = 0;

    if(!Initialize())
    {
        exit(1);
    }

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
    }

    return 0;
}

bool Initialize(void)
{
    //Gets graphics shit ready
    if (SDL_Init(SDL_INIT_VIDEO) != 0)
    {
        fprintf(stderr,
            "What the cinnamon toast fuck is this? No compatible graphics?!!\nHere is your stupid error: ",
            SDL_GetError());
        printf(SDL_GetError());
        return false;
    }

    window = SDL_CreateWindow("Game",
        SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED,
        1280,
        720,
        SDL_WINDOW_SHOWN);

    if(!window)
    {
        return false;
    }

    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

    if(!renderer)
    {
        return false;
    }

    return true;
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
    //std::cout << "Draw Menu\n";
    // Draw the background
    // Draw the text box
    // Draw the buttons
    // Draw the text
}