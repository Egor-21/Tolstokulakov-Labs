#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int a, x, y, s1, s2; // ������ ���������� 
	cout << "X �� = "; // ���� X �� ������
	cin >> x;
	cout << "��� = "; // ���� ���� �� X �� ������
	cin >> a;
	s1 = a / x; // ������� ������� ����� 1�� ������
	cout << "�� ���� �� = " << s1 << " " << "������" << endl; // ������� �� ����� ���� �� 1�� 
	cout << "Y �� = "; // ���� Y �� ������
	cin >> y;
	s2 = y * s1; // ������� ������� ����� Y �� ������
	cout << "���� �� Y ��: " << s2 << " " << "������" << endl; // ������� �� ����� ���� �� Y �� 
	return 0;
}




	
