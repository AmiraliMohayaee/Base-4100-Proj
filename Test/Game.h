#pragma once

#include "Player.h"
#include "Enemy.h"
#include "Graph.h"
#include "ScreenManager.h"
#include "NonCopyable.h"
#include "Singleton.h"


class Game : public NonCopyable
{

private:

	Game();
	~Game();

public:

	void Init();
	void Draw();
	void DrawGraph();

	void Update();

	void Intro();

	void Battle();

	static Game* GetInstance()
	{
		static Game* s_gameInstance = new Game;
		return s_gameInstance;
	}

	
private:
	ScreenManager* m_screen;

	GameObject* m_go;
	Player* m_player;
	Enemy* m_enemy;
	Graph* m_graph;

	bool m_whileGameRunning;
};