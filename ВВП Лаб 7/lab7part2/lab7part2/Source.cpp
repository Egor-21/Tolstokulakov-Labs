#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	float rad, grad; // ������ ���������� ��� ���� � �������� � ���� � ��������
	cout << "� ��������: "; // ������ �������� ���� � ��������
	cin >> rad;
	grad = rad * 180 / 3.14; // ������� ���� ���� � ��������
	cout << "� �������� = " << grad << endl; // ����� �� ����� �������� ���� � ��������
	return 0;

}