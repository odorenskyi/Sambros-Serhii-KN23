#include <iostream>
#include <cmath>
#include "ModulesSambros.h"

int evaluateExpression(double a, double b) {
    return (a + 7 < std::abs(b - 5)) ? 1 : 0;
}

void DevName() {
    system("chcp 1251");
    std::cout << "-----------------\n"
              << "|                |\n"
              << "|Sambros Serhii ©|\n"
              << "|                |\n"
              << "-----------------\n";
}

void Results(double x, double y, double z, double a, double b) {
    DevName();

    std::cout << "–езультат виразу a+7 < |b-5|: " << evaluateExpression(a, b) << std::endl;

    std::cout << "«наченн€ x, y, z в дес€тков≥й систем≥: " << x << ", " << y << ", " << z << std::endl;

    std::cout << "«наченн€ x, y, z в ш≥стнадц€тков≥й систем≥: " << std::hexfloat << x << ", " << y << ", " << z << std::defaultfloat << std::endl;


    double S = s_calculation(x, y, z);
    std::cout << "«наченн€ S: " << S << std::endl;
}

int main() {

    double x, y, z, a, b;
    std::cout << "x, y, z: ";
    std::cin >> x >> y >> z;
    std::cout << "a and b: ";
    std::cin >> a >> b;

    Results(x, y, z, a, b);

    return 0;
}
