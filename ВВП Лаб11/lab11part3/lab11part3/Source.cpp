#include <iostream>
using namespace std;
int main()
{
	int a, b, c,ab,ac;
	cout << "A = ";
	cin >> a;
	cout << "B = ";
	cin >> b;
	cout << "C = ";
	cin >> c;
	ab = abs(a - b); // distance from a to b
	ac = abs(a - c); // distance from a to c
	if (ab < ac) // if b closer
	{
		cout << "B, " << ab << endl;
	}
	if (ac < ab) // if c closer
	{
		cout << "C, " << ac << endl;
	}

}