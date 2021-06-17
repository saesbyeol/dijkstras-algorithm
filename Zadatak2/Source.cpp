#include <iostream>
#include <Windows.h>
#include "Algo.h"

int main() {

	// GLOBAL MATRIX SETTIGNS
	int x = 0, y = 0;


	// USER INPUT
	std::cout << "Choose matrix size:\nX: "; std::cin >> x;
	std::cout << "Y: "; std::cin >> y;

	system("cls");

	Algo matrica(x, y);
	std::cout << "The algorithm will attempt to find the shortest path from POINT A to POINT B" << std::endl;
	std::cout << "Choose Coordinates for POINT A -  " << std::endl;
	std::cout << "X: "; std::cin >> x; std::cout << "Y: "; std::cin >> y;

	// SET POINT A
	matrica.setA(x, y);
	std::cout << std::endl;
	std::cout << "Choose Coordinates for POINT B -  " << std::endl;
	std::cout << "X: "; std::cin >> x; std::cout << "Y: "; std::cin >> y;

	// SET POINT B
	matrica.setB(x, y);

	// WINDOW DISPLAY
	do
	{
		system("cls");
		std::cout << matrica.run();
		Sleep(150);
	} while (matrica.TempDot() != matrica.RealDot());

	return 0;
}