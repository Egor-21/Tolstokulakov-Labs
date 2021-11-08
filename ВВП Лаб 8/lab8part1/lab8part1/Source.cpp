#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int b, k;
	cout << "Размер в байтах: "; // ввод размера в байтах
	cin >> b;
	k = b / 1024; // находим полное кол-во килобайт
	cout << "Полное колличество киллобайт = " << k << endl; // вывод результата на экран

}