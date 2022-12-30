// Морозов Евгений П3Э билет № 11
// Задание № 11.2.2 

#include <iostream>
#include <cmath>
#include <stdio.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	double B, X;
	std::cout << "Введите B  - ";
	std::cin >> B;
	std::cout << "Введите X  - ";
	std::cin >> X;
	long double  a = ((B + X) + (B + X) + (B + X));
	long double  c = log(B);
	long double  corenia = sqrt(a);
	long double  y = (c * c + corenia);
	std::cout << "A - " << a << std::endl;
	std::cout << "C  - " << c << std::endl;
	std::cout << "Y  - " << y << std::endl;
}