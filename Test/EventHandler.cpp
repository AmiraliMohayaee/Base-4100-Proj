#include "EventHandler.h"
#include <iostream>


EventHandler::EventHandler()
{
	m_eventHandle = nullptr;
	m_mode = 0;
}

bool EventHandler::GetKeyEvent(char ch)
{
	m_eventHandle = GetStdHandle(STD_INPUT_HANDLE);
	GetConsoleMode(m_eventHandle, &m_mode);
	SetConsoleMode(m_eventHandle, ENABLE_ECHO_INPUT | 
		ENABLE_PROCESSED_INPUT);

	std::cout << "Use the Input arrows...\n" << std::flush;
	ch = std::cin.get();

	switch (ch)
	{
	case VK_UP:
		if (ch == VK_UP)
		{
			std::cout << "You Pressed UP...\n";
			return true;
		}

	case VK_DOWN:
		if (ch == VK_DOWN)
		{
			std::cout << "You Pressed DOWN...\n";
			return true;
		}

	default:
		std::cout << "You did not press the right button." << std::endl;
		return false;
	}

	SetConsoleMode(m_eventHandle, m_mode);
}
