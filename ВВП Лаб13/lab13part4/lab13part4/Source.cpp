#include <iostream>
using namespace std;
int main()
{
	int a, n,step,rez;
	cout << "Enter A: ";
	cin >> a;
	cout << "Enter N: ";
	cin >> n;
	step = 0;
	rez = 0;
	for (step; step <= n; step++)
	{
		rez = rez + pow(a, step);
		cout << rez << endl;
	}
	
}