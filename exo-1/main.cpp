#include <iostream>
#include <vector>
#include "Sphere.h"
#include "Cylinder.h"
#include "Cube.h"
#include "Container.h"
using namespace std;


int main() {
    vector<Container*> containers;
    containers.push_back(new Sphere(1));
    containers.push_back(new Cylinder(1, 1));
    containers.push_back(new Cube(1));
    for (int i = 0; i < containers.size(); i++) {
        cout << containers[i]->getVolume() << endl;
        cout << containers[i]->getArea() << endl;
    }
    cout<<endl;
    return 0;
}
