#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int year, vek;
	cout << "Введите год: " << endl;
	cin >> year;
	if (year % 10 != 0)  // случай когда год не оканчивается на ноль и перед последним числом стоит любое число например(2001)
	{
		vek = (year / 100) + 1;
		cout << vek << " " << "век" << endl;
	}
	if ((year % 10 == 0) and (year % 100) / 10 == 0) // случай когда год оканчивается на 00
	{
		vek = year / 100;
		cout << vek << " " << "век" << endl;
	}
	if ((year % 10 == 0) and (year % 100) / 10 != 0) // случай когда год оканчивается на X0 например 2020
	{
		vek = (year / 100) + 1;
		cout << vek << " " << "век" << endl;

	}
}