#pragma once

#include "GameObject.h"
#include <string>
#include <assert.h>


class Player: public GameObject
{
public:
	Player();
	~Player();
	void Draw();
	void Update();

	std::string GetPlayerName(std::string& name) const;
	void SetPlayerName(std::string& name);

	int GetPlayerPos();
	void SetPlayerPos(int x, int y);
	bool CheckLifeState();


private:
	unsigned int* m_health;
	std::string* m_name;
};