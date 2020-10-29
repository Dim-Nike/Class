#include <iostream>
#include <string>

using namespace std;

string x;

class gretting
{
private:
	string name;

public:
	
	gretting(string name)
	{
		this->name = name;
	}
	void foo()
	{
		cout << "Hello, " << name << endl;
	}
};

class bot
{

public:
	void user()
	{
		cout << "Hello, i am bot, and you " << x << endl;
	}
};

int main()
{
	cout << "How are you name?" << endl;
	
	cin >> x;
	gretting gret(x);
	gret.foo();
	
	
	return 0;
}
