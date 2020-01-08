// stakaray.cpp
// класс стек
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
class queue
{
private:
	enum { MAX = 10 }; // немного нестандартный синтаксис
	int st[MAX];    // стек в виде массива
	int head;        //начало очереди
	int tail;        //конец очереди
public:
	queue() // конструктор
	{head = 0; tail = 0;}
	void put(int var) // поместить в стек
	{
		st[tail++] = var;
		if(head>0) head--;
	}
	int get() // взять из стека
	{
		if (tail > 0) tail--;
		return st[head++];
	}
};
///////////////////////////////////////////////////////////
int main()
{
	queue s1;

	s1.put(11);
	s1.put(22);
	cout << "1: " << s1.get() << endl;
	cout << "2: " << s1.get() << endl;
	s1.put(33);
	s1.put(44);
	s1.put(55);
	s1.put(66);
	cout << "3: " << s1.get() << endl;
	cout << "4: " << s1.get() << endl;
	cout << "5: " << s1.get() << endl;
	cout << "6: " << s1.get() << endl;
	system("pause");
	return 0;
}


