#pragma once

#include "GameObject.h"
#include <string>
#include <assert.h>
#include "Inventory.h"


class Player: public GameObject
{
public:
	Player();
	~Player();
	void Draw();
	void Update();

	std::string GetPlayerName() const;
	void SetPlayerName(std::string& name);

	int GetPlayerPos();
	void SetPlayerPos(int x, int y);
	bool CheckLifeState() const;

	void CheckInventory(Inventory &inv);

	void AddInv(const std::string& name, const Inventory& inv);
	void GetInv(const std::string& name);
	void RemoveInv(const std::string& name);
	void CheckInv();

	// When player dies, it keeps the inventory 
	// so another player can pick it up
	const std::map<std::string, Inventory>* ReturnMap();

	const Inventory* GetItem();

private:
	unsigned int m_health;
	std::string m_name;

	Inventory* m_inv;

	std::map<std::string, Inventory> m_map;

};