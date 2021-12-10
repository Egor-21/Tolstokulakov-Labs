#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "Enter A: ";
	cin >> a;
	cout << "Enter B: ";
	cin >> b;
	int chet = 0;
	for (a; a <= b; a++)
	{
		for (chet; chet < a; chet++)
		{
			cout << a;
		}
		cout << endl;
		chet = 0;
	}
}
