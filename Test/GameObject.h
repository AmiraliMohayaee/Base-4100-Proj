#pragma once


class GameObject
{
protected:
	virtual void Draw() = 0;
	virtual void Update() = 0;

	int posX, posY;

	bool m_isAlive;
};