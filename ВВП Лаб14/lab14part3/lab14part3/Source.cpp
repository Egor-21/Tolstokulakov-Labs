#include <iostream>
using namespace std;
int main()
{
	int n, k,chet;
	cout << "Enter N: ";
	cin >> n;
	chet = 0;
	k = 0;
	while (chet <= n)
	{
		k += 1;
		chet = chet + k;
		
	}
	cout << k;

}