#pragma once

#include "NonCopyable.h"


class Singleton 
{
public:
	/*~Singleton()
	{
		s_singletonInstance = false;
	}*/
	
	static Singleton* GetInstance()
	{
		static Singleton* s_singletonInstance = new Singleton;
		return s_singletonInstance;
	}

private:

	

};



///////////////////////////////////////////////////
/////	For Reference:
/////https://www.codeproject.com/Articles/1921/Singleton-Pattern-its-implementation-with-C
///////////////////////////////////////////////////