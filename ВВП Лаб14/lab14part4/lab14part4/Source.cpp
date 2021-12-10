#include <iostream>
using namespace std;
int main()
{
	int   m; 
	float p1,p,s; 
	s = 1000;
	m = 0;
	cout << "Enter P: ";
	cin >> p;
	p1 = p / 100;
	while (s < 1100)
	{
		s = s + (s * p1);
		m += 1;
	}
	cout << m << endl;
}