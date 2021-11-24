#include <iostream>
using namespace std;
int main()
{

	int n, k;
	cout << "Number of day: ";
	cin >> k;
	cout << "The day of the first January:";
	cin >> n;
	if (n == 1) // if first January is a Monday
	{
		if  (k % 7 == 1) // if the remainder of dividing the number by 7 is 1, it is Monday, if 2, it is Tuesday... 
		{
			cout << "Monday" << endl;
		}
		if (k % 7 == 2) 
		{
			cout << "Tuesday" << endl;
		}
		if (k % 7 == 3) 
		{
			cout << "Wednesday" << endl;
		}
		if (k % 7 == 4) 
		{
			cout << "Thursday" << endl;
		}
		if (k % 7 == 5) 
		{
			cout << "Friday" << endl;
		}
		if (k % 7 == 6) 
		{
			cout << "Saturday" << endl;
		}
		if (k % 7 == 0)
		{
			cout << "Sunday" << endl;
		}
	}
	if (n == 2) // if first January is a Tuesday
	{
		if (k % 7 == 1) // if the remainder of dividing the number by 7 is 1, it is Tuesday, if 2, it is Wednesday...
		{
			cout << "Tuesday" << endl;
		}
		if (k % 7 == 2) 
		{
			cout << "Wednesday" << endl;
		}
		if (k % 7 == 3) 
		{
			cout << "Thursday" << endl;
		}
		if (k % 7 == 4) 
		{
			cout << "Friday" << endl;
		}
		if (k % 7 == 5) 
		{
			cout << "Saturday" << endl;
		}
		if (k % 7 == 6)
		{
			cout << "Sunday" << endl;
		}
		if (k % 7 == 0)
		{
			cout << "Monday" << endl;
		}
	}
	if (n == 3) // if first January is a Wednesday
	{
		if (k % 7 == 1) // if the remainder of dividing the number by 7 is 1, it is Wednesday, if 2, it is Thursday...
		{
			cout << "Wednesday" << endl;
		}
		if (k % 7 == 2)
		{
			cout << "Thursday" << endl;
		}
		if (k % 7 == 3)
		{
			cout << "Friday" << endl;
		}
		if (k % 7 == 4)
		{
			cout << "Saturday" << endl;
		}
		if (k % 7 == 5)
		{
			cout << "Sunday" << endl;
		}
		if (k % 7 == 6)
		{
			cout << "Monday" << endl;
		}
		if (k % 7 == 0)
		{
			cout << "Tuesday" << endl;
		}
	}
	if (n == 4) // if first January is a Thursday
	{
		if (k % 7 == 1) // if the remainder of dividing the number by 7 is 1, it is Thursday, if 2, it is Friday...
		{
			cout << "Thursday" << endl;
		}

		if (k % 7 == 2)
		{
			cout << "Friday" << endl;
		}

		if (k % 7 == 3)
		{
			cout << "Saturday" << endl;
		}

		if (k % 7 == 4)
		{
			cout << "Sunday" << endl;
		}

		if (k % 7 == 5)
		{
			cout << "Monday" << endl;
		}

		if (k % 7 == 6)
		{
			cout << "Tuesday" << endl;
		}

		if (k % 7 == 0)
		{
			cout << "Wednesday" << endl;
		}

	}
	if (n == 5) // if first January is a Friday
	{
		if (k % 7 == 1) //if the remainder of dividing the number by 7 is 1, it is Friday, if 2, it is Saturday...
		{
			cout << "Friday" << endl;
		}
		if (k % 7 == 2)
		{
			cout << "Saturday" << endl;
		}
		if (k % 7 == 3)
		{
			cout << "Sunday" << endl;
		}
		if (k % 7 == 4)
		{
			cout << "Monday" << endl;
		}
		if (k % 7 == 5)
		{
			cout << "Tuesday" << endl;
		}
		if (k % 7 == 6)
		{
			cout << "Wednesday" << endl;
		}
		if (k % 7 == 0)
		{
			cout << "Thursday" << endl;
		}
	}
	if (n == 6) // if first January is a Saturday
	{
		if (k % 7 == 1) //if the remainder of dividing the number by 7 is 1, it is Saturday, if 2, it is Sunday...
		{
			cout << "Saturday" << endl;
		}
		if (k % 7 == 2)
		{
			cout << "Sunday" << endl;
		}
		if (k % 7 == 3)
		{
			cout << "Monday" << endl;
		}
		if (k % 7 == 4)
		{
			cout << "Tuesday" << endl;
		}
		if (k % 7 == 5)
		{
			cout << "Wednesday" << endl;
		}
		if (k % 7 == 6)
		{
			cout << "Thursday" << endl;
		}
		if (k % 7 == 0)
		{
			cout << "Friday" << endl;
		}
	}
	if (n == 7) // if first January is a Sunday
	{
		if (k % 7 == 1) //if the remainder of dividing the number by 7 is 1, it is Sunday, if 2, it is Monday...
		{
			cout << "Sunday" << endl;
		}
		if (k % 7 == 2)
		{
			cout << "Monday" << endl;
		}
		if (k % 7 == 3)
		{
			cout << "Tuesday" << endl;
		}
		if (k % 7 == 4)
		{
			cout << "Wednesday" << endl;
		}
		if (k % 7 == 5)
		{
			cout << "Thursday" << endl;
		}
		if (k % 7 == 6)
		{
			cout << "Friday" << endl;
		}
		if (k % 7 == 0)
		{
			cout << "Saturday" << endl;
		}
	}

}