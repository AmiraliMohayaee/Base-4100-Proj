#include "AsciiChars.h"

AsciiChars::AsciiChars()
{
	m_charTarget = 0;
}

int AsciiChars::GetCharID()
{
	return 0;
}

void AsciiChars::DrawChar(int id)
{
	m_charTarget = id;

	// This is a test example and should not be used 
	// as actual project code
	unsigned char symbol = 0;
	for (; symbol < 255; symbol++)
		printf("%d %x %c \n", symbol, symbol, symbol);

}
