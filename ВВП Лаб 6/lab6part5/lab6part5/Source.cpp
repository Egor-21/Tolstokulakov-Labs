#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int x, y; // создаём переменные для x и y
	cout << "x = ";
	cin >> x; // ввод x
	y = (4 * (pow(x - 3, 6))) - (7 * (pow(x - 3, 3))) + 2; // находим y
	cout << "y = " << y << endl; // вывод y
	return 0;
}
