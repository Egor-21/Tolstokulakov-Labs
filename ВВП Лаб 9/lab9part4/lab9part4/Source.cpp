#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int a, b, c, plpr, plkv, kolkv,svobod;
	cout << "Введите две стороны прямоугольника: " << endl; // ввод сторон прямоугольника
	cin >> a;
	cin >> b;
	cout << "Введите сторону квадрата: " << endl; // ввод стороны квадрата
	cin >> c; 
	plpr = a * b; // находим площадь прямоугольника
	plkv = c * c; // находим площадь квадрата
	kolkv = plpr / plkv; // находим сколько квадратов помещается в прямоугольник
	svobod = plpr - (kolkv * plkv); // находим не занятую площадь
	cout << "Кол-во квадартов в прямоугольнике: " << kolkv << endl; // вывод первого ответа
	cout << "Свободная площадь: " << svobod << endl; // вывод второго ответа
}