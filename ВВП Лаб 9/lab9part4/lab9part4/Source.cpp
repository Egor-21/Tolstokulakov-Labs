#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int a, b, c, plpr, plkv, kolkv,svobod;
	cout << "������� ��� ������� ��������������: " << endl; // ���� ������ ��������������
	cin >> a;
	cin >> b;
	cout << "������� ������� ��������: " << endl; // ���� ������� ��������
	cin >> c; 
	plpr = a * b; // ������� ������� ��������������
	plkv = c * c; // ������� ������� ��������
	kolkv = plpr / plkv; // ������� ������� ��������� ���������� � �������������
	svobod = plpr - (kolkv * plkv); // ������� �� ������� �������
	cout << "���-�� ��������� � ��������������: " << kolkv << endl; // ����� ������� ������
	cout << "��������� �������: " << svobod << endl; // ����� ������� ������
}