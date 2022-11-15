//
// Created by 25952 on 2022/11/9.
//

#ifndef EXO_1_CUBE_H
#define EXO_1_CUBE_H
#include "Container.h"

class Cube: public Container {
public:
    Cube(double radius);
    double getVolume() override;
    double getArea() override;
};


#endif //EXO_1_CUBE_H
