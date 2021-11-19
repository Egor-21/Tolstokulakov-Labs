#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int n, k;
	cout << "Номер дня: ";
	cin >> k;
	cout << "Номер дня недели первого января:";
	cin >> n;
	if (n == 1)
	{
		if  (k % 7 == 1) 
		{
			cout << "Понедельник" << endl;
		}
		if (k % 7 == 2) 
		{
			cout << "Вторник" << endl;
		}
		if (k % 7 == 3) 
		{
			cout << "Среда" << endl;
		}
		if (k % 7 == 4) 
		{
			cout << "Четверг" << endl;
		}
		if (k % 7 == 5) 
		{
			cout << "Пятница" << endl;
		}
		if (k % 7 == 6) 
		{
			cout << "Суббота" << endl;
		}
		if (k % 7 == 0)
		{
			cout << "Воскресенье" << endl;
		}
	}
	if (n == 2)
	{
		if (k % 7 == 1)
		{
			cout << "Вторник" << endl;
		}
		if (k % 7 == 2) 
		{
			cout << "Cреда" << endl;
		}
		if (k % 7 == 3) 
		{
			cout << "Четверг" << endl;
		}
		if (k % 7 == 4) 
		{
			cout << "Пятница" << endl;
		}
		if (k % 7 == 5) 
		{
			cout << "Суббота" << endl;
		}
		if (k % 7 == 6)
		{
			cout << "Воскресенье" << endl;
		}
		if (k % 7 == 0)
		{
			cout << "Понедельник" << endl;
		}
	}
	if (n == 3)
	{
		if (k % 7 == 1) 
		{
			cout << "Среда" << endl;
		}
		if (k % 7 == 2)
		{
			cout << "Четверг" << endl;
		}
		if (k % 7 == 3)
		{
			cout << "Пятница" << endl;
		}
		if (k % 7 == 4)
		{
			cout << "Суббота" << endl;
		}
		if (k % 7 == 5)
		{
			cout << "Воскресенье" << endl;
		}
		if (k % 7 == 6)
		{
			cout << "Понедельник" << endl;
		}
		if (k % 7 == 0)
		{
			cout << "Вторник" << endl;
		}
	}
	if (n == 4)
	{
		if (k % 7 == 1)
		{
			cout << "Четверг" << endl;
		}

		if (k % 7 == 2)
		{
			cout << "Пятница" << endl;
		}

		if (k % 7 == 3)
		{
			cout << "Суббота" << endl;
		}

		if (k % 7 == 4)
		{
			cout << "Воскресенье" << endl;
		}

		if (k % 7 == 5)
		{
			cout << "Понедельник" << endl;
		}

		if (k % 7 == 6)
		{
			cout << "Вторник" << endl;
		}

		if (k % 7 == 0)
		{
			cout << "Среда" << endl;
		}

	}
	if (n == 5)
	{
		if (k % 7 == 1)
		{
			cout << "Пятница" << endl;
		}
		if (k % 7 == 2)
		{
			cout << "Суббота" << endl;
		}
		if (k % 7 == 3)
		{
			cout << "Воскресенье" << endl;
		}
		if (k % 7 == 4)
		{
			cout << "Понедельник" << endl;
		}
		if (k % 7 == 5)
		{
			cout << "Вторник" << endl;
		}
		if (k % 7 == 6)
		{
			cout << "Среда" << endl;
		}
		if (k % 7 == 0)
		{
			cout << "Четверг" << endl;
		}
	}
	if (n == 6)
	{
		if (k % 7 == 1)
		{
			cout << "Суббота" << endl;
		}
		if (k % 7 == 2)
		{
			cout << "Воскресенье" << endl;
		}
		if (k % 7 == 3)
		{
			cout << "Понедельник" << endl;
		}
		if (k % 7 == 4)
		{
			cout << "Вторник" << endl;
		}
		if (k % 7 == 5)
		{
			cout << "Среда" << endl;
		}
		if (k % 7 == 6)
		{
			cout << "Четверг" << endl;
		}
		if (k % 7 == 0)
		{
			cout << "Пятница" << endl;
		}
	}
	if (n == 7)
	{
		if (k % 7 == 1)
		{
			cout << "Воскресенье" << endl;
		}
		if (k % 7 == 2)
		{
			cout << "Понедельник" << endl;
		}
		if (k % 7 == 3)
		{
			cout << "Вторник" << endl;
		}
		if (k % 7 == 4)
		{
			cout << "Среда" << endl;
		}
		if (k % 7 == 5)
		{
			cout << "Четверг" << endl;
		}
		if (k % 7 == 6)
		{
			cout << "Пятница" << endl;
		}
		if (k % 7 == 0)
		{
			cout << "Суббота" << endl;
		}
	}

}