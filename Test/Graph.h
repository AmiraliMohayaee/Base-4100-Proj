#pragma once


class Graph
{
public:
	Graph(int rows, int columns) : m_rows(rows), m_columns(columns) 
	{
	
	};

	void Draw(/*int borders, int walls*/);
	void Update();


private:
	enum GraphDim { ROWS = 0, COLUMNS = 0 };
	enum Directions { UP, DOWN, LEFT, RIGHT };

	int m_rows;
	int m_columns;

	int m_borders;
	int m_walls;
	int m_floor;

	//int m_map[ROWS][COLUMNS] = { };
};
