#include <iostream>
using namespace std;
int main()
{
	int a, b, c,ans;
	cout << "Enter three numbers: ";
	cin >> a;
	cin >> b;
	cin >> c;
	if ((a < b) and (a < c)) // if the minimum number is a
	{
		ans = b + c;
		cout << "Answer: " << ans << endl;
	}
	if ((b < a) and (b < c)) // if the minimum number is b
	{
		ans = a + c;
		cout << "Answer: " << ans << endl;
	}
	if ((c < a) and (c < b)) // if the minimum number is c
	{
		ans = a + b;
		cout << "Answer: " << ans << endl;
	}

}