#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int year, vek;
	cout << "������� ���: " << endl;
	cin >> year;
	if (year % 10 != 0)  // ������ ����� ��� �� ������������ �� ���� � ����� ��������� ������ ����� ����� ����� ��������(2001)
	{
		vek = (year / 100) + 1;
		cout << vek << " " << "���" << endl;
	}
	if ((year % 10 == 0) and (year % 100) / 10 == 0) // ������ ����� ��� ������������ �� 00
	{
		vek = year / 100;
		cout << vek << " " << "���" << endl;
	}
	if ((year % 10 == 0) and (year % 100) / 10 != 0) // ������ ����� ��� ������������ �� X0 �������� 2020
	{
		vek = (year / 100) + 1;
		cout << vek << " " << "���" << endl;

	}
}