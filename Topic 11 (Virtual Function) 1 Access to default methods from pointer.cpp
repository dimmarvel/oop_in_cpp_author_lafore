// notvirt.cpp
// ������ � ������� �������� ����� ���������
#include <iostream>
using namespace std;
///////////////////////////////////////////////
class Base                //������� �����
{
public:
	void  show()           //������� �������
	{
		cout << "Base\n";
	}
};
//////////////////////////////////////////////
class Derv1 : public Base //����������� ����� 1
{
public:
	void  show()
	{
		cout << "Derv1\n";
	}
};
//////////////////////////////////////////////
class Derv2 : public Base //����������� ����� 2
{
public:
	void  show()
	{
		cout << "Derv2\n";
	}
};
//////////////////////////////////////////////
int main()
{
	Derv1 dv1;          //������ ������������ ������ 1
	Derv2 dv2;          //������ ������������ ������ 2
	Base* ptr;          //��������� �� ������� �����

	ptr = &dv1;         //����� dv1 ������� � ���������
	ptr->show();       //��������� show()
		ptr = &dv2;         //����� dv2 ������� � ���������
	ptr->show();       //��������� show()
	system("pause");
		return 0;
}


