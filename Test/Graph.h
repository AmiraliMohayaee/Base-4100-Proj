#pragma once


class Graph
{
public:
	Graph(int rows, int columns) : m_rows(rows), m_columns(columns) 
	{
		//GraphDim 
	};

	void Draw();
	void Update();


private:
	enum GraphDim { rows, colums };

	int m_rows;
	int m_columns;

	int m_map[rows][colums] = { };
};
