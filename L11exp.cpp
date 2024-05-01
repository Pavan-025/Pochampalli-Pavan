/*Assume that a bank maintains savings accounts for 
customers. The savings account provides an interest 
and withdrawal facility.
Create a class account that stores the customer name,
and account number and from this derive a savings account
 to make it more specific to its requirement.
Include necessary member functions to achieve the following task
a)accept the deposit from the customer and update the balance
b)display the balance
c)compute interest
d)deposit interest*/
#include<iostream>
using namespace std;
class Account
{
	protected:
		int acc_number;
		string name;
		int balance;
		public:
			void get_data()
			{
				cout<<"\nenter acc_number,name and deposit";
				cin>>acc_number>>name>>balance;
			}
};
class savings:public Account
{
	int withdraw;
	int time;
	int interest;
	int deposit;
	
	int rate;
	
	public:
		void show_balance()
		{
			cout<<"\nthe amount is"<<balance;
		}
		void deposit1()
		{
			cout<<"\nenter the deposit";
			cin>>deposit;
			balance+=deposit;
		}
		void withdraw1()
		{
			cout<<"\nEnter the amount you want to withdraw";
			cin>>withdraw;
			balance-=withdraw;
		}
		void interest1()
		{cout<<"\n enter the time and rate of intrest";
		cin>>time>>rate;
			int i=(balance*time*rate)/100;
			balance+=i;
		}
};
main()
{
	savings s;
	s.get_data();
	s.show_balance();
	s.deposit1();
	s.show_balance();
	s.withdraw1();
	s.show_balance();
	s.interest1();
	s.show_balance();
}
