// badalloc.cpp
// ������������ ���������� bad_alloc 
#include <iostream>
using namespace std;

int main()
{

	setlocale(LC_ALL, "Rus");
	const unsigned long SIZE = 10000; //����� ������
	char* ptr;              //��������� �� ����� � ������

	try
	{
		ptr = new char[SIZE]; //���������� � ������ SIZE ����
	}
	catch (bad_alloc)        //���������� ����������
	{
		cout << "\n ���������� bad_alloc: ���������� ���������� ������ � ������.\n";
		return(1);
	}

	delete[] ptr;           //���������� ������
	cout << "\n������ ������������ ��� �����.\n";
	system("pause");
	return 0;
}


