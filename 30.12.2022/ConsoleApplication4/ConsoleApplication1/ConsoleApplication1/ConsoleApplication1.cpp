// Морозов Евгений П3Э билет № 11
// Задание № 11.1.2

#include <iostream>
#include <cmath>
#include <stdio.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    double y, n;
	std::cout << "Введите Y  - ";
	std::cin >> y;
	std::cout << "Введите N  - ";
	std::cin >> n;
	long double  sinY = sin(y);
	long double  D = y * y + ((0.5 * n + 4.8)/sinY) ;
	std::cout << "D - " << D << std::endl;
}