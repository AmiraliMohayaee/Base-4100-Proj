#include "Player.h"
#include <iostream>

Player::Player() : GameObject()
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
