#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int a, b, rez;
	cout << "a = "; // enter the length of A
	cin >> a; 
	cout << "b = "; // enter the length of A
	cin >> b;
	if (a >= b)
	{
		rez = a / b; // find the numbers of B in  �
		cout << "Numbers B in segment �: " << rez << endl; // output rezult
	}
	if (a < b) 
	{
		cout << "A < B" << endl; // output message
	}	
}