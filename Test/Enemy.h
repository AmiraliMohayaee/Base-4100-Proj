#pragma once

#include "GameObject.h"

class Enemy : public GameObject
{
public: 
	Enemy();

	void Draw();
	void Update();

	int RollDamage();
	void GetDamageVal();

private:
	int dmg;
};