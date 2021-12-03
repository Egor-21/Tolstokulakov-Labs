#include <iostream>
#include <string>
using namespace std;
int main()
{
	int d, m; // creating variables for the day and month; creating arrays for days and month
	string day[32] = {"nul","first", "second", "third" ,"fourth","fifth", "sixth", "seventh", "eighth", "ninth", "tenth","eleventh","twelfth","thirteenth","fourteenth","fifteenth","sixteenth","seventeenth","eighteenth","nineteenth","twentieth","twenty first","twenty second","twenty third","twenty fourth","twenty fifth","twenty sixth","twenty seventh","twenty eighth","twenty ninth","thirtieth","thirty first"};
	string month[13] = { "nul","January", "February", "March","April","May","June","July","August","September","October","November","December"};
	cout << "Enter day: ";
	cin >> d;
	cout << "Enter month: ";
	cin >> m;
	cout << "The " << day[d] << " " << "of " << month[m] << endl; // output of the result
}