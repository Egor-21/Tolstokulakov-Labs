#include <iostream>
using namespace std;
int main()
{
	int a, b, c, f; // ������ ���������� a,b,c � ��������������� ���������� f  
	cout << "a = "; 
	cin >> a; // ���� a
	cout << "b = ";
	cin >> b; // ���� b
	cout << "c = ";
	cin >> c; // ���� �
	f = a; // ��������� �������� a � ���������� f
	a = b; // ����������� a �������� b
	b = c; // ����������� b �������� c 
	c = f; // ����������� � �������� f(a)
	cout << "a = " << a << endl; // ����� ������ a
	cout << "b = " << b << endl; // ����� ������ b
	cout << "c = " << c << endl; // ����� ������ c
	return 0;
}
	

	
	
	

	

