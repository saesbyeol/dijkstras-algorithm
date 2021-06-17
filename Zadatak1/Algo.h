#pragma once
#include <iostream>
#include <string>
#include <sstream>


class Algo
{
private:
	int x = 0, y = 0;
	std::pair<std::pair<int, int>, std::pair<int, int>> realDot;
	std::pair<int, int> tempDot;
	void algorithm();
	
public:

	// CONSTRUCTOR
	Algo(int x, int y);

	void setA(int x, int y);
	void setB(int x, int y);

	// PROGRAM START
	std::string run();

	std::pair<int, int> TempDot();
	std::pair<int, int> RealDot();
};

