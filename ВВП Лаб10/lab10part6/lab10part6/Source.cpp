#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "Enter sides of the triangle: ";
	cin >> a;
	cin >> b;
	cin >> c;
	if ((a > b) and (a > c)) // if a the longest side
	{
		if ((b * b) + (c * c) == a * a) // Pifagor's teorem
		{
			cout << "True" << endl;
		}
		else
		{
			cout << "False" << endl;
		}
	}
	if ((b > a) and (b > c)) // if b the longest side 
	{
		if ((a * a) + (c * c) == b * b) // Pifagor's teorem
		{
			cout << "True" << endl;
		}
		else
		{
			cout << "False" << endl;
		}
	}
	if ((c > a) and (c > b)) // if c the longest side
	{
		if ((a * a) + (b * b) == c * c) // Pifagor's teorem
		{
			cout << "True" << endl;
		}
		else
		{
			cout << "False" << endl;
		}
	}

}