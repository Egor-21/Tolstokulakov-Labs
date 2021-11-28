#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter number: ";
	cin >> n;
	if ((n < 0) and (n % 2 != 0))
	{
		cout << "Otricatelnoe nechetnoe" << endl;
	}
	if ((n < 0) and (n % 2 == 0))
	{
		cout << "Otricatelnoe chetnoe" << endl;
	}
	if (n == 0)
	{
		cout << "Nulevoe" << endl;
	}
	if ((n > 0) and (n % 2 != 0))
	{
		cout << "Polozitelnoe nechetnoe" << endl;
	}
	if ((n > 0) and (n % 2 == 0))
	{
		cout << "Polozitelnoe chetnoe" << endl;
	}
}