// ProjetCercle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Point.h"
#include "Cercle.h"

int main()
{
    Point po(1, 3);
    Cercle c = Cercle::Creator();
    Cercle c2 = Cercle::Creator(Point::Point(2,3), 2);
    Cercle c3 = Cercle::Creator(po, 4);

    c.Afficher();
    c.ChangementRayon(2);
    c.Translation(2, 3);
    c.Afficher();

    if (c.Comparer(c2))
        std::cout << "Les deux cercles sont egaux" << std::endl;

    if (!c.Comparer(c3))
        std::cout << "Les cercles c et c3 ne sont pas egaux" << std::endl;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
