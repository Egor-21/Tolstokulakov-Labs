#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int x, y; // создаём переменные x и y
	cout << "x = ";
	cin >> x; //ввод x
	y = (3 * (pow(x, 6))) - (6 * (pow(x, 2))) - 7; // находим y 
	cout << "y = " << y << endl; //  вывод y
	return 0;
}
