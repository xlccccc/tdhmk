//
// Created by 25952 on 2022/11/9.
//

#ifndef EXO_1_SPHERE_H
#define EXO_1_SPHERE_H
#include "Container.h"

class Sphere:public Container {
public:
    Sphere(double radius);
    double getVolume() override;
    double getArea() override;
};


#endif //EXO_1_SPHERE_H
