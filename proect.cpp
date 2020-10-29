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

class regestr
{
private:
	int x;
	int y;

public:

	void head()
	{
		cout << "Enter login and password" << endl;
		int x, y;
		this->x = x;
		this->y = y;
		cin >> x >> y;
		int login = x;
		int password = y;
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
