#define _USE_MATH_DEFINES
#include "Cercle.h"
#include <iostream>
#include <cmath>

Cercle::Cercle()
{
	this->c = Point::Point(0, 0);
	this->r = 1;
}

Cercle::Cercle(Point p, double r)
{
	this->c = p;
	this->r = r;
}

Cercle Cercle::Creator()
{
	return Cercle();
}

Cercle Cercle::Creator(Point p, double r)
{
	return Cercle(p, r);
}

void Cercle::Afficher()
{
	std::cout << "Centre: ";
	this->c.Afficher();
	std::cout << "Rayon: " << this->r << std::endl;
}

void Cercle::ChangementRayon(double newR)
{
	if (newR > 0)
		this->r = newR;
}

void Cercle::Translation(double newX, double newY)
{
	this->c = Point::Point(newX, newY);
}

double Cercle::Surface()
{
	return pow(this->r, 2) * M_PI;
	//S = π R R
}

double Cercle::Perimetre()
{
	return 2 * M_PI * this->r;
	//P = 2 π R
}

bool Cercle::Comparer(Cercle c2)
{
	return c2.r == this->r;
}

bool Cercle::Appartenance(Point p)
{
	return this->c.Distance(p) <= this->r;
}
