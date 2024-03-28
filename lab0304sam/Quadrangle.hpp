
#ifndef QUADRANGLE_H
#define QUADRANGLE_H
#include <iostream>
#include "Point.hpp"
#include "Triangle.hpp"

class Quadrangle {
private:

public:
	Point a;
	Point b;
	Point c;
	Point d;

	// void func()
	// Class();
	Quadrangle();
	bool isInTriangle(Triangle A);
	bool isAnyThreePointsCollinear();
};

#endif