#include <iostream>
#include <iomanip>
#include <math.h>
#include "Game.h"
#include "ScreenManager.h"
#include "EventHandler.h"


int main()
{
	Game* game = new Game();
	ScreenManager* screen = new ScreenManager();
	EventHandler* events = new EventHandler();

	screen->ConsoleResize(800, 800);

	game->Intro();
	game->Update();
	game->GameOver();
}