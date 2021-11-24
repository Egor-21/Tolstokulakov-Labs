#include <iostream>
using namespace std;
int main()
{
	int a, b, c, plpr, plkv, kolkv,svobod;
	cout << "Enter two sides of rectangle: " << endl; // entering the sides of the rectangle
	cin >> a;
	cin >> b;
	cout << "Enter side of square: " << endl; // entering side of square
	cin >> c; 
	plpr = a * b; // find the square of rectangle
	plkv = c * c; // find the square of square
	kolkv = plpr / plkv; // find how many squares fit into a rectangle
	svobod = plpr - (kolkv * plkv); // find free square
	cout << "Number of squares in a rectangle: " << kolkv << endl; 
	cout << "Free square: " << svobod << endl; 
}