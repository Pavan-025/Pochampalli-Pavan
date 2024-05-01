/*Bank Account Management System

You're tasked with creating a simple bank account management system in C++. 
Design a class called BankAccount to represent a bank account, with the following specifications:

Member Variables:
accountNumber: An integer representing the unique account number.
accountHolderName: A string representing the name of the account holder.
balance: A double representing the current balance in the account.
Constructor:
Define a constructor that initializes the accountNumber, accountHolderName, and balance when an object of the BankAccount class is created.
Member Functions:
deposit(double amount): A function that takes a double parameter amount and adds it to the account's balance.
withdraw(double amount): A function that takes a double parameter amount and subtracts it from the account's balance. Ensure that the withdrawal amount does not exceed the current balance.
displayAccountDetails(): A function that displays the account details including the account number, account holder name, and current balance.
Sample Usage:
Create objects of the BankAccount class and demonstrate the functionality by depositing and withdrawing amounts from the accounts, and displaying their details.
Implement the BankAccount class with the specified member variables and functions, and provide a sample usage of the class to demonstrate its functionality.*/
#include<iostream>
using namespace std;
class bankaccount
{
  public:
  	int accountnumber;
  	string acc_holder_name;
  	float balance;
  	public:
  		BankAccount()
  		{
  			cout<<"\nEnter the custmer details of the bankaccount holder ";
  			cin>>accountnumber;
  			cin>>acc_holder_name;
  		    cin>>balance;
		  }
		  void deposit(double amount)
		  {
		  	//cin>>amount;
		  	balance+=amount;
		  	cout<<"\nThe total balance in the account is:"<<balance;
		  }
		  void withdraw(double amount)
		  {
		  	//cin>>amount;
		  	balance-=amount;
		  	cout<<"\nThe balance in the acccount after the withdraw is:"<<balance;
		  }
		  void dis_Acc_details()
		  {
		  	cout<<"\nAccountnumber is:"<<accountnumber;
		  	cout<<"\nAccount holder name is:"<<acc_holder_name;
		  	cout<<"\nCurrent balance is:"<<balance;
		  }	
};
int main()
{
	bankaccount b;
	b.deposit(1000);
	b.withdraw(400);
	b.dis_Acc_details();
}
