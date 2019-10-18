#include "Player.h"
#include <iostream>

Player::Player()
{
	posX = 0;
	posY = 0;
}

Player::~Player()
{
	delete m_health;
}

void Player::Draw() 
{
	std::cout << "Drawing Player\n";
}

void Player::Update()
{
	std::cout << "Updating Player\n";
}

std::string Player::GetPlayerName(std::string& name) const
{
	*m_name = name;
	assert(m_name);
	return *m_name;
}

void Player::SetPlayerName(std::string& name)
{

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

bool Player::CheckLifeState()
{
	return false;
}
