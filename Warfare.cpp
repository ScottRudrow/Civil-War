#pragma once
#include "pch.h"
#include "SDL.h"
#include "SDL_main.h"
#include "SDL_video.h"
#include "stdio.h"
#include "GameCode.h"
#include "string"
#include <stdbool.h>
#include <stdlib.h>
#include "Windows.h"
#include <iostream>

class figure
{
private:
	short window_width;
	short window_height;
	SDL_Window* window = NULL;
	SDL_Renderer* renderer = NULL;
	SDL_Event fig_handler;
public:
	short figure_type;
};

int main(int argc, char* argv[])
{

	// returns zero on success else non-zero
	if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
		printf("error initializing SDL: %s\n", SDL_GetError());
	}
	SDL_Window* win = SDL_CreateWindow("Demo Window", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1000, 1000, SDL_WINDOW_SHOWN);
	SDL_Renderer* win2 = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
	SDL_SetRenderDrawColor(win2, 45, 164, 132, SDL_ALPHA_OPAQUE);

	while (1)
	{
		if (SDLK_ESCAPE > 0)
			SDL_DestroyWindow;
		SDL_Quit();
		return 0;
	};
};
