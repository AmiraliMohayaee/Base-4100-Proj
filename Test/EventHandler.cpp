#include "EventHandler.h"

EventHandler::EventHandler()
{

}

bool EventHandler::SetKeyEvent(int &keyEvent)
{
	if (SetKeyboardState(*m_event))
	{

	}

	// This is probably the wrong return type
	return keyEvent;
}
