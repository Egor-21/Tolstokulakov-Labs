#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter number: ";
	cin >> n;
	if (n >= 1 and n <= 9 and n % 2 != 0)
	{
		cout << "Odnoznachnoe nechetnoe" << endl;
	}
	if (n >= 1 and n <= 9 and n % 2 == 0)
	{
		cout << "Odnoznachnoe chetnoe" << endl;
	}
	if (n >= 10 and n <= 99 and n % 2 != 0)
	{
		cout << "Dvuznachnoe nechetnoe" << endl;
	}
	if (n >= 10 and n <= 99 and n % 2 == 0)
	{
		cout << "Dvuznachnoe chetnoe" << endl;
	}
	if (n >= 100 and n <= 999 and n % 2 != 0)
	{
		cout << "Trehznachnoe nechetnoe" << endl;
	}
	if (n >= 100 and n <= 999 and n % 2 == 0)
	{
		cout << "Trehznachnoe chetnoe" << endl;
	}
}