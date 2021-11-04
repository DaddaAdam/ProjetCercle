#include "Point.h"
#include <iostream>
#include <math.h>


Point::Point()
{
	this->x = 0;
	this->y = 0;
}

Point::Point(double x, double y)
{
	this->x = x;
	this->y = y;
}

void Point::Afficher()
{
	std::cout << "(X: " << this->x << ", Y: " << this->y << ")" << std::endl;
}

double Point::Distance(Point p)
{
	return sqrt(pow(p.x - this->x, 2) + pow(p.y - this->y, 2));
}
