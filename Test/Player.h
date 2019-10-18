#pragma once

#include "GameObject.h"


class Player: public GameObject
{
public:
	Player();
	~Player();
	void Draw();
	void Update();
	int GetPlayerPos();
	void SetPlayerPos(int x, int y);
	bool CheckLifeState();

private:
	unsigned int* m_health;
};