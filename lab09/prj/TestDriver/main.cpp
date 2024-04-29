#include <iostream>
#include <string>
#include "ModulesSambros.h"

using namespace std;

int main() {
    double waveHeight;
    cout << "Enter wave height in meters: ";
    cin >> waveHeight;

    string grade = WaveGrade(waveHeight);
    cout << "Wave grade: " << grade << endl;

    // 9.2
    double fahrenheit, celsius;

    cout << "Enter temperature in fahrenheit: ";
    cin >> fahrenheit;

    celsius = FahrenheitToCelsius(fahrenheit);

    cout << "in celsius: " << celsius << endl;

    // 9.3
    unsigned short N;

    cout << "Enter a natural number N (0 to 65535): ";
    cin >> N;

    string result = NumberBits(N);
    cout << result << endl;

    return 0;
}
