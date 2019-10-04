#pragma once



class Piano
{
public:
	Piano();
	void Draw();
	void Update();

	void Play();

private:
	enum KEYS { C = 1000, D , E, F, G, A, B };


};