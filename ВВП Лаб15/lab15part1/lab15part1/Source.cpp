#include <iostream>
using namespace std;
float PowerA3(float a, float *b)
{
	*b = pow(a, 3);
	return *b;
}
int main()
{
	int i, a;
	for (i = 1; i < 5; i++)
	{
		cout << "Enter A: ";
		cin >> a;
		float b;
		PowerA3(a,&b);
		cout << "B = " << b << endl;


	}
	

}