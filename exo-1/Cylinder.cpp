//
// Created by 25952 on 2022/11/9.
//

#include "Cylinder.h"

Cylinder::Cylinder(double radius, double height): Container(radius) {
    this->height = height;
}

double Cylinder::getArea() {
    return 2 * M_PI * radius * height + 2 * M_PI * radius * radius;
}

double Cylinder::getVolume() {
    return M_PI * radius * radius * height;
}