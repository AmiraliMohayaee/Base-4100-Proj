#pragma once

#include <Windows.h>


class EventHandler
{
public:
	EventHandler();

	//void GetKeyEvent();
	bool SetKeyEvent(int &keyEvent);


private:
	int m_keyEvent;
	LPBYTE* m_event;
};