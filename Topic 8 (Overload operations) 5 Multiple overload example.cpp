// engless.cpp
// ���������� �������� < ��� ��������� ����
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
class Distance // ����� ���������� ��� �����
{
private:
	int feet;
	float inches;
public:
	// ����������� ��� ����������
	Distance() : feet(0), inches(0.0)
	{ }
	// ����������� � ����� �����������
	Distance(int ft, float in) : feet(ft), inches(in)
	{ }
	// ��������� ���������� �� ������������
	void getdist()
	{
		cout << "\n������� ����: "; cin >> feet;
		cout << "������� �����: ";  cin >> inches;
	}
	// ����� ����������
	void showdist()
	{
		cout << feet << "\'-" << inches << '\"';
	}
	// ��������� ���� ����
	bool operator< (Distance) const;
};
///////////////////////////////////////////////////////////
// ��������� ���� ����
bool Distance:: operator<(Distance d1)const {
	float bf1 = feet + inches /12;
	float bf2 = d1.feet + d1.inches /12;
	return (bf1 < bf2) ? true : false;
}
///////////////////////////////////////////////////////////
int main()
{
	setlocale(LC_ALL,"rus");
	Distance dist1;            // ���������� ����������
	dist1.getdist();         // �������� ����� �� ������������

	Distance dist2(6, 2.5); // ���������� � �������������� ����������

	// ���������� �����
	cout << "\ndist1 = "; dist1.showdist();
	cout << "\ndist2 = "; dist2.showdist();

	// ���������� ��� ��������
	if (dist1 < dist2)
		cout << "\ndist1 ������ ��� dist2";
	else
		cout << "\ndist1 ������ ��� ����� ��� dist2";
	cout << endl;
	system("pause");
	return 0;
}


