#include <iostream>
using namespace std;
int main()
{
	int a, b, c, r; // ������ ���������� a,b,c � ��������������� r
	cout << "a = ";
	cin >> a; // ���� a
	cout << "b = ";
	cin >> b; // ���� b
	cout << "c = ";
	cin >> c; // ���� �
	r = b; // ��������� �������� b � ���������� r
	b = a; // ��������� b ����������� �������� a
	a = c; // ���������� a ����������� �������� �
	c = r; // ����������� ���������� � �������� r(b)
	cout << "a = " << a << endl; // ����� ������ a
	cout << "b = " << b << endl; // ����� ������ b
	cout << "c = " << c << endl; // ����� ������ c
	return 0;
}

