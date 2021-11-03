#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	float p,gradus,rad; // создаём переменные
	p = 3.14; // число пи
	cout << "Угол в градусах: "; // ввод значения угла в градусах
	cin >> gradus;
	rad = gradus * p / 180; // находим значение этого угла в радианах
	cout << "В радианах = " << rad << endl; // вывод на экран значение угла в радианах
	return 0;


}