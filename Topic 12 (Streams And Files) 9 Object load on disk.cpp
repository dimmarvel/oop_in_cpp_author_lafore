// opers.cpp
// ���������� ������� � �����
#include <fstream>        // ��� �������� �������
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
class person              // ����� person
{
protected:
	char name[80];        // ��� ��������
	short age;            // �������
public:
	void getData()        // �������� ������ � ��������
	{
		cout << "������� ���: "; cin >> name;
		cout << "������� �������: "; cin >> age;
	}
};
///////////////////////////////////////////////////////////
int main()
{
	setlocale(LC_ALL,"Rus");
	person pers;            // ������� ������
	pers.getData();         // �������� ������
							// ������� ������ ofstream
	ofstream outfile("PERSON.DAT", ios::binary);
	// �������� � ����
	outfile.write(reinterpret_cast<char*>(&pers), sizeof(pers));
	return 0;
}


