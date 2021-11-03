#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int a, x, y, s1, s2; // создаём переменные 
	cout << "X кг = "; // ввод X кг конфет
	cin >> x;
	cout << "Руб = "; // ввод цены за X кг конфет
	cin >> a;
	s1 = a / x; // находим сколько стоит 1кг конфет
	cout << "За один кг = " << s1 << " " << "рублей" << endl; // выводим на экран цену за 1кг 
	cout << "Y кг = "; // ввод Y кг конфет
	cin >> y;
	s2 = y * s1; // находим сколько стоит Y кг конфет
	cout << "Цена за Y кг: " << s2 << " " << "рублей" << endl; // выводим на экран цену за Y кг 
	return 0;
}




	
