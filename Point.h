#pragma once
class Point
{
private:
	double x;
	double y;

public:
	Point();
	Point(double, double);
	void Afficher();
	double Distance(Point p);
};

