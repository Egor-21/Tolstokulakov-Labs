#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int b, k;
	cout << "Size in bytes: "; // enter size in bytes
	cin >> b;
	k = b / 1024; // find the full number of kilobytes
	cout << "Full number of kilobytes = " << k << endl; // output rezult

}