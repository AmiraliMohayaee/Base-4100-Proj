#pragma once

#include "GameObject.h"

class Enemy : public GameObject
{
public: 
	Enemy();
	~Enemy();

	void Draw();
	void Update();

	int RollDamage();
	void GetDamageVal();
	int GetHealth();

	bool CheckLifeState() const;


};