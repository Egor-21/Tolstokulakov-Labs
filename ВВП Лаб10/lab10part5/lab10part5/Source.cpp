#include <iostream>
using namespace std;
int main()
{
	int n, a, b, c, d;
	cout << "Enter number: ";
	cin >> n;
	a = n / 1000; // find first numeral
	b = (n % 1000) / 100; // find second numeral
	c = (n % 100) / 10; // find third numeral
	d = n % 10; // find fourth numeral
	if ((a == d) and (b == c)) // for the statement to be true, the first numeral must be equal to the fourth, and the second to the third
	{
		cout << "True" << endl;
	}
	else
	{
		cout << "False" << endl;
	}
	
}