#pragma once

#include <vector>
#include <string.h>
#include <map>


class Graph
{
public:
	Graph();
	//Graph(int rows, int columns) : m_rows(rows), m_columns(columns) 
	//{ };

	void Draw(/*int borders, int walls*/);
	void Update();


private:
	enum DIRECTION { UP, DOWN, LEFT, RIGHT };
	enum TILES { VERTBORD = 186, HORBORD = 205, FLOOR = 176, 
		TOPRIGHT = 187, TOPLEFT = 201, BOTTOMRIGHT = 188,
		BOTTOMLEFT = 200, PLAYER = 173,
		ENEMY = 158, DOOR = 221, HORWALL = 196,
		VERWALL = 179};

	int m_rows;
	int m_columns;

	std::map<int, char> m_map;

	// Creating the array on the heap for more
	// dynamic access
	//int* m_map = new int[23][77];
	//std::array<std::array<int, 6>, 6> m_map;
	//m_map* = new MultiDimArray;
	
	//std::vector<m_map> 

};
