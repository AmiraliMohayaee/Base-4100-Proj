#include "Graph.h"
#include <iostream>



void Graph::Draw()
{
	// Test Graph Drawing
	// ToDo: Replace this
	{
		char cha = 171;
		
		// forming a simple graph
		for (int i = 0; i < m_rows; i++)
		{
			for (int j = 0; j < m_columns; j++)
			{
				std::cout << cha << " ";
			}
			std::cout << std::endl;
		}
	}
}


void Graph::Update()
{
	
}
