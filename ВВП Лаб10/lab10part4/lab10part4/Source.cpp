#include <iostream>
using namespace std;
int main()
{
	int n, a, b, c;
	cout << "Enter number: ";
	cin >> n;
	a = n / 100; // find first numeral
	b = (n % 100) / 10; // second
	c = n % 10; // third
	if (((a < b) and (b < c)) or ((a > b) and (b > c))) // check the truth of the statement
	{
		cout << "True" << endl;
	}
	else
	{
		cout << "False" << endl;
	}
}