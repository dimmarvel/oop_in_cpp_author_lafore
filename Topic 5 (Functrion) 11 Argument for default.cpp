// ���������� ���������� �� ���������

#include <iostream>
using namespace std;
void repchar(char = '*', int = 45); // �������� � ����������� �� ���������

int main()
{
	repchar();                    // �������� ������ '*' 45 ���
	repchar('=');                 // �������� ������ '=' 45 ���
	repchar('+', 30);             // �������� ������ '+' 30 ���
	return 0;
}

// �������� ������ ��������
void repchar(char ch, int n)    // ��� ������������� �����
{                               // �������������� �������� �� ���������

	for (int j = 0; j < n; j++)        // ���� n ���
		cout << ch;                   // ����� ch
	cout << endl;
}


