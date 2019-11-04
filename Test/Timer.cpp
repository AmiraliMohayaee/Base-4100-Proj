#include "Timer.h"


Timer::Timer()
{
	m_dt = 0;
}

Timer::~Timer()
{
	
}

void Timer::Sleep(int milSeconds)
{
	std::this_thread::sleep_for(std::chrono::milliseconds(milSeconds));
}
