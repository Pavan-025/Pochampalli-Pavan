#include<iostream>
using namespace std;
main()//int main()
{
int hourly_wage,total_hours,witholding;
cout<<"\nenter the values";
cin>>hourly_wage>>total_hours>>witholding;
int weekly_pay=(hourly_wage*total_hours)-witholding;
cout<<"\nWeekly pay is "<<weekly_pay;
}
