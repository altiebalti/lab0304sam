#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Point.hpp"

class Triangle {
private:

public:
	Point a;
	Point b;
	Point c;

	Triangle();

	static double area(Point A, Point B, Point C);

	static bool isPointIn(Triangle T, Point p);

	static bool isThreePointsNotCollinear(Point a, Point b, Point c);
};

#endif