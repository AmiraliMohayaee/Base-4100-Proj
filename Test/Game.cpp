#include "Game.h"
#include <conio.h>
#include <iostream>
#include <Windows.h>

using namespace std;

Game::Game()
{
	m_graph = new Graph();
    m_player = new Player();
	m_enemy = new Enemy();
	//GameObject m_go = &m_player;
}

Game::~Game()
{
	delete m_player;
}

void Game::Init()
{
	cout << "initializing Game\n";
}

void Game::Draw()
{
	cout << "Drawing Game\n";
	m_graph->Draw();
	m_player->Draw();
	m_player->Update();
}

void Game::Update()
{
	cout << "Updating Game\n";
	m_graph->Update();
	m_player->Update();
	
}


void Game::Intro()
{
	cout << "You enter a dark Dungeon.\n" <<
		"It's dark and smelly here\n";

	cout << "Oh look, there is a piece of candy\n";


	// Play some beethoven
	Beep(1568, 200);
	Beep(1568, 200);
	Beep(1568, 200);
	Beep(1245, 1000);
	Beep(1397, 200);
	Beep(1397, 200);
	Beep(1397, 200);
	Beep(1175, 1000);
}


void Game::Battle()
{
	m_enemy->RollDamage();
	m_enemy->GetDamageVal();
}
