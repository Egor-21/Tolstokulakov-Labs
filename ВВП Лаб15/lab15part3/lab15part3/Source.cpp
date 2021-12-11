#include <iostream>
using namespace std;
float RingS(float R1, float R2)
{
	float s, p = 3.14;
	s = p * pow(R1, 2) - p * pow(R2, 2);
	return s;
}
int main()
{
	float r1, r2,i;
	for (i = 0; i < 3; i++)
	{
		cout << "Enter R1 and R2 (R1 > R2): ";
		cin >> r1;
		cin >> r2;
		cout << "S of ring: " << RingS(r1,r2) << endl;
	}

}