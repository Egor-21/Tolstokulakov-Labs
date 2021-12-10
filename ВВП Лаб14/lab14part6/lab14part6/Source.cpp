#include <iostream>
using namespace std;
int main()
{
	int n, k, f,f1,f2;
	f = 0;
	k = 2;
	f1 = 1;
	f2 = 1;
	cout << "Enter N: ";
	cin >> n;
	while (f < n)
	{
		f = f1 + f2;
		f2 = f1;
		f1 = f;
		k++;
	}
	cout << k << endl;
}