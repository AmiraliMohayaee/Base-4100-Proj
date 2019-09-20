#include "Player.h"
#include <iostream>

Player::Player() : GameObject()
{
	posX = 0;
	posY = 0;
}

void Player::Draw() 
{
	std::cout << "Drawing Player\n";
}

void Player::Update()
{
	std::cout << "Updating Player\n";
}
