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
	\warning The class which is responsible for the nkyt shape and formulas for calculating the space as well as elements.
	A child class that descended from a class Fugure
*/
class Nkyt : public Figure {
private:
    int R,r,n,level;
public:
    Nkyt() : R{ 0}, r{0}, n{0} {}
    Nkyt(int R, int r, int n, int level) : R{ R }, r{r}, n{n} {}
    float p() override { return n*(2*R)*(sin(180/n)); }
    float s() override { return (n*(2*R)*(sin(180/n))) / r; }
};

