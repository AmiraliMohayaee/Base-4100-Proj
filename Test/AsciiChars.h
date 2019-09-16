#pragma once

#include "AtExit.h"


void DrawChars()
{
	unsigned char symbol = 0;
	for (; symbol < 255; symbol++)
		printf("%d %x %c \n", symbol, symbol, symbol);

	AtExit();
}


class AsciiChars
{
public:
	AsciiChars();
	void GetChar(int id);

private:
	// The assigned target to get for whenever a call is
	// made to aquire an ascii char object
	int m_charTarget;

};