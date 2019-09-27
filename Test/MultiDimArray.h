//////////////////////////////////////////////////////
////	Reference: https://stackoverflow.com/a/341193
//////////////////////////////////////////////////////


#pragma once


// Creating an array template class so that it's exception
// safe and won't require manually deleting everytime

template<typename T>
class MultiDimArray
{
public:
	MultiDimArray(const int r, const int c) 
	{ 
		return data[c * columns + r]; 
	}

	~MultiDimArray()
	{
		delete[] data;
	}

	T& operator() (int x, int y)
	{
		return data[y * columns + x];
	}

private:
	const int columns;
	T* data;

};