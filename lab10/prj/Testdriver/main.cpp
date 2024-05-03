#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "ukr");

    ofstream fout("output.txt");
    if (!fout.is_open()) {
        cerr << "Не вдалося відкрити вихідний файл." << endl;
        return 1;
    }

    fout << "==================================================" << endl;
    fout << "Ім'я розробника: Самброс Сергій" << endl;
    fout << "Установа/організація: Центральноукраїнський національний технічний університет" << endl;
    fout << "Місто, країна: Кропивницький, Україна" << endl;
    fout << "Рік розробки: 2024" << endl;
    fout << "==================================================" << endl;

    ifstream input("input.txt");
    if (!input.is_open()) {
        cerr << "Не вдалося відкрити вхідний файл." << endl;
        return 1;
    }

    string text;
    getline(input, text);
    fout << "Кількість символів у вхідному файлі: " << text.size() << endl;

    time_t now = time(0);
    tm* ltm = localtime(&now);
    ofstream appendFile("input.txt", ios::app);
    if (!appendFile.is_open()) {
        cerr << "Не вдалося відкрити файл." << endl;
        return 1;
    }

    int digitCount = 0;
    for (char c : text) {
        if (isdigit(c)) {
            digitCount++;
        }
    }
    appendFile << "\nКількість цифр у файлі: " << digitCount << endl;
    appendFile << "Дата та час дозапису: " << ltm->tm_mday << "/" << 1 + ltm->tm_mon << "/" << 1900 + ltm->tm_year << " "
               << ltm->tm_hour << ":" << ltm->tm_min << ":" << ltm->tm_sec << endl;

    string words[] = {"модуль", "програма", "студент", "програміст"};
    for (const string& word : words) {
        int count = 0;
        size_t pos = text.find(word, 0);
        while (pos != string::npos) {
            count++;
            pos = text.find(word, pos + 1);
        }
        fout << "Слів \"" << word << "\" у тексті: " << count << endl;
    }

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

    fout.close();
    appendFile.close();
    input.close();

    return 0;
}
