#pragma once

#include <vector>


class StateManager
{
public:
	virtual void Draw() = 0;
	virtual void Update() = 0;

	virtual void Init() = 0;

	virtual void EventHandling() = 0;


private:
	std::vector<StateManager*> GameStates;


};




//////////////////////////////////////////////////
////	Reference:
////http://gamedevgeek.com/tutorials/managing-game-states-in-c/
//////////////////////////////////////////////////