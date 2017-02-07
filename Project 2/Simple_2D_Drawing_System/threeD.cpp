//
//  threeD.cpp
//  Simple_2D_Drawing_System
//
//  Created by Dimitar Vasilev on 2/5/17.
//
//

#include "threeD.hpp"
#include "Line.hpp"

threeD::threeD(std::vector<Point *>points){
    this->vertices = points;
    n = (int)vertices.size();
    id++;
    convertToMatrix();
}

// project onto xy plane
void threeD::drawXY(){
    
    for(auto i : edges){
        Line *line = new Line(i);
        float x1 = line->x1;
        float y1 = line->y1;
        float x2 = line->x2;
        float y2 = line->y2;
        
        // project onto xy plane
        line->lineBres(x1, y1, x2, y2, "xy");
        
    }

}

// project onto yz plane
void threeD::drawYZ(){
    for(auto i : edges){
        Line *line = new Line(i);
        float y1 = line->y1;
        float z1 = line->z1;
        float y2 = line->y2;
        float z2 = line->z2;
        
        
        // project onto yz plane
        line->lineDDA(y1, z1, y2, z2, "yz");
        

    }

}

// project onto xz plane
void threeD::drawXZ(){
    for(auto i : edges){
        Line *line = new Line(i);
        float x1 = line->x1;
        float z1 = line->z1;
        float x2 = line->x2;
        float z2 = line->z2;
        
        // project onto xz plane
        line->lineDDA(x1, z1, x2, z2, "xz");
    }

}


void threeD::draw(){
    
}
int threeD::clip(){
    return 1;
}
void threeD::updateParameters(){
    
}
