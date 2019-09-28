#include "Graph.h"
#include <iostream>


using namespace std;

Graph::Graph()
{
	m_rows = 0;
	m_columns = 0;
}

void Graph::Draw()
{
	// forming a graph
	for (m_rows = 0; m_rows < 12; m_rows++)
	{
		for (m_columns = 0; m_columns < 12; m_columns++)
		{
			switch (TOPLEFT)
			{
			case TOPLEFT: 
				if (m_rows == 0 && m_columns == 0)
					cout << (char)TOPLEFT;
					//m_map.insert[]
				
			case TOPRIGHT:
				if (m_rows == 0 && m_columns == 11)
					cout << (char)TOPRIGHT;
				
			case BOTTOMLEFT:
				if (m_rows == 11 && m_columns == 0)
					cout << (char)BOTTOMLEFT;
				
			case BOTTOMRIGHT:
				if (m_rows == 11 && m_columns == 11)
					cout << (char)BOTTOMRIGHT;
	
			case HORBORD:
				if ((m_rows == 0 || m_rows == 11) && 
					(m_columns > 0 && m_columns < 11))
					cout << (char)HORBORD;

			case VERTBORD:
				if ((m_rows > 0 && m_rows < 11) && 
					(m_columns == 0 || m_columns == 11))
					cout << (char)VERTBORD;

			case PLAYER:
				if (m_rows == 3 && m_columns == 3)
					cout << (char)PLAYER;

			//case FLOOR:
			//	if (!(i == 0 || j == 0) && !(i == 11 || j == 11) &&
			//		!(i == 0 || j == 11) && !(i == 11 || i == 0))
			//		cout << (char)FLOOR;

			default:
				//cout << "Cannot find correct Tile\n";
				break;
			}
			cout << " ";
		}
		cout << " " << endl;
	}
	cout << " The map array has " << sizeof(m_map) << " elements\n";
}


void Graph::Update()
{
	
}
