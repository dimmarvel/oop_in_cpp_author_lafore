// dinsiter.cpp
// ������� � ��������� �������
#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int main()
{
	int arr1[] = { 1, 3, 5, 7, 9 };  //������������� d1
	int arr2[] = { 2, 4, 6 };          //������������� d2
	deque<int> d1;
	deque<int> d2;

	for (int i = 0; i < 5; i++)  //��������� ������ �� �������� � ������� � ������������ ��������
		d1.push_back(arr1[i]);
	for (int j = 0; j < 3; j++)
		d2.push_back(arr2[j]);
	//���������� d1 � ����� d2  --�������� ������--
	copy(d1.begin(), d1.end(), back_inserter(d2));

	cout << "\nd2: ";                //������� d2
	for (int k = 0; k < d2.size(); k++)
		cout << d2[k] << ' ';
	cout << endl;
	system("pause");
	return 0;
}