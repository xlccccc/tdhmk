//
// Created by 25952 on 2022/11/9.
//

#ifndef EXO_1_CONTAINER_H
#define EXO_1_CONTAINER_H
#define M_PI 3.14

class Container {
protected:
    double radius;
public:
    Container(double radius);
    virtual double getVolume();
    virtual double getArea();
};


#endif //EXO_1_CONTAINER_H
