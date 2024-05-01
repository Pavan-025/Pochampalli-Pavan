#include<iostream>
using namespace std;

class person
{
public:
    string name;
    int code;
    void get_data_1()
	 {
        cout << "\nEnter the name: ";
        cin >> name;
        cout << "\nEnter the code: ";
        cin >> code;
    }
    void display_1()
	 {
        cout << "\nName of the person is: " << name;
        cout << "\nCode of the person is:" << code;
    }
};

class account :virtual public person
{
public:
    int amount;
    void get_data_2() {
        cout << "\nEnter the amount: ";
        cin >> amount;
    }
    void display_2() {
        cout << "\nThe amount is:" << amount;
    }
};

class admin :virtual public person
{
public:
    int experience;
    void get_data_3()
	 {
        cout << "\nEnter the experience: ";
        cin >> experience;
    }
    void display_3()
	 {
        cout << "\nThe experience is:" << experience;
    }
};

class master: public account, public admin
{
	
};

int main()
 {
     class master m;
    
    m.get_data_1();
    m.get_data_2();
    m.get_data_3();
    m.display_1();
    m.display_2();
    m.display_3();
}
