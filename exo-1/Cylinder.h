//
// Created by 25952 on 2022/11/9.
//

#ifndef EXO_1_CYLINDER_H
#define EXO_1_CYLINDER_H
#include "Container.h"

class Cylinder: public Container {
private:
    double height;
public:
    Cylinder(double radius, double height);
    double getVolume();
    double getArea();
};


#endif //EXO_1_CYLINDER_H
