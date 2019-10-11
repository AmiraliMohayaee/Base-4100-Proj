#pragma once

#include "Player.h"
#include "Enemy.h"
#include "Graph.h"
#include "ScreenManager.h"


class Game
{
public:
	Game();
	~Game();

	void Init();
	void Draw();
	void DrawGraph();

	void Update();

	void Intro();

	void Battle();
	
	
private:

	ScreenManager* m_screen;

	GameObject* m_go;
	Player* m_player;
	Enemy* m_enemy;
	Graph* m_graph;

	bool m_whileGameRunning;
};