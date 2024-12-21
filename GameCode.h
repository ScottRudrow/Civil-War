#pragma once
#include "pch.h"
#include "SDL.h"
#include "SDL_main.h"
#include "stdio.h"
#include "GameCode.h"


int OffSides(int, char***){


	// returns zero on success else non-zero
	if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
		printf("error initializing SDL: %s\n", SDL_GetError());
	}
	SDL_Window* win = SDL_CreateWindow("GAME",
		SDL_WINDOWPOS_CENTERED,
		SDL_WINDOWPOS_CENTERED,
		1000, 1000, 0);
	while (1)
		;

	return 0;
}
