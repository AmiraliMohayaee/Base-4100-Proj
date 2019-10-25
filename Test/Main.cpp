#include <iostream>
#include <iomanip>
#include <math.h>
#include "Game.h"
#include "ScreenManager.h"


int main()
{
	Game* game = new Game();
	ScreenManager* screen = new ScreenManager();
	//ScreenManager* sm = ScreenManager::GetInstance();
	//ScreenManager* sm2 = ScreenManager::GetInstance();

	//screen->DrawLine(10, 0, 100, 100, 300, 300);
	screen->ConsoleResize(800, 800);

	//screen->DrawLine(10, 0, 100, 100, 100, 100);

	//game->Intro();
	//game->Init();
	//game->Draw();
	//game->Update();
	
	screen->AtExit();
	screen->ClearScreen();
	screen->AtExit();
}
