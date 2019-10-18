#pragma once

#include "NonCopyable.h"


class Singleton //: public NonCopyable
{
public:
	~Singleton()
	{
		s_singletonInstance = false;
	}
	
	//static Singleton* GetInstance(); 

private:

	static bool s_instanceFlag;
	static Singleton* s_singletonInstance;

};



///////////////////////////////////////////////////
/////	For Reference:
/////https://www.codeproject.com/Articles/1921/Singleton-Pattern-its-implementation-with-C
///////////////////////////////////////////////////