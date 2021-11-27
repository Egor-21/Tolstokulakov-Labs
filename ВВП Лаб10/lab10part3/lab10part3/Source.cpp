#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter number: ";
	cin >> n;
	if ((n % 2 == 0) and (n >= 10 and n <= 99)) //check the truth of the statement
	{
		cout << "True" << endl;
	}
	else
	{
		cout << "False" << endl;
	}
}
