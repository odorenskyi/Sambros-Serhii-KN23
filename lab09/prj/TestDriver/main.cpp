#include <iostream>
#include <string>
#include <locale.h>
#include "ModulesSambros.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "ukr");
    double waveHeight;
    cout << "������ ����i � ������: ";
    cin >> waveHeight;

    string grade = WaveGrade(waveHeight);
    cout << "��� ���������� ����: " << grade << endl;

    // 9.2
    double fahrenheit, celsius;

    cout << "����������� � �����������: ";
    cin >> fahrenheit;

    celsius = FahrenheitToCelsius(fahrenheit);

    cout << "����������� � �������� �����i�: " << celsius << endl;

    // 9.3
    unsigned short N;

    cout << "����� N (�i� 0 �� 65535): ";
    cin >> N;

    string result = NumberBits(N);
    cout << result << endl;

    return 0;
}
