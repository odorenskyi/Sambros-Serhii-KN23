#ifndef MODULESSAMBROS_H_INCLUDED
#define MODULESSAMBROS_H_INCLUDED
#include <string>

// 8
double s_calculation(double x, double y, double z);

// 9
std::string WaveGrade(double waveHeight);

double FahrenheitToCelsius(double fahrenheit);

std::string NumberBits(unsigned short number);

// 10
void Devinfos(std::ofstream& fout);

void InputFile(const std::string& inputFilename, std::ofstream& fout);

void BinaryCode(std::ofstream& fout);

#endif // MODULESSAMBROS_H_INCLUDED
