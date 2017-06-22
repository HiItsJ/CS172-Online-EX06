//
//  Circle.cpp
//  EX06
//
//  Created by Josiah on 6/21/17.
//  Copyright © 2017 Josiah. All rights reserved.
//

#include "Circle.hpp"

int Circle::numberOfObjects = 0;

Circle::Circle(){
    radius = 1;
    numberOfObjects++;
}
Circle::Circle(double newRadius){
    radius = newRadius;
    numberOfObjects++;
}
double Circle::getArea() const {
    return radius*radius*3.14159;
}
double Circle::getRadius() const {
    return radius;
}
void Circle::setRadius(double newRadius){
    radius = (newRadius >= 0) ? newRadius : 0;
}
int Circle::getNumberOfObjects(){
    return numberOfObjects;
}
bool Circle::operator<(Circle &circle){
    if (radius<circle.radius){
        return true;
    }
    return false;
}
bool Circle::operator<=(Circle &circle){
    if (radius<=circle.radius){
        return true;
    }
    return false;
}
bool Circle::operator==(Circle &circle){
    if (radius==circle.radius){
        return true;
    }
    return false;
}
bool Circle::operator!=(Circle &circle){
    if (radius!=circle.radius){
        return true;
    }
    return false;
}
bool Circle::operator>(Circle &circle){
    if (radius>circle.radius){
        return true;
    }
    return false;
}
bool Circle::operator>=(Circle &circle){
    if (radius>=circle.radius){
        return true;
    }
    return false;
}
