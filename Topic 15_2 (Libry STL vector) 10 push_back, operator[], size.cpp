// vector.cpp
// ������������ push_back(), operator[], size()
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v;        //������� ������ ���� int
	v.push_back(10);      //������ ������ � ����� �������
	v.push_back(11);
	v.push_back(12);
	v.push_back(13);
	v[0] = 20;            //�������� ������ ����������
	v[3] = 23;
	for (int j = 0; j < v.size(); j++)  // ������� ���������� 20 11 12 23
		cout << v[j] << ' ';        
	cout << endl;
	system("pause");
	return 0;
}