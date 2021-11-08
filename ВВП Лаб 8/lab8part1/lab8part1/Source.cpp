#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int b, k;
	cout << "Размер в байтах: ";
	cin >> b;
	k = b / 1024;
	cout << "Полное колличество киллобайт = " << k << endl;

}