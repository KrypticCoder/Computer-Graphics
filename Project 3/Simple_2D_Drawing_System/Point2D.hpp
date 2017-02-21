//
//  Point2D.h
//  Simple_2D_Drawing_System
//
//  Created by Dimitar Vasilev on 2/20/17.
//
//

#ifndef Point2D_h
#define Point2D_h
#include "Color.hpp"
#include "Point.hpp"
struct Point2D{
    float a = 0;
    float b = 0;
    Color color;
    
    Point2D(float a, float b, Color color=Color()) : a(a), b(b), color(color) {}

    Point2D(){}
    
    
    bool operator<(const Point2D &right) const
    {
        return this->a != right.a || this->b != right.b;
    }
};


#endif /* Point2D_h */
