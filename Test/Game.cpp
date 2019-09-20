#include "Game.h"
#include <conio.h>
#include <iostream>

using namespace std;

Game::Game()
{
    m_player = new Player();
	m_enemy = new Enemy();
	//GameObject go1* = new GameObject;
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
	m_player->Draw();
	Graph();
	m_player->Update();
}

void Game::Update()
{
	cout << "Updating Game\n";
	m_player->Update();
}


void Game::Intro()
{
	cout << "You enter a dark Dungeon.\n" <<
		"It's dark and smelly here\n";


	cout << "Oh look, there is a piece of candy\n";
}


void Game::Graph()
{

}

void Game::Battle()
{
	m_enemy->RollDamage();
	m_enemy->GetDamageVal();
}
