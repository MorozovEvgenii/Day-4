// Морозов Евгений , Билет номер 11.
// Задача № 11.2.1

#include <iostream>
#include <cmath>

int main()
{	
	setlocale(LC_ALL, "Russian");
	double R;
	std::cout << "Введите R круга - ";
	std::cin >> R;
	long double  resultP = ( 2 * 3.14 * R);
	long double  resultS = (3.14 * R * 3.14* R);
	std::cout << "P круга - " << resultP << std::endl;
	std::cout << "S круга - " << resultS << std::endl;
}