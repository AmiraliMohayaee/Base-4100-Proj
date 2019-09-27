#pragma once

#include "GameObject.h"


class Player: public GameObject
{
public:
	Player();
	void Draw();
	void Update();
	int GetPlayerPos();
	void SetPlayerPos(int x, int y);
	bool CheckLifeState();

private:
	int posX;
	int posY;
	unsigned int* m_health;

	bool m_isAlive;
};