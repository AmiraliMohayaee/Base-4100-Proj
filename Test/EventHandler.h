#pragma once

#include <windows.h>
#include <stdio.h>
#include "Event.h"


class EventHandler : public Event
{
public:
	EventHandler();

	//void GetKeyEvent();
	bool GetKeyEvent();
	bool GetStdInput();
	
	LRESULT WndProc(HWND winHandler, UINT sysMessage, 
		WPARAM wparam, LPARAM lparam);
	
private:
	int m_keyEvent;
	HANDLE m_eventHandle;
	DWORD m_mode;

};