#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int a, b, nez, n;
	cout << "A = "; // enter length of A
	cin >> a; 
	cout << "B = "; // enter length of B
	cin >> b;
	if (a >= b) 
	{
		n = a / b; // find number of B in A
		nez = a - (b * n); // find free part of A
		cout << "Free part = " << nez << endl; // output size of free part
	}
	if (a < b) 
	{
		cout << "a < b" << endl; // output message
	}
}

