#include <iostream>
using namespace std;
int main()
{
	int a, b, c; // ������ ����������  a,b � ��������������� ���������� c
	cout << "a = "; 
	cin >> a; // ���� ���������� a
	cout << "b = ";
	cin >> b; // ���� ���������� b
	c = a; // ��������� �������� a � ���������� c 
	a = b; // ����������� ���������� a �������� b
	b = c; // ����������� ���������� b �������� �(a)
	cout << "a = " << a << endl; // ����� ������ �������� a
	cout << "b = " << b << endl; // ����� ����� �������� b
}
	