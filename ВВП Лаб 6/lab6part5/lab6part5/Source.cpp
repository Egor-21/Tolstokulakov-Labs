#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int x, y; // ������ ���������� ��� x � y
	cout << "x = ";
	cin >> x; // ���� x
	y = (4 * (pow(x - 3, 6))) - (7 * (pow(x - 3, 3))) + 2; // ������� y
	cout << "y = " << y << endl; // ����� y
	return 0;
}
