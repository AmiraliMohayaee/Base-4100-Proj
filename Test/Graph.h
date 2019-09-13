#pragma once


class Graph
{
public:
	Graph();
	void Draw(int rows, int columns);
	void Update();


private:
	int row;
	int column;
	int leftTop;
	int rightTop;
	int botLeft;
	int botRight;
};