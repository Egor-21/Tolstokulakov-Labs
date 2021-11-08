#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int a,b,c;
	cout << "Enter two-digit number: "; // enter two-digit number
	cin >> a;
	b = a / 10; // find first figure of number
	c = a % 10; // find second figure of number
	cout << c << b << endl; // change figures

}