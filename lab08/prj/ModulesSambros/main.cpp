#include <iostream>
#include <cmath>
#include "ModulesSambros.h"
#include <string>

using namespace std;

double s_calculation(double x, double y, double z) {
    double numerator = sqrt(1 + x - 3*cos(x));
    double denominator = x*x + sin(M_PI * x);
    double result = sqrt(z) - numerator / denominator;
    return result;
}


string WaveGrade(double waveHeight) {
    if (waveHeight == 0) {
        return "calm-glassy";
    } else if (waveHeight <= 0.1) {
        return "calm_rippled";
    } else if (waveHeight <= 0.5) {
        return "smooth-wavelet";
    } else if (waveHeight <= 1.25) {
        return "slight";
    } else if (waveHeight <= 2.5) {
        return "moderate";
    } else if (waveHeight <= 4.0) {
        return "rough";
    } else if (waveHeight <= 6.0) {
        return "very rough";
    } else if (waveHeight <= 9.0) {
        return "high";
    } else if (waveHeight <= 14.0) {
        return "very high";
    } else {
        return "phenometal";
    }
}

double FahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

string NumberBits(unsigned short number) {
    int Zero = 0;
    int One = 0;
    unsigned short temp = number;
    for (int i = 0; i < 16; ++i) {
        if (number & 0x1) {
            One++;
        } else {
            Zero++;
        }
        number >>= 1;
    }

    return (temp & 0x1) ? "рядок одиниць: " + to_string(One)
                        : "рядок нулiв: " + to_string(Zero);
}
