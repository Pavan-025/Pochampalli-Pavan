/*Assume that a bank maintains savings accounts for customers. The savings account provides an interest and withdrawal facility.
Create a class account that stores the customer name, and account number and from this derive a savings account to make it more specific to its requirement.
Include necessary member functions to achieve the following task
a)accept the deposit from the customer and update the balance
b)display the balance
c)compute interest
d)deposit interest*/

#include<iostream>
using namespace std;

class Account
{
	public:
	string cus_name;
	int Acc_number;
	float deposite;
	float balance;
	int withdraw;
	int time;
	int rate_of_interst;
	float intrest_calculation;
	public:
		void get_data()
		{
			cout<<"\nEnter the name of custmer:";
			cin>>cus_name;
			cout<<"\nEnter the account number:";
			cin>>Acc_number;
		}
		void time_m()
		{
		  cout<<"\nEnter the date of money deposit:";
		  	cin>>time;
		}
		void intrest()
		{
			cout<<"\nEnter the rate of intrest of the bank:";
			cin>>rate_of_interst;
		}
	
	
};
class Savings_Account: public Account
{
	public:
	void balance_deposite()
	{
		cin>>deposite;
		balance+=deposite;
		cout<<"\nUpdated ammount  in the account as of now is :"<<deposite;
	
	}
	void withdraw1()
	{
		cout<<"\nEnter the withdrawl ammount:";
		cin>>withdraw;
		balance-=withdraw;
		cout<<"\nbalance after withdraw:"<<balance;
	}

	void intrest()
	{
		intrest_calculation=balance*time*rate_of_interst/100;
	}
	void display(){
		cout<<intrest_calculation;
	}
};
int main()
{
	class Savings_Account S;
	S.get_data();
	S.time_m();
	S.intrest();
	S.balance_deposite();
	S.withdraw1();
	S.intrest();
	S.display();
	
}
