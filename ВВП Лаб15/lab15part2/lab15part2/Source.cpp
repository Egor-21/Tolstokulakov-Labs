#include <iostream>
using namespace std;
int Sign(int x)
{
	if (x < 0)
	{
		return -1;
	}
	if (x == 0)
	{
		return 0;
	}
	if (x > 0)
	{
		return 1;
	}
}
int main()
{
	int a, b,rez;
	cout << "Enter A and B: ";
	cin >> a;
	cin >> b;
	rez = Sign(a) + Sign(b);
	cout << rez << endl;

}