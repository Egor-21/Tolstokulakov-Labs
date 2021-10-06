#include <iostream>
using namespace std;
int main()
{
	int a, b, c, r; // создаём переменные a,b,c и вспомогательную r
	cout << "a = ";
	cin >> a; // ввод a
	cout << "b = ";
	cin >> b; // ввод b
	cout << "c = ";
	cin >> c; // ввод с
	r = b; // сохраняем значение b в переменной r
	b = a; // перменной b присваиваем значение a
	a = c; // переменной a присваиваем значение с
	c = r; // присваиваем переменной с значение r(b)
	cout << "a = " << a << endl; // вывод нового a
	cout << "b = " << b << endl; // вывод нового b
	cout << "c = " << c << endl; // вывод нового c
	return 0;
}

