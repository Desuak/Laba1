 /*!
 \file
 \brief Header file with class descriptions

This file contains the definitions of the main
classes used in the demo program
*/
#pragma once
#include <iostream>
#include <string>
#include <cmath>
/*!
\brief Father class
\warning The parent file from which the rest of the children's files go.
*/
class Figure {
public:
  virtual float  p()=0;
  virtual float  s()=0;
/*!
Displaying Space and Perimeter
\param P,S Space, Perimeter
\return Their score
*/
void print_info() {
    std::cout << "Figure P is " << p() << std::endl;
    std::cout << "Figure S is " << s() << std::endl;
  }
};
