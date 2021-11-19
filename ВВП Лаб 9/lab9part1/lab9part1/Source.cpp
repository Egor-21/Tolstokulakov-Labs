#include <iostream>
using namespace std;
int main()
{
	int n, sec;
	cout << "How many seconds have passed? ";
	cin >> n;
	sec = n % 60;
	cout << "Seconds since the last minute: " << sec << endl;
}