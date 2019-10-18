#pragma once

#include <chrono>


class Timer
{
public:
	Timer();
	~Timer();


private:
	std::chrono* m_timer;

};