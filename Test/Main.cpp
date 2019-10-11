#include <iostream>
#include <math.h>
#include "Game.h"
#include "Player.h"
#include "ScreenManager.h"


int main()
{
	Game* game = new Game();
	ScreenManager* screen = new ScreenManager();

	screen->ConsoleResize(800, 800);

	game->Intro();
	game->Init();
	//game->Draw();
	game->Update();


#ifdef _DEBUG
	screen->AtExit();
	screen->ClearScreen();
	screen->AtExit();
#else
	system("pasue");
	system("cls");
	system("pause");
#endif
}
