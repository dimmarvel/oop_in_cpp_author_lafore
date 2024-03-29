// employ2.cpp
// ��������� ������� ������������
#include <iostream>
using namespace std;
const int LEN = 80;
///////////////////////////////////////////////////////////
class employee            // ����� ���������
{
private:
	char name[LEN];     // ��� ����������
	unsigned long number; // ����� ����������
public:
	void getdata()
	{
		cout << "\n  ������� �������: "; cin >> name;
		cout << "  ������� �����: ";     cin >> number;
	}
	void putdata() const
	{
		cout << "\n  �������: " << name;
		cout << "\n  �����: " << number;
	}
};
///////////////////////////////////////////////////////////
class manager : public employee // ��������
{
private:
	char title[LEN];          // ���������, �������� ����-���������
	double dues;                // ����� ������� � �����-����
public:
	void getdata()
	{
		employee::getdata();
		cout << "  ������� ���������: "; cin >> title;
		cout << "  ������� ����� ������� � �����-����: "; cin >> dues;
	}
	void putdata() const
	{
		employee::putdata();
		cout << "\n  ���������: " << title;
		cout << "\n  ����� ������� � �����-����: " << dues;
	}
};
///////////////////////////////////////////////////////////
class scientist : public employee // ������
{
private:
	int pubs;                   // ���������� ����������
public:
	void getdata()
	{
		employee::getdata();
		cout << "  ������� ���������� ����������: "; cin >> pubs;
	}
	void putdata() const
	{
		employee::putdata();
		cout << "\n  ���������� ����������: " << pubs;
	}
};
///////////////////////////////////////////////////////////
class laborer : public employee // �������
{
};
///////////////////////////////////////////////////////////
class foreman : public laborer // ��������
{
private:
	float quotas;               // ����� ���������
public:
	void getdata()
	{
		laborer::getdata();
		cout << "  ������� ����� ���������: "; cin >> quotas;
	}
	void putdata() const
	{
		laborer::putdata();
		cout << "\n  ��������: " << quotas;
	}
};
///////////////////////////////////////////////////////////
int main()
{
	setlocale(LC_ALL,"Rus");
	laborer l1;
	foreman f1;

	// ������ ���������� � ���������� �����������
	cout << endl;
	cout << "\n���� ���������� � ������ �������";
	l1.getdata();
	cout << "\n���� ���������� � ������ ���������";
	f1.getdata();

	// ������� ���������� ���������� �� �����
	cout << endl;
	cout << "\n���������� � ������ �������";
	l1.putdata();
	cout << "\n���������� � ������ ���������";
	f1.putdata();

	cout << endl;
	system("pause");
	return 0;
}