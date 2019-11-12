#pragma once

#include "Player.h"
#include "Enemy.h"
#include "Graph.h"
#include "ScreenManager.h"
#include "NonCopyable.h"
#include "Singleton.h"
#include "GameArtAssets.h"
#include <string>
#include "File.h"


class Game
{
private:
	Game();
	Game(const Game& game);
	Game& operator=(const Game& game);

public:
	~Game();
	void Init();
	void Draw();
	void DrawGraph();
	void Update();


	void Intro();
	void GetPlayerInput(std::string input);
	void ClearPlayerInput();
	void DrawHud();	// Draws the Hud and shows player's details
	void Battle();

	void GameOver();

	static Game* GetInstance();
	
	
private:
	GameArtAssets m_artAssets;

	GameObject* m_goPlayer;
	GameObject* m_goEnemy;

	Graph* m_graph;

	std::string* m_playerInput;

	bool m_whileGameRunning = true;
};
