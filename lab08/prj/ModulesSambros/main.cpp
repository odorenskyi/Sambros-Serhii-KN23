#include <iostream>
#include <cmath>

double s_calculation(double x, double y, double z) {
    double numerator = sqrt(1 + x - 3*cos(x));
    double denominator = x*x + sin(M_PI * x);
    double result = sqrt(z) - numerator / denominator;
    return result;
}
