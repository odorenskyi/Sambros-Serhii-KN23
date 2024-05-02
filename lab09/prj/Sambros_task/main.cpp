#include <iostream>
#include <string>
#include <locale.h>
#include "ModulesSambros.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "ukr");

    char choice;
    double x, y, z;
    double waveHeight, fahrenheit;
    unsigned short N;

    do {
        cout << "����i�� 'j' - s_calculation(), 'z' - 9.1, 'x' - 9.2, 'c' - 9.3: ";
        cin >> choice;

        switch(choice) {
            case 'j':
                cout << "������ �������� x, y, z: ";
                cin >> x >> y >> z;
                cout << "��������� ���������� s_calculation(): " << s_calculation(x, y, z) << endl;
                break;
            case 'z':
                cout << "������ ������ ���� � ������: ";
                cin >> waveHeight;
                cout << "��� ���������� ����: " << WaveGrade(waveHeight) << endl;
                break;
            case 'x':
                cout << "������ ����������� � �����������: ";
                cin >> fahrenheit;
                cout << "����������� � �������� ������: " << FahrenheitToCelsius(fahrenheit) << endl;
                break;
            case 'c':
                cout << "������ ����� N (�� 0 �� 65535): ";
                cin >> N;
                cout << NumberBits(N) << endl;
                break;
            case 'v':
            case 'V':
            case 'A':
                return 0;
        }
    } while (true);

    return 0;
}
