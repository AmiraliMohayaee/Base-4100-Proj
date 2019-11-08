#pragma once


class GameObject
{
public:
	virtual ~GameObject() = 0 {};

	virtual void Draw() = 0;
	virtual void Update() = 0;

	virtual bool CheckLifeState() const = 0;
	virtual int RollDamage() = 0;
	virtual void GetDamageVal() = 0;
	virtual int GetHealth() = 0;

protected:
	int posX, posY;
	int m_dmg;
	bool m_isAlive;

	unsigned int m_health;
};