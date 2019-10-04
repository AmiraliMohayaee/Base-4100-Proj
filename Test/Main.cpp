#include <iostream>
#include <math.h>
#include "Game.h"
#include "Player.h"
#include "AtExit.h"
#include "ClearScreen.h"
#include "ConsoleResize.h"


int main()
{
	ConsoleResize();
	Game* game = new Game();

	game->Intro();
	game->Init();
	game->Draw();
	game->Update();


#ifdef _DEBUG
	AtExit();
	ClearScreen();
	AtExit();
#else
	system("pasue");
	system("cls");
	system("pause");
#endif
}