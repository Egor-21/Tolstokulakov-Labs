#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int a, b, nez, n;
	cout << "A = ";
	cin >> a;
	cout << "B = ";
	cin >> b;
	if (a >= b)
	{
		n = a / b;
		nez = a - (b * n);
		cout << "��������� ����� = " << nez << endl;
	}
	if (a < b)
	{
		cout << "a < b" << endl;
	}
}

