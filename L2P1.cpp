#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
	int hours,hourly_wage,weekly_pay,gross_pay;
	int withholding,net_pay;
	cout<<"Enter the values";
	cin>>hours>>hourly_wage;
	weekly_pay=(40*hourly_wage)+((hours-40)*hourly_wage*1.5);
	cout<<"\weekly_pay is="<<weekly_pay;
	
	
	if(weekly_pay>1000)
	{
		withholding=weekly_pay*0.28;
	}
	else if(weekly_pay>600 && weekly_pay<1000)
	{
		withholding=weekly_pay*0.21;
	}
	else
	{
		withholding=weekly_pay*0.10;
	}
net_pay=weekly_pay-withholding;
cout<<"\n net_pay"<<net_pay;
cout<<"\nwithholding"<<withholding;	
	
}
