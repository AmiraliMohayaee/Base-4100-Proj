#pragma once

#include "Player.h"
#include "Enemy.h"
#include "Graph.h"
#include "ClearScreen.h"


class Game
{
public:
	Game();
	~Game();

	void Init();
	void Draw();
	void Update();

	void Intro();

	void Battle();
	
	
private:
	GameObject* m_go;
	Player* m_player;
	Enemy* m_enemy;
	Graph* m_graph;
};