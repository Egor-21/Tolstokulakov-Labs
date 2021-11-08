#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int a, b, rez;
	cout << "a = "; // ввод длины отрезка a
	cin >> a; 
	cout << "b = "; // ввод длины отрезка b
	cin >> b;
	if (a >= b)
	{
		rez = a / b; // находим кол-во отрезков B, размещённых на отрезке А
		cout << "Кол-во отрезков B, размещённых на отрезке А: " << rez << endl; // вывод результата 
	}
	if (a < b) // случай если a < b
	{
		cout << "A < B" << endl; // выводим сообщение
	}
	


}