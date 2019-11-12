#include <iostream>
#include <iomanip>
#include <math.h>
#include "Game.h"
#include "ScreenManager.h"
#include "EventHandler.h"


int main()
{	
	EventHandler* events = new EventHandler();

	Screen->ConsoleResize(800, 800);

	Game::GetInstance()->Intro();
	Game::GetInstance()->Update();
	Game::GetInstance()->GameOver();

	delete events;
}