#include "Quadrangle.hpp"
#include "Triangle.hpp"


bool Quadrangle::isAnyThreePointsCollinear() {
	return Triangle::isThreePointsNotCollinear(this->a, this->b, this->c) &&
		Triangle::isThreePointsNotCollinear(this->a, this->b, this->d) &&
		Triangle::isThreePointsNotCollinear(this->b, this->c, this->d) &&
		Triangle::isThreePointsNotCollinear(this->a, this->d, this->c);
}

Quadrangle::Quadrangle() {
	a.read_point();
	b.read_point();
	c.read_point();
	d.read_point();
	bool check = true;
	while (check) {
		if ((a.x == b.x) && (a.y == b.y) || ((a.x == c.x) && (a.y == c.y)) || ((a.x == d.x) && (a.y == d.y))
			|| ((b.x == c.x) && (b.y == c.y)) || ((b.x == d.x) && (b.y == d.y)) || ((d.x == c.x) && (d.y == c.y)) 
			|| Quadrangle::isAnyThreePointsCollinear()) {
			std::cout << "You have entered incorrect data for your quadrangle\n";
			a.read_point();
			b.read_point();
			c.read_point();
			d.read_point();
		}
		else {
			check = false;
		}
	}
}


bool Quadrangle::isInTriangle(Triangle A) {
	return Triangle::isPointIn(A, this->a) && Triangle::isPointIn(A, this->b) && 
		Triangle::isPointIn(A, this->c) && Triangle::isPointIn(A, this->d);

}