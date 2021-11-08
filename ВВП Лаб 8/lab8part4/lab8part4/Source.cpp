#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int a,b,c;
	cout << "¬ведите двузначное число: "; // ввод двузначного числа
	cin >> a;
	b = a / 10; // находим первую цифру числа
	c = a % 10; // находим вторую цифру числа
	cout << c << b << endl; // мен€ем цифры местами и выводим на экран новое число

}