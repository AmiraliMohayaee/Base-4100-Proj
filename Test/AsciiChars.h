#pragma once


#include <iostream>


class AsciiChars
{
public:
	AsciiChars();
	int GetCharID();
	void DrawChar(int id);

	// Prints all available ascii elements
	void DrawCharTestTable();

private:
	// The assigned target if so the correct 
	// ascii character from the table is called
	// retains its own ID
	unsigned int m_charTarget;

};