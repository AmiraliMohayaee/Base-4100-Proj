#pragma once

#include "Player.h"
#include "Enemy.h"
#include "Graph.h"
#include "ScreenManager.h"
#include "NonCopyable.h"
#include "Singleton.h"
#include "GameArtAssets.h"
#include <string>


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
	void GetPlayerInput(std::string input);
	void DrawHud();	// Draws the Hud and shows player's details
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

	std::string* m_playerInput;

	bool m_whileGameRunning = true;
};