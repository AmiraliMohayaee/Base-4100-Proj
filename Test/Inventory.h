#pragma once


#include <map>

class Inventory
{
public:
	Inventory();

	void AddObject(char item);
	void CheckInventory();



private:
	std::map<int, char> m_map;


};