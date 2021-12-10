#include <iostream>
using namespace std;
int main()
{
	int a, b, rez;
	cout << "Enter A: ";
	cin >> a;
	cout << "Enter B: ";
	cin >> b;
	rez = a % b;
	cout << "Free part: " << rez;
}