#pragma once

#include <mutex>

// Used to make a Singleton to make something
// non-duplicatable, but passable via pointer/ref

class NonCopyable
{
public:
	// these are on heap, we need to make 
	// sure the right form of deletion is made
	// on heap
	NonCopyable(int value): m_val(value) {}
	NonCopyable(const NonCopyable&) = delete;
	NonCopyable& operator=(const NonCopyable) = delete;


private:
	int m_val;

	// Mutex for protecting against multi-threaded
	// copying
	std::mutex m_mutex;
};