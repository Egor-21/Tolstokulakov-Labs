#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int a, b, rez;
	cout << "a = "; // ���� ����� ������� a
	cin >> a; 
	cout << "b = "; // ���� ����� ������� b
	cin >> b;
	if (a >= b)
	{
		rez = a / b; // ������� ���-�� �������� B, ����������� �� ������� �
		cout << "���-�� �������� B, ����������� �� ������� �: " << rez << endl; // ����� ���������� 
	}
	if (a < b) // ������ ���� a < b
	{
		cout << "A < B" << endl; // ������� ���������
	}
	


}