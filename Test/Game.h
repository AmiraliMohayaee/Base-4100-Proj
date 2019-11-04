#pragma once

#include "Player.h"
#include "Enemy.h"
#include "Graph.h"
#include "ScreenManager.h"
#include "NonCopyable.h"
#include "Singleton.h"
#include "GameArtAssets.h"


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
	void ShowPlayerDetails();
	void DrawHud();
	void Battle();

	void GameOver();

	//static Game* GetInstance()
	//{
	//	static Game* s_gameInstance = new Game;
	//	return s_gameInstance;
	//}

	
private:
	ScreenManager* m_screen;
	GameArtAssets m_artAssets;

	GameObject* m_go;
	Player* m_player;
	Enemy* m_enemy;
	Graph* m_graph;

	bool m_whileGameRunning;
};