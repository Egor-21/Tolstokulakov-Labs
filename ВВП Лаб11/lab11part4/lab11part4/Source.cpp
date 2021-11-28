#include <iostream>
using namespace std;
int main()
{
	int x, y;
	cout << "X: ";
	cin >> x;
	cout << "Y: ";
	cin >> y;
	if ((x > 0) and (y > 0))
	{
		cout << "First quarter" << endl;
	}
	if ((x < 0) and (y > 0))
	{
		cout << "Second quarter" << endl;
	}
	if ((x < 0) and (y < 0))
	{
		cout << "Third quarter" << endl;
	}
	if ((x > 0) and (y < 0))
	{
		cout << "Fourth quarter" << endl;
	}
}