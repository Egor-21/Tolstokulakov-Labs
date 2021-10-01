#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	float x1, y1, x2, y2, x3, y3, a1, b1, a2, b2, a3, b3, s, storona1, storona2, storona3, p, pp; // переменные для координат, сторон треугольника, его площади и периметра, вспомогательные переменные
	cout << "x1:"; // предлагаем ввести координату x1 
	cin >> x1;  // ввод координаты x1
	cout << "y1:";
	cin >> y1;
	cout << "x2:";
	cin >> x2;
	cout << "y2:";
	cin >> y2;
	cout << "x3:";
	cin >> x3;
	cout << "y3:";
	cin >> y3;
	a1 = abs(x1 - x2); // делаем доп. подсчёты, чтобы найти сторону треугольника
	b1 = abs(y1 - y2);
	storona1 = sqrt(a1 * a1 + b1 * b1); // находим сторону треугольника
	a2 = abs(x2 - x3);
	b2 = abs(y2 - y3);
	storona2 = sqrt(a2 * a2 + b2 * b2); // находим сторону треугольника
	a3 = abs(x1 - x3);
	b3 = abs(y1 - y3);
	storona3 = sqrt(a3 * a3 + b3 * b3); // находим сторону треугольника
	p = storona1 + storona2 + storona3; // находим периметр треугольника
	pp = p / 2; // находим половину периметра
	s = sqrt(pp * (pp - storona1) * (pp - storona2) * (pp - storona3)); // с помощью формулы Геррона находим площадь треугольника
	cout << "Периметр треугольника: " << p << endl; // вывод на экран периметр
	cout << "Площадь треугольника: " << s << endl; // вывод на экран площадь треугольника
	return 0;
}

	




	