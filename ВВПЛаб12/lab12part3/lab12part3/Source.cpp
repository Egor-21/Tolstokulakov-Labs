#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;
	string study_building[] = { "0","1","2","3","4","5","6","7","8","9","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventen","eighteen","nineteen","twenty", "twenty one","twenty two","twenty three","twenty four","twenty five","twenty six","twenty seven","twenty eight","twenty nine","thirty","thirty one","thirty two","thirty three","thirty four","thirty five","thirty six","thirty seven","thirty eight","thirty nine","fourty"};
	cout << "Enter number of study building: ";
	cin >> n;
	cout << study_building[n] << " " << "study buildings" << endl;
}