// linesin.cpp
// ���� ���������� �����
#include <iostream>
using namespace std;
const int MAX = 2000; // ������������ ����� ������
char str[MAX];     // ���� ������
///////////////////////////////////////////////////////////
int main()
{
	setlocale(LC_ALL,"Rus");
	cout << "\n������� ������:\n";
	cin.get(str, MAX, '$');
	cout << "�� �����:\n" << str << endl;
	system("pause");
	return 0;
}


