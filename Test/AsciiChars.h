#pragma once


#include <iostream>

class AsciiChars
{
public:
	AsciiChars();
	int GetCharID();
	void DrawChar(int id);

private:
	// The assigned target to get for whenever a call is
	// made to aquire an ascii char object
	unsigned int m_charTarget;

};