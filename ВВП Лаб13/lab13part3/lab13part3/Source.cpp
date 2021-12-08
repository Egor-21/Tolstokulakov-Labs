#include <iostream>
using namespace std;
int main()
{
	int n,i,rez;
	i = 1;
	rez = 0;
	cout << "Enter number: ";
	cin >> n;
	for (i; i <= (2 * n - 1); i += 2)
	{
		rez += i;
		cout << rez << endl;
	}
}