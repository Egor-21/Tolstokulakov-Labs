#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int x, y; // ������ ���������� x � y
	cout << "x = ";
	cin >> x; //���� x
	y = (3 * (pow(x, 6))) - (6 * (pow(x, 2))) - 7; // ������� y 
	cout << "y = " << y << endl; //  ����� y
	return 0;
}
