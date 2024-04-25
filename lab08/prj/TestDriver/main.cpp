#include <iostream>
#include "ModulesSambros.h"

int main() {
    double x, y, z;

    std::cout << "x: ";
    std::cin >> x;

    std::cout << "y: ";
    std::cin >> y;

    std::cout << "z: ";
    std::cin >> z;

    double result = s_calculation(x, y, z);
    std::cout << "Result: " << result << std::endl;

    return 0;
}
