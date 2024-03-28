#include <iostream>
#include "Point.hpp"
#include <cmath>



void Point::read_point() {
	bool check = true;
	float _x, _y;
	while (check) {
		std::cout << "Enter x and y: ";
		std::cin >> _x >> _y; 
		if (std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore(80, '\n');
			std::cout << "Incorrect input try again\n";
		}
		else {
			check = false;
			this->x = _x;
			this->y = _y;
		}

	}
}

float Point::dist(Point a, Point b) {
	return std::sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}