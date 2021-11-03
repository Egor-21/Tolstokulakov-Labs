#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	float rad, grad; // создаём переменные для угла в радианах и угла в градусах
	cout << "В радианах: "; // вводим значение угла в радианах
	cin >> rad;
	grad = rad * 180 / 3.14; // находим этот угол в градусах
	cout << "В градусах = " << grad << endl; // вывод на экран значения угла в градусах
	return 0;

}