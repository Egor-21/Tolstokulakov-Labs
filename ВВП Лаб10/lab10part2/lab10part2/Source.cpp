#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "Enter A: ";
	cin >> a;
	cout << "Enter B: ";
	cin >> b;
	cout << "Enter C: ";
	cin >> c;
	if ((a < b) and (b < c)) // check the truth of the statement
	{
		cout << "True" << endl;
	}
	else
	{
		cout << "False" << endl;
	}
}