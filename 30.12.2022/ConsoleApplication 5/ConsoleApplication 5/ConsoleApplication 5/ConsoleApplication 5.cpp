// Морозов Евгений П3Э билет № 11
// Задание № 11.1.1 

#include <iostream>
#include <cmath>
#include <stdio.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	double Y, X;
	std::cout << "Введите T  - ";
	std::cin >> Y;
	std::cout << "Введите X  - ";
	std::cin >> X;
	long double  tgX = tan(X);
	long double  stepenY = (Y * Y * Y * Y * Y * Y * Y);
	long double S = (9.756 * stepenY + 2 * tgX);
	std::cout << "S - " << S << std::endl;

}