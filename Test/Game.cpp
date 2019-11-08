#include "Game.h"
#include <conio.h>
#include <iostream>



Game::Game() 
{
	m_graph = new Graph();
	m_goPlayer = new Player();
	m_goEnemy = new Enemy();
	m_screen = new ScreenManager();

	m_playerInput = nullptr;

	m_whileGameRunning = true;
}


Game::~Game()
{
	delete m_graph;
	delete m_goPlayer;
	delete m_goEnemy;
	delete m_playerInput;
}

void Game::Init()
{
	std::cout << "initializing Game\n";
}

// Draw is not being called in this case due to 
// redundancy
void Game::Draw()
{
	std::cout << "Drawing Game\n";
	//m_graph->Draw();
	m_goPlayer->Draw();
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

	m_goPlayer->Draw();
	m_artAssets.Player();

	m_screen->ClearScreen();
	m_artAssets.Monster();

	std::cout << "When you're ready to go, press ENTER..." << std::endl;
	m_screen->AtExit();

	while (m_whileGameRunning)
	{
		std::cout << "Updating Game\n";

		Sleep(1000);
		m_screen->ClearScreen();

		std::cout << "Please, enter your choice:" << std::endl;
		DrawHud();

		//GetPlayerInput(*m_playerInput);



		// Check if player is dead, break
		if (m_goPlayer->CheckLifeState() != false)
		{
			m_whileGameRunning = false;
		}
	}     
}


void Game::Battle()
{
	m_artAssets.Monster();
	m_goEnemy->RollDamage();
	m_goEnemy->GetDamageVal();
}

void Game::DrawHud()
{
	m_screen->ChangeTextColor(0x1A);
	std::cout << "+===========================" << std::endl;
	std::cout << "| The Player has " << m_goPlayer->GetHealth() << " health points. " << std::endl;
	std::cout << "| Iventory has " << dynamic_cast<Player*>(m_goPlayer)->NumInInv() << " items." << std::endl;
	std::cout << "| The Enemy has " << m_goEnemy->GetHealth() << " health points. " << std::endl;
	std::cout << "|                                            " << std::endl;
	std::cout << "|                                            " << std::endl;
	std::cout << "|                                            " << std::endl;
	std::cout << "|                                            " << std::endl;
	std::cout << "|____________________________________________" << std::endl;
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

void Game::ClearPlayerInput()
{
	m_playerInput->clear();
}


void Game::GameOver()
{
	m_artAssets.GameOver();
}
