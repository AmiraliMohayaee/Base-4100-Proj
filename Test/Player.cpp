#include "Player.h"
#include <iostream>

Player::Player()
{
	posX = 0;
	posY = 0;
	m_health = 100;
	m_name = "";

	// Allocating memory for the inventory
	m_inv = new Inventory;
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

void Player::CheckInventory(Inventory& inv)
{
	if (m_map.empty())
	{
		std::cout << "The inventory is empty.\n";
	}
	std::cout << "There are " << m_map.size() << " items in the inventory.\n";
}

void Player::AddInv(const std::string& name, const Inventory& inv)
{
	m_map[name] = inv;

	// Alternative Insertion Method
	//m_map.insert(std::pair<std::string, Inventory>(name, inv));
}

void Player::GetInv(const std::string& name)
{
	auto it = m_map.find("name");

	std::cout << "you ahve" << it->first << " yeah\n";
}

void Player::RemoveInv(const std::string& name)
{
	m_map.erase("name");
}

void Player::CheckInv()
{
	for (auto it = m_map.begin(); it != m_map.end(); ++it)
	{
		std::cout << "Player has a " << it->first << " in the inventory.\n";
	}
}

const std::map<std::string, Inventory>* Player::ReturnMap()
{
	return &m_map;
}

const Inventory* Player::GetItem()
{
	// Gets a single item from map
	return m_inv;
}
