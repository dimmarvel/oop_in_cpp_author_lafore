// where.cpp
// ��������� this
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
class where
{
private:
	char charray[10];  //������ �� 10 ������
public:
	void reveal()
	{
		cout << "\n��� ����� � �� ��� � �� �����, ��� ����� - " << this;
	}
	// ������� ����� �������
};
///////////////////////////////////////////////////////////
int main()
{
	setlocale(LC_ALL,"Rus");
	where w1, w2, w3;    //������� ��� �������
	w1.reveal();         //����������, ��� ��� ���������
	w2.reveal();
	w3.reveal();
	cout << endl;
	system("pause");
	return 0;
}


