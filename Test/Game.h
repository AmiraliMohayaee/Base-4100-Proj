#pragma once

#include "Player.h"
#include "Enemy.h"


class Game
{
public:
	Game();
	~Game();

	void Init();
	void Draw();
	void Update();

	void Intro();
	void Graph();

	void Battle();
	
	
private:
	GameObject* m_go;
	Player* m_player;
	Enemy* m_enemy;
};