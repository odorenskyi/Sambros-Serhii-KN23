#include <iostream>
#include <string>
#include <locale.h>
#include "ModulesSambros.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "ukr");
    double waveHeight;
    cout << "Висота хвилi у метрах: ";
    cin >> waveHeight;

    string grade = WaveGrade(waveHeight);
    cout << "Бал хвилювання моря: " << grade << endl;

    // 9.2
    double fahrenheit, celsius;

    cout << "Температура у Фаренгейтах: ";
    cin >> fahrenheit;

    celsius = FahrenheitToCelsius(fahrenheit);

    cout << "Температура у градусах Цельсiя: " << celsius << endl;

    // 9.3
    unsigned short N;

    cout << "Число N (вiд 0 до 65535): ";
    cin >> N;

    string result = NumberBits(N);
    cout << result << endl;

    return 0;
}
