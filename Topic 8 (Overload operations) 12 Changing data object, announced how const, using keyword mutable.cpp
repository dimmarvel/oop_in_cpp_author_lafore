// mutable.cpp
#include <iostream>
#include <string>
using namespace std;
///////////////////////////////////////////////////////////
class scrollbar
{
private:
	int size;
	mutable string owner;
public:
	scrollbar(int sz, string own) : size(sz), owner(own)
	{ }
	void setSize(int sz)
	{
		size = sz;
	}
	void setOwner(string own) const
	{
		owner = own;
	}
	int getSize() const
	{
		return size;
	}
	string getOwner() const
	{
		return owner;
	}
};
///////////////////////////////////////////////////////////
int main()
{
	const scrollbar sbar(60, "Приложение 1");

	// sbar.setSize ( 100 );
	sbar.setOwner("Приложение 2");

	cout << sbar.getSize() << ", " << sbar.getOwner() << endl;

	return 0;
}


