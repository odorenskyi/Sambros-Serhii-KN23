#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
#include <ctime>
#include "ModulesSambros.h"

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


void Devinfos(ofstream& fout) {
    fout << "==================================================" << endl;
    fout << "Ім'я розробника: Самброс Сергій" << endl;
    fout << "Установа/організація: Центральноукраїнський національний технічний університет" << endl;
    fout << "Місто, країна: Кропивницький, Україна" << endl;
    fout << "Рік розробки: 2024" << endl;
    fout << "==================================================" << endl;
}

void InputFile(const string& inputFilename, ofstream& fout) {
    ifstream input(inputFilename);

    string text;
    getline(input, text);
    cout << "Кількість символів у вхідному файлі: " << text.size() << endl;

    time_t now = time(0);
    tm* ltm = localtime(&now);
    ofstream appendFile(inputFilename, ios::app);

    int digitCount = 0;
    for (char c : text) {
        if (isdigit(c)) {
            digitCount++;
        }
    }
    appendFile << "\nКількість цифр у файлі: " << digitCount << endl;
    appendFile << "Дата та час дозапису: " << ltm->tm_mday << "/" << 1 + ltm->tm_mon << "/" << 1900 + ltm->tm_year << " "
               << ltm->tm_hour << ":" << ltm->tm_min << ":" << ltm->tm_sec << endl;

    input.close();
    appendFile.close();
}

void BinaryCode(ofstream& fout) {
    double x, y, z;
    unsigned int b;

    cout << "Введіть значення x, y, z: ";
    cin >> x >> y >> z;
    cout << "Введіть число b: ";
    cin >> b;

    string binary = "";
    if (b == 0) {
        binary = "0";
    } else {
        while (b > 0) {
            binary = to_string(b % 2) + binary;
            b /= 2;
        }
    }
    fout << "Результат обчислення s_calculation: " << (x + y) * z << endl;
    fout << "Число b у двійковому коді: " << binary << endl;
}
