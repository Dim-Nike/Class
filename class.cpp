#include <iostream>
#include <string>

using namespace std;


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



int main()
{
	string x = "Dmitry";
	gretting gret(x);
	gret.foo();
	return 0;
}
