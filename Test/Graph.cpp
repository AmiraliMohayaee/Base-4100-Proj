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
				m_map[m_rows * m_columns] = (char)TOPLEFT;
				
			case TOPRIGHT:
				if (m_rows == 0 && m_columns == 11)
					cout << (char)TOPRIGHT;
				m_map[m_rows * m_columns] = (char)TOPRIGHT;
				
			case BOTTOMLEFT:
				if (m_rows == 11 && m_columns == 0)
					cout << (char)BOTTOMLEFT;
				m_map[m_rows * m_columns] = (char)BOTTOMLEFT;
				
			case BOTTOMRIGHT:
				if (m_rows == 11 && m_columns == 11)
					cout << (char)BOTTOMRIGHT;
				m_map[m_rows * m_columns] = (char)BOTTOMRIGHT;
	
			case HORBORD:
				if ((m_rows == 0 || m_rows == 11) && 
					(m_columns > 0 && m_columns < 11))
					cout << (char)HORBORD;
				m_map[m_rows * m_columns] = (char)HORBORD;

			case VERTBORD:
				if ((m_rows > 0 && m_rows < 11) && 
					(m_columns == 0 || m_columns == 11))
					cout << (char)VERTBORD;
				m_map[m_rows * m_columns] = (char)VERTBORD;

			case PLAYER:
				if (m_rows == 3 && m_columns == 3)
					cout << (char)PLAYER;
				m_map[m_rows * m_columns] = (char)PLAYER;

			case DOOR:
				if (m_rows == 3 && m_columns == 5)
					cout << (char)DOOR;
				m_map[m_rows * m_columns] = (char)DOOR;

			case HORWALL:
//				if ()
					//cout << (char)HORWALL;

			case VERWALL:
				if ((m_rows > 0 && m_rows < 7) && (m_columns == 7))
					cout << (char)VERWALL;

			case FLOOR:
				//if (!(DOOR || PLAYER || VERTBORD || HORBORD || BOTTOMRIGHT || BOTTOMLEFT || 
				//	TOPRIGHT || TOPLEFT))
				if (!(m_rows == 0 || m_columns == 0) && !(m_rows == 11 || m_columns == 11) &&
					!(m_rows == 0 || m_columns == 11) && !(m_rows == 11 || m_rows == 0))
					cout << (char)FLOOR;

			default:
				//cout << "Cannot find correct Tile\n";
				break;
			}
			cout << " ";
		}
		cout << " " << endl;
	}

	//CheckElements();
}


void Graph::Update()
{
	
}

void Graph::CheckElements()
{
	// Iterating through the map to individually test and see
	// if it's correctly populated
	for (std::map<int, char>::iterator it = m_map.begin();
		it != m_map.end(); it++)
	{
		cout << " The map array has " << m_map.size() << " elements\n";
		cout << "Element " << it->first << " in map is a "
			<< it->second << " \n";
	}
}
