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
	// Initializing the container to start as empty
	m_map.clear();

	// forming a graph by populating a 12 x 12 graph
	for (m_rows = 0; m_rows < 12; m_rows++)
	{
		for (m_columns = 0; m_columns < 12; m_columns++)
		{
			switch (TOPLEFT)
			{
			case TOPLEFT: 
				if (m_rows == 0 && m_columns == 0)
				{
					cout << (char)TOPLEFT;
					// Populating the element in the map
					m_map.insert(std::pair<int, char>((m_rows * m_columns)
						, TOPLEFT));
				}
				
			case TOPRIGHT:
				if (m_rows == 0 && m_columns == 11)
				{
					cout << (char)TOPRIGHT;
					m_map.insert(std::pair<int, char>((m_rows * m_columns)
						, TOPRIGHT));
				}
				
			case BOTTOMLEFT:
				if (m_rows == 11 && m_columns == 0)
				{
					cout << (char)BOTTOMLEFT;
					m_map.insert(std::pair<int, char>((m_rows * m_columns)
						, BOTTOMLEFT));
				}
				
			case BOTTOMRIGHT:
				if (m_rows == 11 && m_columns == 11)
				{
					cout << (char)BOTTOMRIGHT;
					m_map.insert(std::pair<int, char>((m_rows * m_columns)
						, BOTTOMRIGHT));
				}
	
			case HORBORD:
				if ((m_rows == 0 || m_rows == 11) &&
					(m_columns > 0 && m_columns < 11))
				{
					cout << (char)HORBORD;
					m_map.insert(std::pair<int, char>((m_rows * m_columns)
						, HORBORD));
				}

			case VERTBORD:
				if ((m_rows > 0 && m_rows < 11) &&
					(m_columns == 0 || m_columns == 11))
				{
					cout << (char)VERTBORD;
					m_map.insert(std::pair<int, char>((m_rows * m_columns)
						, VERTBORD));
				}

			case PLAYER:
				if (m_rows == 3 && m_columns == 3)
				{
					cout << (char)PLAYER;
					m_map.insert(std::pair<int, char>((m_rows * m_columns)
						, PLAYER));
				}

			case DOOR:
				if (m_rows == 3 && m_columns == 5)
				{
					cout << (char)DOOR;
					m_map.insert(std::pair<int, char>((m_rows * m_columns)
						, DOOR));
				}

			case HORWALL:
				if ((m_columns > 0 && m_columns == 7))
				{
					cout << (char)HORWALL;
					m_map.insert(std::pair<int, char>((m_rows * m_columns)
						, HORWALL));
				}

			case VERWALL:
			//	if ((m_rows > 0 && m_rows < 7) && (m_columns == 7))
			//	{
			//		cout << (char)VERWALL;
			//		m_map.insert(std::pair<int, char>((m_rows * m_columns)
			//			, VERWALL));
			//	}

			case FLOOR:
				//if (!(DOOR || PLAYER || VERTBORD || HORBORD || BOTTOMRIGHT || BOTTOMLEFT || 
				//	TOPRIGHT || TOPLEFT))
			{
				if (!(m_rows == 0 || m_columns == 0) && !(m_rows == 11 || m_columns == 11) &&
					!(m_rows == 0 || m_columns == 11) && !(m_rows == 11 || m_rows == 0))
					cout << (char)FLOOR;
					m_map.insert(std::pair<int, char>((m_rows * m_columns)
					, FLOOR));
			}

			default:
				//cout << "Cannot find correct Tile\n";
				break;
			}
			cout << " ";
		}
		cout << " " << endl;
	}

	// For testing the container
	//CheckElements();
}


void Graph::Update()
{
	
}

void Graph::CheckElements()
{
	cout << " The map array has " << m_map.size() << " elements\n";

	// Iterating through the map to individually test and see
	// if it's correctly populated
	for (std::map<int, char>::iterator it = m_map.begin();
		it != m_map.end(); it++)
	{
		// Printing the key and it's contained element in
		// map
		cout << "Element " << it->first << " in map is a "
			<< it->second << " \n";
	}
}

void Graph::SwapElements(int first, int second)
{

}
