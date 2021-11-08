#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int a, b, c, d;
	cout << "Enter three-digit number: "; 
	cin >> a;
	b = a / 100; // find firt figure of number
	c = (a % 100) / 10; // find second figure of number
	d = a % 10; // find second third figure of number
	cout << c << d << b << endl; // change place of first figure and output rezult

}