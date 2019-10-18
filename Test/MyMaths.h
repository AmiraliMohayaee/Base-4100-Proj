#pragma once


int Power(int base, int exponent)
{
	// Checks if base exponent is not 
	// 0 or 1 and then recursively goes through 
	// the call to multiply the number by itself until
	// the exponent value is reached
	if (exponent == 0)
		return 1;
	if (exponent == 1)
		return base;
	else
		return base * Power(base, exponent - 1);
}