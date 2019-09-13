#include <iostream>
#include <math.h>
#include "Game.h"
#include "Player.h"
#include "AtExit.h"
#include "ClearScreen.h"
#include "ConsoleResize.h"


//int main()
//{
//	ConsoleResize();
//	Game* game = new Game();
//
//	game->Intro();
//	game->Init();
//	game->Draw();
//	game->Update();
//
//	AtExit();
//	ClearScreen();
//	AtExit();
//}


int main()
{
	unsigned char symbol = 0;
	for (; symbol < 255; symbol++)
		printf("%d %x %c \n", symbol, symbol, symbol);

	AtExit();

	return 0;
}
