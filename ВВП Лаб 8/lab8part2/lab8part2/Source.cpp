#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int a, b, rez;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	if (a >= b)
	{
		rez = a / b;
		cout << "Кол-во отрезков B, размещённых на отрезке А: " << rez << endl;
	}
	if (a < b)
	{
		cout << "A < B" << endl;
	}
	


}