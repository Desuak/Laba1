/*!
\file
\brief Interface
We refer to children's files so that the main program can use them for work.
*/
#pragma once
#include "Fugura.h"
#include "Triangle.h"
#include "Square.h"
#include "Nkyt.h"
#include "Trap.h"
#include "Rectangle.h"
#include "Romb.h"
#include "Tree.h"
#include <iostream>
#include <string>
#include <cmath>
/*!
Creates variables responsible for Space and Perimeter and creates an interface
\param[in] f Responsible for assigning each choice in the interface to its number
\param[in] p Impersonates the value of the Perimeter
\param[in] s Impersonates the value of the Space
*/
void menu(){
    int  f;
    int p();
    int s();
    while (true) {
            f = -1;
            std::cout<< "\n Enter figure: \n"<<
                   "\t#0 - n-kyt\n"<<
                   "\t#1 - square;\n"<<
                   "\t#2 - triangle;\n"<<
                   "\t#3 - romb\n"<<
                   "\t#4 - Trapezoid\n"<<
                   "\t#5 - rectangle\n"<<
                   "#6 - back\n";
        while ((f < 0) || (f >6 )) {
            std::cout << "\n#";
            std::cin >> f;
        }
        switch (f){
            /*!
            Enter numbers
            \param n,R,r  n-number of corners,R-outer circle radius,r-inner circle radius
            \return We apply the file Nkyt and start the action Figura, as a result we display the space and perimeter.
*/
        case 0: {
                int n,R,r;
                std::cout<<"Print n \n";
                std::cin >> n;
                std::cout<<"Print R \n";
                std::cin >> R;
                std::cout<<"Print r\n";
                std::cin>>r;
                Nkyt*figure= new Nkyt(n,R,r);
                figure->print_info();
                break;
            }
                        /*!
            Enter numbers
            \param a-side length
            \return We apply the file Square and start the action Figura, as a result we display the space and perimeter.
*/
            case 1: {
                int a;
                std::cout<<"Print side \n";
                std::cin>>a;
                Square*figure= new Square(a);
                figure->print_info();
                break;
                }
                                        /*!
            Enter numbers
            \param a-side length
            \return We apply the file Triangle and start the action Figura, as a result we display the space and perimeter.
*/
            case 2: {
                int a;
                std::cout<<"Print side \n";
                std::cin>>a;
                Triangle*figure= new Triangle(a);
                figure->print_info();
                break;
            }
                        /*!
            Enter numbers
            \param a,h,r  a-side length,h-height size,r-inner circle radius
            \return We apply the file Romb and start the action Figura, as a result we display the space and perimeter.
*/
            case 3: {
                int a,h,r;
                std::cout<<"Print side \n";
                std::cin>>a;
                std::cout<<"Print r \n";
                std::cin>>r;
                std::cout<<"Print h \n";
                std::cin>>h;
                Romb*figure= new Romb(a,h,r);
                figure->print_info();
                break;
                }
                                     /*!
            Enter numbers
            \param a,b,c,d,h  a,b,c,d-side length,h-height size
            \return We apply the file Trap and start the action Figura, as a result we display the space and perimeter.
*/
            case 4: {
                int a,b,c,d,h;
                std::cout<<"Print a \n";
                std::cin >> a;
                std::cout<<"Print b \n";
                std::cin >> b;
                std::cout<<"Print c \n";
                std::cin >> c;
                std::cout<<"Print d \n";
                std::cin >> d;
                std::cout<<"Print h\n";
                std::cin>>h;
                Trap*figure= new Trap(a,b,c,d,h);
                figure->print_info();
                break;
            }
                                    /*!
            Enter numbers
            \param a,t  a-side length,t-height size
            \return We apply the file Rectangle and start the action Figura, as a result we display the space and perimeter.
*/
            case 5: {
                int a,t;
                std::cout<<"Print length \n";
                std::cin>>a;
                std::cout<<"Print height \n";
                std::cin>>t;
                Rectangle*figure= new Rectangle(a,t);
                figure->print_info();
                break;
            }
                                                /*!
            Close.
*/
            case 6: {
                return;
            }
            default:;
        }
    }
}
