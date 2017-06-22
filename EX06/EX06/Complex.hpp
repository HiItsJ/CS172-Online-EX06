//
//  Complex.hpp
//  EX06
//
//  Created by Josiah on 6/21/17.
//  Copyright © 2017 Josiah. All rights reserved.
//

#ifndef Complex_hpp
#define Complex_hpp

#include <stdio.h>
#include <string>
using namespace std;

class Complex{
    double a, b;
public:
    Complex();
    Complex(double a);
    Complex(double a, double b);
    double getRealPart();
    double getImaginaryPart();
    string toString();
    Complex& operator+(Complex& c);
    Complex& operator-(Complex& c);
    Complex& operator*(Complex& c);
    Complex& operator/(Complex& c);
    Complex& operator+=(Complex& c);
    Complex& operator-=(Complex& c);
    Complex& operator*=(Complex& c);
    Complex& operator/=(Complex& c);
    double operator[](int n);
    friend ostream& operator<<(ostream& os, Complex& c);
    friend istream& operator>>(istream& is, Complex& c);
};

#endif /* Complex_hpp */
