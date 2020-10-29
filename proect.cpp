#include <iostream>
#include <string>

using namespace std;

string name;

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

class Regestr
{
protected:
    string x;
    string y;
    
    int ID=0;
    
    
public:
   
    static int count;

    Regestr()
    {
        
        count++;
        ID == count;
        cout << "It is regestration\nThink up your login and password" << endl;
        cin >> this->x >> this->y;
        string login = x;
        string password = y;
    }
   
    virtual void menu() {} 
};

int Regestr::count = 0;

class Menu :public Regestr
{
public:
    

   
        void menu() override
        {
            int a;
            string login, password;

                cout << "You are now the in main menu\nEnter your login and password to continue" << endl;
                cin >> login >> password;
                if (this->x == login && this->y == password)
                {
                    cout << "You are logged as a user\n\n1.Find out information about yourself" << endl;
                    
                    cin >> a;

                    switch (a)
                    {
                    case 1: 
                        cout << "Your profile: \nID = " << ID << endl;
                    }
                }

               
        
               /* if (login = this->x, this->x = "666" && y == password, password == "666")
                {
                    cout << "Good, admin" << endl;
                }*/


                else
                {
                    cout << "Error" << endl;
                }

        }
};


class admin :public Regestr
{
public:
    void menu() override
    {
        int a;
        string login, password;
        cout << "You are now the in main menu\nEnter your login and password to continue" << endl;
        cin >> login >> password;
        if (x == login, login == "666" && y == password, password == "666")
        {
            cout << "Good, admin" << endl;
        }


       /* if (x != login && y != password)
        {
            cout << "Error, admin" << endl;
    }*/
        else 
        {
            cout << "Error, admin" << endl;
        }
    }
};

class Display :public Regestr
{
public:
    void print(Regestr *foo)
    {
        foo->menu();
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
    Menu menu;
    menu.menu();
    return 0;
}

