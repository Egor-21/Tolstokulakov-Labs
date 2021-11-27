#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "Enter sides of treangle: ";
	cin >> a;
	cin >> b;
	cin >> c;
	if ((a < b + c) and (b < a + c) and (c < b + a)) // Check the truth of the statement
	{
		cout << "True" << endl;
	}
	else
	{
		cout << "False" << endl;
	}

}