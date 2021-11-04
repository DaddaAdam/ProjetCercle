#pragma once
#include "Point.h"
class Cercle
{
private:
	Point c;
	double r;
private:
	// Constructeurs privés
	Cercle();
	Cercle(Point, double);
public:
	static Cercle Creator();
	static Cercle Creator(Point, double);

	void Afficher();
	void ChangementRayon(double);
	
	void Translation(double, double);
	double Surface();
	double Perimetre();
	bool Comparer(Cercle);
	bool Appartenance(Point);

};

