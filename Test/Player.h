#pragma once

#include "GameObject.h"


class Player: public GameObject
{
public:
	Player();
	void Draw();
	void Update();

private:
	int posX;
	int posY;
};