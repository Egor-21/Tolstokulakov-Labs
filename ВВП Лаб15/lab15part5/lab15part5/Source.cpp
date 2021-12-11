#include <iostream>
using namespace std;
float Fact2(float n)
{
	int f;
	f = 1;
	for (; n > 1; n = n - 2)
	{
		f = n * f;
	}
	return f;	
}
int main()
{
	int n;
	cout << "Enter N: ";
	cin >> n;
	cout << Fact2(n) << endl;
}