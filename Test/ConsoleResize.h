///////////////////////////////////////////////////////////////////
////
////	For Ref: http://www.cplusplus.com/forum/beginner/1481/
////
///////////////////////////////////////////////////////////////////



#pragma once

#include <iostream>

// Defining that you're running win2000 or higher
//#define _WIN32_WINNT 0x0500

//it is important that the above line be typed
//  BEFORE <windows.h> is included
#include <windows.h>

using namespace std;

void ConsoleResize()
{
	HWND console = GetConsoleWindow();
	RECT r;
	GetWindowRect(console, &r); //stores the console's current dimensions

	//MoveWindow(window_handle, x, y, width, height, redraw_window);
	MoveWindow(console, r.left, r.top, 800, 800, TRUE);
	
	// Does a loop which goes through a loop of characters up to
	// 100 chars
	// This function is lot less nicer
	//for (int j = 0; j < 100; ++j)
	//{
	//	for (int i = 0x41; i < 0x5B; ++i)
	//		cout << (char)i;
	//}
	//cout << endl;
	//Sleep(1000);
	//MoveWindow(console, r.left, r.top, r.right - r.left, r.bottom - r.top, TRUE);
}