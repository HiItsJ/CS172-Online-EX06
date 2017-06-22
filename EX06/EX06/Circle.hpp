//
//  Circle.hpp
//  EX06
//
//  Created by Josiah on 6/21/17.
//  Copyright © 2017 Josiah. All rights reserved.
//

#ifndef Circle_hpp
#define Circle_hpp

#include <stdio.h>

class Circle{
public:
    Circle();
    Circle(double);
    double getArea() const;
    double getRadius() const;
    void setRadius(double);
    static int getNumberOfObjects();
    bool operator<(Circle& circle);
    bool operator<=(Circle& circle);
    bool operator==(Circle& circle);
    bool operator!=(Circle& circle);
    bool operator>(Circle& circle);
    bool operator>=(Circle& circle);
    
private:
    double radius;
    static int numberOfObjects;
};

#endif /* Circle_hpp */
