#include "Triangle.hpp"
#include <iostream>
bool Triangle::isThreePointsNotCollinear(Point a, Point b, Point c) {
	
	return (((c.y - b.y) * (b.x - a.x)) == ((b.y - a.y) * (c.x - b.x)));
}

Triangle::Triangle() {
	a.read_point();
	b.read_point();
	c.read_point();
	bool check = true;
	while (check) {
		if (((a.x == b.x) && (a.y == b.y) || ((a.x == c.x) && (a.y == c.y)) || ((b.x == c.x) && (b.y == c.y))) || Triangle::isThreePointsNotCollinear(a,b,c)) {
			std::cout << "You have entered incorrect data for your triangle\n";
			a.read_point();
			b.read_point();
			c.read_point();

		}
		else {
			check = false;
		}
	}
}

double Triangle::area(Point a, Point b, Point c) {
    double a1 = Point::dist(a, b);
    double a2 = Point::dist(a, c);
    double a3 = Point::dist(c, b);
    double p = (a1 + a2 + a3) / 2;
    return std::sqrt(p * (p - a1) * (p - a2) * (p - a3));
}

bool Triangle::isPointIn(Triangle T, Point p)
{
    return (Triangle::area(T.a, T.b, p) + Triangle::area(T.a, T.c, p) + Triangle::area(T.c,T.b, p)) <= Triangle::area(T.a, T.b, T.c);
}

