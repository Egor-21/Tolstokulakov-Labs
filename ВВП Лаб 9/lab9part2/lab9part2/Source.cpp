#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Number of day: ";  
	cin >> n;
	if (n % 7 == 0)  // if the number is completely divisible by 7, then this is Sunday, if the remainder is equal 1 it is Monday, if 2, it is Tuesday and so on 
	{
		cout << "Sunday(0)" << endl;
	}
	if (n % 7 == 1) 
	{
		cout << "Monday(1)" << endl;
	}
	if (n % 7 == 2)
	{
		cout << "Tuesday(2)" << endl;
	}
	if (n % 7 == 3)
	{
		cout << "Wednesday(3)" << endl;
	}
	if (n % 7 == 4)
	{
		cout << "Thursday(4)" << endl;
	}
	if (n % 7 == 5)
	{
		cout << "Friday(5)" << endl;
	}
	if (n % 7 == 6)
	{
		cout << "Saturday(6)" << endl;
	}	
}