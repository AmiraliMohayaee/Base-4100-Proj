//#include <iostream>
//#include <iomanip>
//#include <math.h>
//#include "Game.h"
//#include "ScreenManager.h"
//
//
//int main()
//{
//	Game* game = new Game();
//	ScreenManager* screen = new ScreenManager();
//	//ScreenManager* sm = ScreenManager::GetInstance();
//	//ScreenManager* sm2 = ScreenManager::GetInstance();
//
//	//screen->DrawLine(10, 0, 100, 100, 300, 300);
//	screen->ConsoleResize(800, 800);
//
//	//screen->DrawLine(10, 0, 100, 100, 100, 100);
//
//	//game->Intro();
//	//game->Init();
//	//game->Draw();
//	//game->Update();
//	
//	screen->AtExit();
//	screen->ClearScreen();
//	screen->AtExit();
//}



#include <iostream>
#include <windows.h>

int main()
{
	HANDLE hstdin;
	DWORD  mode;

	hstdin = GetStdHandle(STD_INPUT_HANDLE);
	GetConsoleMode(hstdin, &mode);
	SetConsoleMode(hstdin, ENABLE_ECHO_INPUT | ENABLE_PROCESSED_INPUT);  // see note below 

	std::cout << "Press any key..." << std::flush;
	int ch = std::cin.get();

	if (ch == 13) std::cout << "\nYou pressed ENTER\n";
	else          std::cout << "\n\nYou did not press ENTER\n";

	SetConsoleMode(hstdin, mode);
	return 0;
}