// Морозов Евгений П3Э Билет № 11
//Задание № 11.1.3

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	setlocale(LC_ALL, "ru-RU");

	double x = 0.00;
	double y = 0.00;
	double e = 0.00;
	double I = 0.00;
	double A = 0.00;
	double B = 0.00;
	double o = cos(y);
	double s = sin(x);

	cout << "Задайте x = ";
	cin >> x;
	cout << "Задайте y = ";
	cin >> y;
	cout << "Задайте e = ";
	cin >> e;

	A = (2.33 * log(sqrt(1 + pow(o, 2))));
	B = (pow(e, y) + pow(s, 2));

	I = A / B;

	cout << "ответ = " << I << endl;
	system("pause");
	return 0;
}