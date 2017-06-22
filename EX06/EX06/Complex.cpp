//
//  Complex.cpp
//  EX06
//
//  Created by Josiah on 6/21/17.
//  Copyright © 2017 Josiah. All rights reserved.
//

#include "Complex.hpp"

Complex::Complex(){
    a = 0;
    b = 0;
}
Complex::Complex(double a){
    this->a = a;
    b = 0;
}
Complex::Complex(double a, double b){
    this->a = a;
    this->b = b;
}
double Complex::getRealPart(){
    return a;
}
double Complex::getImaginaryPart(){
    return b;
}
string Complex::toString(){
    return "("+to_string(a)+" + "+to_string(b)+"i)";
}
Complex& Complex::operator+(Complex &c){
    a += c.a;
    b += c.b;
    return *this;
}
Complex& Complex::operator-(Complex &c){
    a -= c.a;
    b -= c.b;
    return *this;
}
Complex& Complex::operator*(Complex &c){
    double temp = a*(c.a)-b*(c.b);
    b = b*(c.a)+a*(c.b);
    a = temp;
    return *this;
}
Complex& Complex::operator/(Complex &c){
    double temp = (a*(c.a)+b*(c.b))/((c.a)*(c.a)+(c.b)*(c.b));
    b = (b*(c.a)-a*(c.b))/((c.a)*(c.a)+(c.b)*(c.b));
    a = temp;
    return *this;
}
Complex& Complex::operator+=(Complex &c){
    this->operator+(c);
    return *this;
}
Complex& Complex::operator-=(Complex &c){
    this->operator-(c);
    return *this;
}
Complex& Complex::operator*=(Complex &c){
    this->operator*(c);
    return *this;
}
Complex& Complex::operator/=(Complex &c){
    this->operator/(c);
    return *this;
}
double Complex::operator[](int i){
    if (i==0){
        return a;
    }
    if (i==1){
        return b;
    }
    return NULL;
}
ostream& operator<<(ostream& os, Complex& c){
    os << c.toString();
    return os;
}
/*
istream& operator>>(istream& is, Complex& c){
    is >> c.toString();
    return is;
}
*/









