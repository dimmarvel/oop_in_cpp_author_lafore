// sstrfind.cpp
// ����� ��������
#include <iostream>
#include <string>
using namespace std;
///////////////////////////////////////////////////////////
int main()
{
	setlocale(LC_ALL, "Rus");
	string s1 = "� ���� �������� ������, � ���� ��� �����.";
	int n;

	n = s1.find("������");
	cout << "������ �������: " << n << endl;

	n = s1.find_first_of("����");
	cout << "������ �� ����: " << n << endl;

	n = s1.find_first_not_of("����������");
	cout << "������ �� �� : " << n << endl;
	system("pause");
	return 0;
}


