#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int n;
	cout << "Номер дня: ";
	cin >> n;
	if ((n % 7 == 0) and (n > 6))
	{
		cout << "Воскресенье(0)" << endl;
	}
	if ((n % 7 == 1) and (n > 6))
	{
		cout << "Понедельник(1)" << endl;
	}
	if ((n % 7 == 2) and (n > 6))
	{
		cout << "Вторник(2)" << endl;
	}
	if ((n % 7 == 3) and (n > 6))
	{
		cout << "Среда(3)" << endl;
	}
	if ((n % 7 == 4) and (n > 6))
	{
		cout << "Четверг(4)" << endl;
	}
	if ((n % 7 == 5) and (n > 6))
	{
		cout << "Пятница(5)" << endl;
	}
	if ((n % 7 == 6) and (n > 6))
	{
		cout << "Суббота(6)" << endl;
	}
	if (n == 0)
	{
		cout << "Воскресенье" << endl;
	}
	if (n == 1)
	{
		cout << "Понедельник" << endl;
	}
	if (n == 2)
	{
		cout << "Вторник" << endl;
	}
	if (n == 3)
	{
		cout << "Среда" << endl;
	}
	if (n == 4)
	{
		cout << "Четверг" << endl;
	}
	if (n == 5)
	{
		cout << "Пятница" << endl;
	}
	if (n == 6)
	{
		cout << "Суббота" << endl;
	}

}