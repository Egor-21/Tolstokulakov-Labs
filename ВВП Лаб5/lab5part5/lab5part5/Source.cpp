#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	float x1, y1, x2, y2, x3, y3, a1, b1, a2, b2, a3, b3, s, storona1, storona2, storona3, p, pp; // ���������� ��� ���������, ������ ������������, ��� ������� � ���������, ��������������� ����������
	cout << "x1:"; // ���������� ������ ���������� x1 
	cin >> x1;  // ���� ���������� x1
	cout << "y1:";
	cin >> y1;
	cout << "x2:";
	cin >> x2;
	cout << "y2:";
	cin >> y2;
	cout << "x3:";
	cin >> x3;
	cout << "y3:";
	cin >> y3;
	a1 = abs(x1 - x2); // ������ ���. ��������, ����� ����� ������� ������������
	b1 = abs(y1 - y2);
	storona1 = sqrt(a1 * a1 + b1 * b1); // ������� ������� ������������
	a2 = abs(x2 - x3);
	b2 = abs(y2 - y3);
	storona2 = sqrt(a2 * a2 + b2 * b2); // ������� ������� ������������
	a3 = abs(x1 - x3);
	b3 = abs(y1 - y3);
	storona3 = sqrt(a3 * a3 + b3 * b3); // ������� ������� ������������
	p = storona1 + storona2 + storona3; // ������� �������� ������������
	pp = p / 2; // ������� �������� ���������
	s = sqrt(pp * (pp - storona1) * (pp - storona2) * (pp - storona3)); // � ������� ������� ������� ������� ������� ������������
	cout << "�������� ������������: " << p << endl; // ����� �� ����� ��������
	cout << "������� ������������: " << s << endl; // ����� �� ����� ������� ������������
	return 0;
}

	




	