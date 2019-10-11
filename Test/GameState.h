#pragma once

#include "StateManager.h"


class GameState : public StateManager
{
public:
	void Init();

	void Draw();
	void Update();

	void EventHandling();


private:


};