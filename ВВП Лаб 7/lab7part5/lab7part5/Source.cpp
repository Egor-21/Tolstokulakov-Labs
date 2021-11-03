#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	float a, b, x; // создаЄм переменные
	cout << "A = "; // ввод переменных A и B
	cin >> a;
	cout << "B = ";
	cin >> b;
	cout << a << " * x " << "+ " << b << " = " << "0" << endl; // выводим на экран уравнение
	if (a != 0) // случай когда уравнение  имеет решение
	{
		x = (-b) / a; // находим X
		cout << "X = " << x << endl; // выводим X на экран
	}
	if (a == 0) // случай когда уравнение не имеет решени€
	{
		cout << "Ќет решений" << endl; // выводим сообщение
	}
}