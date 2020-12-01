/*!
\file
\brief Children's file
This one comes from the parent file Fugura
*/
#pragma once
#include "Fugura.h"
#include <iostream>
#include <string>
#include <cmath>
/*!
	\brief Child class
	\warning The class which is responsible for the Trap shape and formulas for calculating the space as well as elements.
	A child class that descended from a class Fugure
*/
class Trap : public Figure {
private:
    int a,b,c,d,h;
public:
    Trap():a{0},b{0},c{0},d{0},h{0}{}
    Trap(int a,int b,int c,int d,int h):a{a},b{b},c{c},d{d},h{h}{}
   float p() override { return a+b+c+d; }
   float s() override { return ((a+d)/2)*h; }
};


