#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int a, b; // создаём переменную а и вспомогательную перменную b
	cout << "a = "; 
	cin >> a; // ввод a
	b = pow(a, 5); // присваиваем b значение a в 5-ой степени
	a = b * a * a * a; // находим a в 8-ой степени
	cout << a << endl; // вывод a в 8-ой степени
	return 0;
}