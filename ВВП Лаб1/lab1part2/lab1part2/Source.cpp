#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Rus"); // ?????? ??????, ????? ????? ???? ???????????? ??????? ???? 
	float p, L; // ??????? ??????????  ????? ?? ? ????? ??????????
	int d; // ??????? ?????????? ???????? ??????????
	p = 3.14; // ?????? ???????? ????? ?? ?? ???????
	cout << "??????? ??????? ??????????: "; // ?????????? ???????????? ?????? ???????? ???????? ?????????? 
	cin >> d; // ???????????? ?????? ???????? ???????? ??????????
	L = p * d; // ??????? ????? ?????????? 
	cout << "????? ?????????? ?????: " << L << endl; // ??????? ???????? ????? ?????????? 
}
