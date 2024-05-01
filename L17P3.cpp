/*WRITE A PROGRAM TO FIND IF A PERSON IS VALID TO VOTE OR NOT,IF LESS THEN 18 SHOULD ARISE AND EXCEPTION STATING NOT VALID*/
#include<iostream>
using namespace std;
main()
{
	int age;
	cout<<"\n Enter the age of the voter";
	cin>>age;
	try
	{
	if (age>=18)
	cout<<"valid to vote";
	else
	throw 10;
	}
	catch(int)
	{
		cout<<"thanks";
	}
}









