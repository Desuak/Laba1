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
	\warning The class which is responsible for the Rectangle shape and formulas for calculating the space as well as elements.
	A child class that descended from a class Fugure
*/
class Rectangle : public Figure {
private:
    int a,t;
public:
    Rectangle():a{0},t{0}{}
    Rectangle(int a,int t):a{a},t{t}{}
  float p() override { return 2*(a+t); }
  float s() override { return a*t; }
};

