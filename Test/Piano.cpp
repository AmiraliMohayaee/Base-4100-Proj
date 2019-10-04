#include "Piano.h"
#include <iostream>
#include <Windows.h>

Piano::Piano()
{

}

void Piano::Draw()
{
	std::cout << R"(
		| | | | | | | | | | | | |
		| | | | | | | | | | | | |
		| |_| |_| | |_| |_| |_| |
 		| C| D | E| F| G | A | B|
		)" << std::endl;
}

void Piano::Update()
{
	while (GetAsyncKeyState ('A'))
	{
		Beep(C, 500);
	}
}

void Piano::Play()
{

}
