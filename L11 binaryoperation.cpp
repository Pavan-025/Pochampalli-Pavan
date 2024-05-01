//Create a class called time that has separate int member data for hours, minutes, and seconds. One constructor should initialize this data to 0, and another should initialize it to fixed values. Another member function should display it, in 11:59:59 format and the overloaded + operator to add two times should add two objects of type time passed as arguments.
//A main() program should create two initialized time objects and one that isn’t initialized. Then it should add the two objects together, leaving the
//result in the third time object Finally it should display the value of this third object
#include<iostream>
using namespace std;
class time
{
int hrs;
int mins;
int sec;
public:
	time()
{
	hrs=0;
	mins=0;
	sec=0;
	}
	time(int h,int m,int s)	
	{
		hrs=h;
		mins=m;
		sec=s;
	}
	time operator+(time tm2)
	{
		time 	temp;
		temp.hrs=hrs+tm2.hrs;
		temp.mins=mins+tm2.mins;
		temp.sec=sec+tm2.sec;
		cout<<temp.hrs<<":"<<temp.mins<<":"<<temp.sec;
	
	}

	};
	int main()
	{
		time t1(11,28,04);
		time t2(10,00,00);
		time t3;
	t3=t1+t2;
	
	}
	
