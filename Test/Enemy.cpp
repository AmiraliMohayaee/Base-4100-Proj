#include "Enemy.h"
#include <iostream>
#include <random>


Enemy::Enemy()
{
	m_dmg = 0;

	posX = 0;
	posY = 0;

	m_isAlive = true;

	m_health = 100;
}

Enemy::~Enemy()
{

}

void Enemy::Draw()
{

}

void Enemy::Update()
{

}

int Enemy::RollDamage()
{
	// Returns a random number between the
	// seed range

	std::random_device dev;
	std::mt19937 rng(dev());
	// Seed range of 1 to 20
	std::uniform_int_distribution
		<std::mt19937::result_type>
		dist20(1, 20);	

	return dist20(rng);
}

void Enemy::GetDamageVal()
{
	std::cout << "You get hit for " <<
		RollDamage() << " \n";
}

int Enemy::GetHealth()
{
	return m_health;
}

bool Enemy::CheckLifeState() const
{
	return m_isAlive;
}
