#pragma once

#include <iostream>
#include "Singleton.h"

// Defining that you're running win2000 or higher
#define _WIN32_WINNT 0x0500

//it is important that the above line be typed
//  BEFORE <windows.h> is included
#include <Windows.h>


class ScreenManager //: public NonCopyable
{
public:
	ScreenManager();
	~ScreenManager();

	void DrawLine(int width, int r, int g, int b, int x, int y);

	void AtExit();
	void ClearScreen();
	void ConsoleResize(int width, int height);

	//static ScreenManager* GetInstance()
	//{
	//	static ScreenManager* s_screenInstance =
	//		new ScreenManager;
	//	return s_screenInstance;
	//}
	
private:
	// Get window handle to console, and device context
	HWND console_handle;
	HDC device_context;
};




///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	For reference: https://social.msdn.microsoft.com/Forums/vstudio/en-US/aa573238-3228-44bc-ae4d-368386005031/any-alternatives-to-systemquotpausequot?forum=vcgeneral
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////
//
//	For reference: http://www.cplusplus.com/articles/4z18T05o/
//
////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////
////
////	For Ref: http://www.cplusplus.com/forum/beginner/1481/
////
///////////////////////////////////////////////////////////////////

