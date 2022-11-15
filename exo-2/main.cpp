#include <iostream>
#include "Matrix.h"

int main() {
    Matrix m1(2, 2);
    m1.randomPopulate();
    Matrix m2(2, 2);
    m2.randomPopulate();
    Matrix m3 = m1 + m2;
    std::cout << m1;
    std::cout << m2;
    std::cout << m3;
    std::cin >> m3;
    std::cout << m3;
    return 0;
}
