#pragma once
#include <iostream>
#include <vector>

using namespace std;

class Cell
{
public:
	Cell() = default;
	Cell(const Cell& rhs)
	{
		hasRightWall = rhs.hasRightWall;
		hasBottomWall = rhs.hasBottomWall;
		group = rhs.group;
	}

	bool RightWall() { return hasRightWall; }
	bool BottomWall() { return hasBottomWall; }
	bool SetRightWall(bool hasWall) 
	{
		hasRightWall = hasWall;
		return hasRightWall;
	}
	bool SetBottomWall(bool hasWall)
	{
		hasBottomWall = hasWall;
		return hasBottomWall;
	}
	int Group() { return group; }
	int SetGroup(int number) 
	{
		group = number;
		return group;
	}
private:
	bool hasRightWall = false;
	bool hasBottomWall = false;
	int group = -1;
};

class EllersAlgorithm
{
public:
	vector<vector<Cell>> Generate(int width, int height);
private:
	void CreateRightWall(vector<Cell>& cells);
	void CreateBottomWall(vector<Cell>& cells);
	vector<Cell> PrepareNextRow(vector<Cell>& cells, int rowNumber, int width);
	bool CreateWall();
private:
	const int MaxBias = 64;
	const int Bias = 32;
};
