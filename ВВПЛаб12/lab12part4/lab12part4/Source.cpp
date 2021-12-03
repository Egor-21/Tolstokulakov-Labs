#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n, a, b, c,d;
	cout << "Enter number: ";
	cin >> n;
	a = n / 100; // first figure of number
	b = (n % 100) / 10; // second figure
	c = n % 10; // third figure
	string sotni[] = { "nul","one","two","three","four","five","six","seven","eight","nine" }; // array for first figure
	string decyat[] = { "ten","eleven","twelve", "thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen" }; // array for numbers like 112,213,411,510...
	string vtoraya_cifra[] = { "nul","nul","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety" }; // array for second figure
	string tretya_cifra[] = { "nul","one","two","three","four","five","six","seven","eight","nine" }; // array for third figure
	if (b == 1) // for numbers: 212, 310, 418...
	{
		cout << sotni[a] << " " << "hundred " << decyat[c] << endl;
	}
	if ((b > 1) and (c == 0)) // for numbers: 210, 460, 990...
	{
		cout << sotni[a] << " " << "hundred " << vtoraya_cifra[b] << endl;
	}
	if ((b == 0) and (c > 0)) // for numbers: 301, 502, 209...
	{
		cout << sotni[a] << " " << "hundred " << tretya_cifra[c] << endl;
	}
	if ((b > 1) and (c > 0)) // for numbers 123, 777, 439...
	{
		cout << sotni[a] << " " << "hundred " << vtoraya_cifra[b] << " " << tretya_cifra[c] << endl;
	}
	if ((b == 0) and (c == 0)) // for numbers: 100, 200, 300...
	{
		cout << sotni[a] << " " << "hundred" << endl;
	}
}