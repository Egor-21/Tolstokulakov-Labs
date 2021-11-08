#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int a, b, nez, n;
	cout << "A = "; // ввод длины отрезка A
	cin >> a; 
	cout << "B = "; // ввод длины отрезка B
	cin >> b;
	if (a >= b) 
	{
		n = a / b; // находим кол-во отрезков B, которые помещаются в отрезке A
		nez = a - (b * n); // находим незанятую часть отрезка A
		cout << "Незанятая часть = " << nez << endl; // вывод незанятой части отрезка A
	}
	if (a < b) // случай если a < b
	{
		cout << "a < b" << endl; // вывод сообщения
	}
}

