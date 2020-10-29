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
protected:
    string x;
    string y;

public:

    regestr()
    {
	cout<<"It is regestration\nThink up your login and password"<<endl;
        cin >> this->x >>this-> y;
        string login = x;
        string password = y;
    }
};

class Menu :public regestr, : protected regestr
	{
public:
	void menu()
	{
        	cout<<"You are now the in main menu\nEnter your login and password to continue"<<endl;
		cin>>this-x>>this->y;
	}
	};

    /*class bot
    {

    public:
        void user()
        {
            cout << "Hello, i am bot, and you " << x << endl;
        }
    };*/

    int main()
    {
        cout << "How are you name?" << endl;
        string x;
        cin >> x;
        gretting gretting(x);
        /*regestr v1;
        v1.menu();*/


        return 0;
    }

