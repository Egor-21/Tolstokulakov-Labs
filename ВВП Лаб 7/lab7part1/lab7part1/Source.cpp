#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	float p,gradus,rad; // ������ ����������
	p = 3.14; // ����� ��
	cout << "���� � ��������: "; // ���� �������� ���� � ��������
	cin >> gradus;
	rad = gradus * p / 180; // ������� �������� ����� ���� � ��������
	cout << "� �������� = " << rad << endl; // ����� �� ����� �������� ���� � ��������
	return 0;


}