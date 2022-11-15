//
// Created by 25952 on 2022/11/9.
//

#include "Sphere.h"

//Maybe similar to super() in java?
Sphere::Sphere(double radius): Container(radius){}

double Sphere::getVolume() {
    return 4.0 / 3.0 * M_PI * radius * radius * radius;
}

double Sphere::getArea() {
    return 4.0 * M_PI * radius * radius;
}

