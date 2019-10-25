#pragma once

#include "GameObject.h"
#include <string>
#include <assert.h>
#include "Inventory.h"


class Player: public GameObject
{
public:
	Player();
	~Player();
	void Draw();
	void Update();

	std::string GetPlayerName() const;
	void SetPlayerName(std::string& name);

	int GetPlayerPos();
	void SetPlayerPos(int x, int y);
	bool CheckLifeState() const;


private:
	unsigned int m_health;
	std::string m_name;

	Inventory* m_inv;
};