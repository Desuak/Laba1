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
	\warning The class which is responsible for the Romb shape and formulas for calculating the space as well as elements.
	A child class that descended from a class Fugure
*/
class Romb : public Figure {
private:
    int a,r,h;
public:
    Romb():a{0},r{0},h{0}{}
    Romb(int a,int r,int h):a{a},r{r},h{h}{}
   float p() override { return 4*a; }
   float s() override { return a*h; }
};

