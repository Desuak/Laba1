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
	\warning The class which is responsible for the Square shape and formulas for calculating the space as well as elements.
	A child class that descended from a class Fugure
*/
class Square : public Figure {
private:
    int a;
public:
    Square() : a{ 0 } {}
    Square(int a) : a{ a } {}
    float p() override { return 4*a; }
    float s() override { return a*a; }
};
