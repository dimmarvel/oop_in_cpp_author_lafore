// outiter.cpp
// ������������ ostream_iterator
#include <iostream>
#include <algorithm>
#include <list>
#include<iterator>
using namespace std;
int main()
{
	int arr[] = { 10, 20, 30, 40, 50 };
	list<int> theList;
	for (int j = 0; j < 5; j++)                        //��������� ������ � ������
		theList.push_back(arr[j]);
	ostream_iterator<int> ositer(cout, ", ");     //�������� ostream
	cout << "\n���������� ������: ";
	copy(theList.begin(), theList.end(), ositer); //����� ������
	cout << endl;
	system("pause");
	return 0;
}