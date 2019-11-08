#include "Game.h"
#include <conio.h>
#include <iostream>



Game::Game()
{
	m_graph = new Graph();
    m_player = new Player();
	m_enemy = new Enemy();
	//GameObject m_go = &m_player;

	m_screen = new ScreenManager();

	m_playerInput = nullptr;

	m_whileGameRunning = true;
}

Game::~Game()
{
	delete m_graph;
	delete m_player;
	delete m_enemy;
	delete m_playerInput;
}

void Game::Init()
{
	std::cout << "initializing Game\n";
}

void Game::Draw()
{
	std::cout << "Drawing Game\n";
	m_graph->Draw();
	m_player->Draw();
	m_player->Update();
}

void Game::DrawGraph()
{
	int graph[12][12] = {};

	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			//std::cout << m_graph[i][j] << std::endl;
		}
	}
}


void Game::Update()
{
	std::cout << "Welcome to a daring adventure, Player." << std::endl;

	m_player->Draw();
	m_artAssets.Player();

	while (m_whileGameRunning)
	{
		std::cout << "Updating Game\n";
		//m_graph->Draw();
		//m_player->Update();
		//DrawGraph();
		Sleep(1000);
		m_screen->ClearScreen();

		std::cout << "Please, enter your choice:" << std::endl;
		GetPlayerInput(*m_playerInput);


		// Check if player is dead, break
		if (m_player->CheckLifeState() != 0)
		{
			m_whileGameRunning = false;
		}
	}

	m_artAssets.GameOver();
}


void Game::DrawHud()
{
	std::cout << "+=====================+" << std::endl;
	std::cout << "|                     |" << std::endl;
	std::cout << "|                     |" << std::endl;
	std::cout << "|                     |" << std::endl;
	std::cout << "|                     |" << std::endl;
	std::cout << "|                     |" << std::endl;
	std::cout << "|                     |" << std::endl;
	std::cout << "|                     |" << std::endl;
	std::cout << "|_____________________|" << std::endl;
}


void Game::Intro()
{
	m_artAssets.IntroSceleton();

	m_screen->AtExit();
	m_screen->ClearScreen();
}


void Game::GetPlayerInput(std::string input)
{
	m_playerInput = &input;

	//switch ()
	//{
	//case 1:
	//	break


	//}
}


void Game::Battle()
{
	m_enemy->RollDamage();
	m_enemy->GetDamageVal();
}

void Game::GameOver()
{
	m_artAssets.GameOver();
}
