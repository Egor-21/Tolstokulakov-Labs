#include <iostream>
using namespace std;
int main()
{
	int a, b,n;
	cout << "Enter A and B: ";
	cin >> a;
	cin >> b;
	if (a != b) 
	{
		n = max(a, b); // find the maximum between a and b
		a = n; // assign A the maximum  
		b = n; // assign B the maximum
		cout << "A = " << a << " "<< "B = " << b << endl;  // displaying new values
		a = 1; // assign new values to a and b so that the program does not run longer
		b = 2;
	}
	if (a == b)
	{
		a = 0;
		b = 0;
		cout << "A = " << a << " " << "B = " << b << endl;
	}
}
