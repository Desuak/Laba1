/*!
\file
\brief Children's file
This one comes from the parent file Fugura
*/
#include "Fugura.h"
#include <iostream>
#include <string>
#include <cmath>
/*!
	\brief Child class
	\warning The class which is responsible for the triangle shape and formulas for calculating the area as well as elements.
	A child class that descended from a class Fugure
*/
class Triangle : public Figure {
private:
    int a;
public:
    Triangle() : a{ 0 } {}
    Triangle(int a) : a{ a } {}
    float p() override { return 3*a; }
    float s() override { return ((a*a)*(3^(1/2)))/4; }
};

