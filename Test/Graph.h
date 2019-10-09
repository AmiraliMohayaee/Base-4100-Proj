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

	void CheckElements();
	void SwapElements(int first, int second);

	void PopulateGraph();

private:
	enum DIRECTION { UP, DOWN, LEFT, RIGHT };

	// Tiles use ascii reference codes for what to draw
	enum TILES { VERTBORD = 186, HORBORD = 205, FLOOR = 176, 
		TOPRIGHT = 187, TOPLEFT = 201, BOTTOMRIGHT = 188,
		BOTTOMLEFT = 200, PLAYER = 173,
		ENEMY = 158, DOOR = 221, HORWALL = 196,
		VERWALL = 179};

	int m_rows;
	int m_columns;

	// Container for keeping the tile elements and
	// their references
	std::map<int, char> m_map;

};
