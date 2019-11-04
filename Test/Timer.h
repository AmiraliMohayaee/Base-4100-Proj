#pragma once

#include <chrono>
#include <thread>


class Timer
{
public:
	Timer();
	~Timer();

	void Sleep(int milSeconds);


private:
	int m_dt;
	
};