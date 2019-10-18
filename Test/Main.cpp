#include <iostream>
#include <math.h>
#include "Game.h"
#include "ScreenManager.h"


int main()
{
	Game* game = new Game;
	ScreenManager* screen = new ScreenManager();

	screen->ConsoleResize(800, 800);

	game->Intro();
	game->Init();
	//game->Draw();
	game->Update();
	
	screen->AtExit();
	screen->ClearScreen();
	screen->AtExit();
}
