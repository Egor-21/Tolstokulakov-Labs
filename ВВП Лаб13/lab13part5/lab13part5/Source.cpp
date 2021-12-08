#include <iostream>
using namespace std;
int main()
{
	int a, n;
	cout << "Enter A: ";
	cin >> a;
	cout << "Enter N: ";
	cin >> n;
	int chet = 0;
	int rez = 0;
	for (chet; chet <= n; chet += 2)
	{
		rez = rez + pow(a, chet) - pow(a, chet + 1);

	}
	cout << rez << endl;
}