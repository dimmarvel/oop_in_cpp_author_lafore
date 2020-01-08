// rewerr.cpp
// ��������� ������ �����/������
#include <fstream>            // ��� �������� �������
#include <iostream>
using namespace std;
#include <process.h>          // ��� exit()

const int MAX = 1000;
int buff[MAX];

int main()
{
	for (int j = 0; j < MAX; j++)    // ��������� ����� �������
		buff[j] = j;
	ofstream os;                // ������� �������� �����
								// ������� ���
	os.open("a:edata.dat", ios::trunc | ios::binary);
	if (!os)
	{
		cerr << "���������� ������� �������� ����\n"; exit(1);
	}

	cout << "���� ������...\n"; // �������� � ���� ����������
								// ������
	os.write(reinterpret_cast<char*>(buff), MAX * sizeof(int));
	if (!os)
	{
		cerr << "������ � ���� ����������\n"; exit(1);
	}
	os.close();                 // ���� ������� �����

	for (int j = 0; j < MAX; j++)        // �������� �����
		buff[j] = 0;

	ifstream is;                // ������� ������� �����
	is.open("a:edata.dat", ios::binary);
	if (!is)
	{
		cerr << "���������� ������� ������� ����\n"; exit(1);
	}

	cout << "���� ������...\n"; // ������ �����
	is.read(reinterpret_cast<char*>(buff), MAX * sizeof(int));
	if (!is)
	{
		cerr << "���������� ������ �����\n"; exit(1);
	}

	for (int j = 0; j < MAX; j++)        // ��������� ������
		if (buff[j] != j)
		{
			cerr << "\n������ �����������\n"; exit(1);
		}
	cout << "������ � �������\n";
	return 0;
}


