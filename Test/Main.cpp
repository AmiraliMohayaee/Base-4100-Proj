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

	//screen->DrawLine(10, 0, 100, 100, 300, 300);
	screen->ConsoleResize(800, 800);


	game->Intro();
	//game->Init();
	//game->Draw();
	game->Update();
	game->GameOver();
}



//#include <iostream>
//#include <windows.h>
//
//int main()
//{
//	const WORD colors[] =
//	{
//	0x1A, 0x2B, 0x3C, 0x4D, 0x5E, 0x6F,
//	0xA1, 0xB2, 0xC3, 0xD4, 0xE5, 0xF6
//	};
//
//	HANDLE hstdin = GetStdHandle(STD_INPUT_HANDLE);
//	HANDLE hstdout = GetStdHandle(STD_OUTPUT_HANDLE);
//	WORD   index = 0;
//
//	// Remember how things were when we started
//	CONSOLE_SCREEN_BUFFER_INFO csbi;
//	GetConsoleScreenBufferInfo(hstdout, &csbi);
//
//	// Tell the user how to stop
//	SetConsoleTextAttribute(hstdout, 0x1A);
//	std::cout << "Press any key to quit.\n";
//
//	// Draw pretty colors until the user presses any key
//	while (WaitForSingleObject(hstdin, 100) == WAIT_TIMEOUT)
//	{
//		SetConsoleTextAttribute(hstdout, colors[index]);
//		std::cout << "\t\t\t\t Hello World \t\t\t\t" << std::endl;
//		if (++index > sizeof(colors) / sizeof(colors[0]))
//			index = 0;
//	}
//	FlushConsoleInputBuffer(hstdin);
//
//	// Keep users happy
//	SetConsoleTextAttribute(hstdout, csbi.wAttributes);
//
//	system("pause");
//	return 0;
//}