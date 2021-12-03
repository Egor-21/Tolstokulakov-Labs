#include <iostream>
using namespace std;
int main() 
{
	char c;
	int n;
	cout << "Enter the initial direction of the robot(n - north; s - south; w - west; e - east: ";
	cin >> c;
	cout << "Enter command(0 - keep moving; 1 - left; -1 - right: ";
	cin >> n;
	if (c == 'n') // if start movement to the North
	{
		if (n == 0) // keep moving
		{
			cout << "North" << endl;
		}
		if (n == 1)  // left
		{
			cout << "West" << endl;
		}
		if (n == -1) // right
		{
			cout << "East" << endl;
		}
	}
	if (c == 's') // if start movement to the South
	{
		if (n == 0)
		{
			cout << "South" << endl;
		}
		if (n == 1)
		{
			cout << "East" << endl;
		}
		if (n == -1)
		{
			cout << "West" << endl;
		}
	}
	if (c == 'w') // if start movement to the West
	{
		if (n == 0)
		{
			cout << "West" << endl;
		}
		if (n == 1)
		{
			cout << "South" << endl;
		}
		if (n == -1)
		{
			cout << "North" << endl;
		}
	}
	if (c == 'e') // if start movement to the East
	{
		if (n == 0)
		{
			cout << "East" << endl;
		}
		if (n == 1)
		{
			cout << "North" << endl;
		}
		if (n == -1)
		{
			cout << "South" << endl;
		}
	}

}
