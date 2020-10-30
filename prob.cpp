#include <iostream>
#include <string>

using namespace std;

class M
{


public:

	virtual void menu() {}
};

class R
{
private:
	/*int x;
	int y;*/

public:
	int x;
	int y;
	R()
	{
		
		cout << "Enter login and password" << endl;
		cin >> x >> y;
	}
};

class v1 :public M
{
public:
	void menu() override
	{
		cout << "You logged in as a user" << endl;
	}
};



class check :public R, M
{
public:
	void reg(M *foo)
	{
		int login;
		int password;
		cout << "Come in" << endl;
		cin >> login >> password;
		if (this->x == login && this->y == password)
		{
			foo->menu();
		}

		else
		{
			cout << "Error";
		}
		
		
	}
};

int main()
{
	v1 v1;
	check var1;
	var1.reg(&v1);

	return 0;
}
