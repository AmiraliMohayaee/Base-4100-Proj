#pragma once

#include "StateManager.h"


class GameState : public StateManager
{
public:
	void Init();

	void Draw();
	void Update();

	// ToDo: Create Event Handler
	// to the game engine
	//void EventHandling();


private:


};