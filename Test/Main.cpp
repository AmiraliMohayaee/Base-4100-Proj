#include <iostream>
#include <math.h>
#include "Game.h"
#include "ScreenManager.h"


int main()
{
	Game* game = new Game();
	/*ScreenManager* screen = new ScreenManager();*/
	ScreenManager* sm = ScreenManager::GetInstance();
	ScreenManager* sm2 = ScreenManager::GetInstance();


	sm->ConsoleResize(800, 800);

	game->Intro();
	game->Init();
	//game->Draw();
	game->Update();
	
	//sm->AtExit();
	//sm->ClearScreen();
	//sm->AtExit();
}
