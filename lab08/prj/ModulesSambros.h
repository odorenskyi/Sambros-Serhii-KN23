#ifndef MODULESSAMBROS_H_INCLUDED
#define MODULESSAMBROS_H_INCLUDED
#include <string>
using namespace std;

double s_calculation(double x, double y, double z);

string WaveGrade(double waveHeight);

double FahrenheitToCelsius(double fahrenheit);

string NumberBits(unsigned short number);

void Devinfos();

void InputFile(const std::string& inputFilename);
#endif // MODULESSAMBROS_H_INCLUDED

