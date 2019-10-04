#pragma once



class Piano
{
public:
	Piano();
	void Draw();
	void Update();

	void Play();

private:
	enum KEYS { C = 1000, D = 1500 , E = 2000, 
		F, G, A, B };


};