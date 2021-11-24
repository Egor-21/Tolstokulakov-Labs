#include <iostream>
using namespace std;
int main()
{
	int year, vek;
	cout << "Enter year: " << endl;
	cin >> year;
	if (year % 10 != 0)  // the case when the year does not end with zero and any number is placed before the last number, for example (2001)
	{
		vek = (year / 100) + 1;
		cout << vek << " " << "century" << endl;
	}
	if ((year % 10 == 0) and (year % 100) / 10 == 0) // the case when the year ends at 00
	{
		vek = year / 100;
		cout << vek << " " << "century" << endl;
	}
	if ((year % 10 == 0) and (year % 100) / 10 != 0) // the case when the year ends on X0 for example 2020
	{
		vek = (year / 100) + 1;
		cout << vek << " " << "century" << endl;

	}
}