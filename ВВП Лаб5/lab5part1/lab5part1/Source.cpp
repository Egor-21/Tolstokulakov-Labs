#include <iostream> // ����������� ���������� ����� � ������
#include <math.h> // ����������� ���������� �������������� �������
using namespace std;
int main()
{
	// ����������� ����� ������� ����� ������� ���������� �������������� ������������ 
	setlocale(LC_ALL, "Rus"); // ������ ��� ������������� �������� �����
	float x1, y1, x2, y2, katetx, katety, otvet; // ������ ���������� ��� ��������� �����, ������ ������������ �� ��� X, ������ ������������ �� ��� Y � ���������� ����� �������
	cout << "������� ���������� �� ��� X ������ �����: "; // ���������� ������������ ������ ���������� �� ��� X ������ �����
	cin >> x1; // ������������ ������ ���������� �� ��� X ������ �����
	cout << "������� ���������� �� ��� Y ������ �����: "; // ���������� ������������ ������ ���������� �� ��� Y ������ �����
	cin >> y1; // ������������ ������ ���������� �� ��� X ������ �����
	cout << "������� ���������� �� ��� X ������ �����: "; // ���������� ������������ ������ ���������� �� ��� X ������ �����
	cin >> x2; // ������������ ������ ���������� �� ��� X ������ �����
	cout << "������� ���������� �� ��� Y ������ �����: "; // ���������� ������������ ������ ���������� �� ��� Y ������ �����
	cin >> y2; // ������������ ������ ���������� �� ��� Y ������ �����
	katetx = abs(x1 - x2); // ������� ����� ������������ �� ��� X
	katety = abs(y1 - y2); // ����� �� Y
	otvet = sqrt((katetx * katetx) + (katety * katety)); // �� ������� �������� ������� ���������� ������������ (���������� ����� �������)
	cout << "���������� ����� �������: " << otvet << endl; // ������� ����� 
	return 0;        
}



	
