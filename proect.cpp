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
        this->x = x;
        this->y = y;
        cin >> x >> y;
        int login = x;
        int password = y;
        cout << "Enter again login and password" << endl;
        cin >> x >> y;
        if (login == x && password == y)
        {
            cout << "You passed the resolution" << endl;
        }

        else
        {
            cout << "Error:\nWrong login or password" << endl;
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
        regestr v1;
        v1.head();


        return 0;
    }

