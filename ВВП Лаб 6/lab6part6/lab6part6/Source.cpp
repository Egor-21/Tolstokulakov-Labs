#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int a, b; // ������ ���������� � � ��������������� ��������� b
	cout << "a = "; 
	cin >> a; // ���� a
	b = pow(a, 5); // ����������� b �������� a � 5-�� �������
	a = b * a * a * a; // ������� a � 8-�� �������
	cout << a << endl; // ����� a � 8-�� �������
	return 0;
}