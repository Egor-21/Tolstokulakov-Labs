#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int n;
	cout << "����� ���: ";
	cin >> n;
	if ((n % 7 == 0) and (n > 6))
	{
		cout << "�����������(0)" << endl;
	}
	if ((n % 7 == 1) and (n > 6))
	{
		cout << "�����������(1)" << endl;
	}
	if ((n % 7 == 2) and (n > 6))
	{
		cout << "�������(2)" << endl;
	}
	if ((n % 7 == 3) and (n > 6))
	{
		cout << "�����(3)" << endl;
	}
	if ((n % 7 == 4) and (n > 6))
	{
		cout << "�������(4)" << endl;
	}
	if ((n % 7 == 5) and (n > 6))
	{
		cout << "�������(5)" << endl;
	}
	if ((n % 7 == 6) and (n > 6))
	{
		cout << "�������(6)" << endl;
	}
	if (n == 0)
	{
		cout << "�����������" << endl;
	}
	if (n == 1)
	{
		cout << "�����������" << endl;
	}
	if (n == 2)
	{
		cout << "�������" << endl;
	}
	if (n == 3)
	{
		cout << "�����" << endl;
	}
	if (n == 4)
	{
		cout << "�������" << endl;
	}
	if (n == 5)
	{
		cout << "�������" << endl;
	}
	if (n == 6)
	{
		cout << "�������" << endl;
	}

}