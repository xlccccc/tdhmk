//
// Created by 25952 on 2022/11/9.
//

#include "Cube.h"

Cube::Cube(double radius) : Container(radius) {}

double Cube::getArea() {
    return 6.0 * radius * radius;
}

double Cube::getVolume() {
    return radius * radius * radius;
}