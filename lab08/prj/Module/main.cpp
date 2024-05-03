#include <iostream>
#include <locale>
#include <fstream>
#include "ModulesSambros.h"

using namespace std;
int main() {
    setlocale(LC_ALL, "ukr");

    double x, y, z;

    cout << "x: ";
    cin >> x;

    cout << "y: ";
    cin >> y;

    cout << "z: ";
    cin >> z;

    double result = s_calculation(x, y, z);
    std::cout << "Result: " << result << endl;

// 9
    double waveHeight;
    cout << "¬вед≥ть висоту хвил≥: ";
    cin >> waveHeight;
    string waveGrade = WaveGrade(waveHeight);
    cout << "’вилюванн€ мор€: " << waveGrade << endl;

    double fahrenheit;
    cout << "¬вед≥ть температуру у ‘аренгейтах: ";
    cin >> fahrenheit;
    double celsius = FahrenheitToCelsius(fahrenheit);
    cout << "√радус≥в ÷ельс≥€:" << celsius << endl;

    unsigned short number;
    cout << "¬вед≥ть число: ";
    cin >> number;
    string bitsInfo = NumberBits(number);
    cout << bitsInfo << endl;

// 10
    ofstream fout1("devinfo.txt", ios::app);
    Devinfos(fout1);
    fout1.close();

    string filename = "input.txt";
    ofstream fout2(filename, ios::app);
    InputFile(filename, fout2);
    fout2.close();

    ofstream fout3("output.txt");
    BinaryCode(fout3);
    fout3.close();

    return 0;
}
