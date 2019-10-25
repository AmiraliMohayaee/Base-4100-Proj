#include "Player.h"
#include <iostream>

Player::Player()
{
	posX = 0;
	posY = 0;
	m_health = 100;
	m_name = "";
}

Player::~Player()
{
	//delete m_name;
}

void Player::Draw() 
{
	std::cout << "Drawing Player\n";
}

void Player::Update()
{
	std::cout << "Updating Player\n";
}

std::string Player::GetPlayerName() const
{
	return m_name;
}

void Player::SetPlayerName(std::string& name)
{
	//assert(name);
	m_name = name;
}

int Player::GetPlayerPos()
{
	return posX, posY;
}

void Player::SetPlayerPos(int x, int y)
{
	posX = x;
	posY = y;
}

bool Player::CheckLifeState() const
{
	return false;
}
