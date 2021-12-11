#include <iostream>
using namespace std;
float Quarter(float x, float y)
{
	if ((x > 0) and (y > 0))
	{
		return 1;
	}
	if ((x < 0) and (y > 0))
	{
		return 2;
	}
	if ((x < 0) and (y < 0))
	{
		return 3;
	}
	if ((x > 0) and (y < 0))
	{
		return 4;
	}
}
int main()
{
	float x, y;
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter X: ";
		cin >> x;
		cout << "Enter Y: ";
		cin >> y;
		cout << Quarter(x, y) << " " << "quarter" << endl;
	}

}