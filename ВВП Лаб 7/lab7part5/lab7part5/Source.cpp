#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	float a, b, x; // ������ ����������
	cout << "A = "; // ���� ���������� A � B
	cin >> a;
	cout << "B = ";
	cin >> b;
	cout << a << " * x " << "+ " << b << " = " << "0" << endl; // ������� �� ����� ���������
	if (a != 0) // ������ ����� ���������  ����� �������
	{
		x = (-b) / a; // ������� X
		cout << "X = " << x << endl; // ������� X �� �����
	}
	if (a == 0) // ������ ����� ��������� �� ����� �������
	{
		cout << "��� �������" << endl; // ������� ���������
	}
}