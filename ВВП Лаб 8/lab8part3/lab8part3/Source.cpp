#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int a, b, nez, n;
	cout << "A = "; // ���� ����� ������� A
	cin >> a; 
	cout << "B = "; // ���� ����� ������� B
	cin >> b;
	if (a >= b) 
	{
		n = a / b; // ������� ���-�� �������� B, ������� ���������� � ������� A
		nez = a - (b * n); // ������� ��������� ����� ������� A
		cout << "��������� ����� = " << nez << endl; // ����� ��������� ����� ������� A
	}
	if (a < b) // ������ ���� a < b
	{
		cout << "a < b" << endl; // ����� ���������
	}
}

