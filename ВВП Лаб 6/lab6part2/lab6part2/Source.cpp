#include <iostream>
using namespace std;
int main()
{
	int a, b, c, f; // создаём переменные a,b,c и вспомогательную переменную f  
	cout << "a = "; 
	cin >> a; // ввод a
	cout << "b = ";
	cin >> b; // ввод b
	cout << "c = ";
	cin >> c; // ввод с
	f = a; // сохраняем значение a в переменной f
	a = b; // присваиваем a значение b
	b = c; // присваиваем b значение c 
	c = f; // присваиваем с значение f(a)
	cout << "a = " << a << endl; // вывод нового a
	cout << "b = " << b << endl; // вывод нового b
	cout << "c = " << c << endl; // вывод нового c
	return 0;
}
	

	
	
	

	

