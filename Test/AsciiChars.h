#pragma once

#include "AtExit.h"


void DrawChars()
{
	unsigned char symbol = 0;
	for (; symbol < 255; symbol++)
		printf("%d %x %c \n", symbol, symbol, symbol);

	AtExit();
}
