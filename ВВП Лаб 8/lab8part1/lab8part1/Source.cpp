#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int b, k;
	cout << "������ � ������: ";
	cin >> b;
	k = b / 1024;
	cout << "������ ����������� ��������� = " << k << endl;

}