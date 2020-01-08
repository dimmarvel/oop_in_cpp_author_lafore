//constant Distance objects
#include <iostream>

using namespace std;

class Distance               // ����� � ���������� �������
{
private:
	int feet;
	float inches;
public:                    // ����������� � ����� �����������
	Distance(int ft, float in) : feet(ft), inches(in)
	{ }
	void getdist()           // ������������� �����
	{
		cout << "\n������� ����� �����: "; cin >> feet;
		cout << "������� ����� ������: "; cin >> inches;
	}
	void showdist() const        // ����������� �����
	{
		cout << feet << "\'-" << inches << '\"';
	}
};

int main()
{
	const Distance football(300, 0);

	//football.getdist();     ������ ����� getdist() �������������

	cout << " ����� ���� ����� ";
	football.showdist();       // ���������
	cout << endl;
	return 0;
}

