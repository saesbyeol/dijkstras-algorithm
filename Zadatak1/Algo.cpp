#include "Algo.h"

void Algo::algorithm()
{
	if (this->tempDot.first > this->realDot.second.first)
	{
		--(this->tempDot.first);
	}
	else if (this->tempDot.first < this->realDot.second.first)
	{
		++(this->tempDot.first);
	}
	else
	{
		if (this->tempDot.second > this->realDot.second.second)
		{
			--(this->tempDot.second);
		}
		else if (this->tempDot.second <= this->realDot.second.second)
		{
			++(this->tempDot.second);
		}
	}
}

Algo::Algo(int x, int y)
{
	this->x = x;
	this->y = y;
}

void Algo::setA(int x, int y)
{
	this->realDot.first.first = x;
	this->realDot.first.second = y;
}

void Algo::setB(int x, int y)
{
	this->realDot.second.first = x;
	this->realDot.second.second = y;
	this->tempDot = this->realDot.first;
}

std::string Algo::run()
{
	this->algorithm();
	std::stringstream ss;

	for (int i = 1; i <= this->x; ++i)
	{
		for (int j = 1; j <= this->y; ++j) 
		{
			if (i == this->tempDot.first && j == this->tempDot.second)
			{
				ss << "x";
			}
			else if (i == this->realDot.first.first && j == this->realDot.first.second)
			{
				ss << "A";
			}
			else if (i == this->realDot.second.first && j == this->realDot.second.second) 
			{
				ss << "B";
			}
			else 
			{
				ss << "-";
			}
		}
		ss << "\n";
	}

	return ss.str();
}

	

std::pair<int, int> Algo::TempDot()
{
	return this->tempDot;
}

std::pair<int, int> Algo::RealDot()
{
	return this->realDot.second;
}

