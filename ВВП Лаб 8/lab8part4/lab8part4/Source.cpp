#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int a,b,c;
	cout << "������� ���������� �����: "; // ���� ����������� �����
	cin >> a;
	b = a / 10; // ������� ������ ����� �����
	c = a % 10; // ������� ������ ����� �����
	cout << c << b << endl; // ������ ����� ������� � ������� �� ����� ����� �����

}