#include <iostream>
using namespace std;
int main()
{
	int n,chet;
	float rez;
	cout << "Enter number: ";
	cin >> n;
	chet = 0;
	rez = 1;
	for (chet; chet <= n; chet++)
	{
		rez = rez * (1 + 0.1 * chet);
	}
	cout << rez << endl;
}