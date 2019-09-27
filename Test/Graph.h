#pragma once

#include <vector>
#include <string.h>
#include <array>


class Graph
{
public:
	Graph()
	{ };

	void Draw(/*int borders, int walls*/);
	void Update();


private:
	enum Directions { UP, DOWN, LEFT, RIGHT };

	// To-Do: Figure out how to make a more dynamic
	// method of passing these through
	const int m_rows = 6;
	const int m_columns = 6;

	unsigned const char m_diagBorder = 186;
	unsigned const char m_horBorder = 205;
	unsigned const char m_floor = 176;
	unsigned const char m_topRight = 187;
	unsigned const char m_topLeft = 201;
	unsigned const char m_bottomRight = 188;
	unsigned const char m_bottomLeft = 200;
	unsigned const char m_player = 173;
	unsigned const char m_enemy = 158;
	unsigned const char m_door = 221;
	unsigned const char m_horWall = 196;
	unsigned const char m_verWall = 179;

	// Creating the array on the heap for more
	// dynamic access
	//int* m_map = new int[23][77];
	std::array<std::array<int, 6>, 6> m_map;
	//m_map* = new MultiDimArray;
	//char *m_map = new char[][];
	//std::vector<m_map> 

};
