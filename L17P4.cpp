/*write a programm to declare an array of size 10 and enter the values 
now ask the user the index number whose values it want to check and 
throw the expecton if he index number is out side the range of array*/
#include<iostream>
using namespace std;
int main()
{
	int a[10],i;
	for(i=0;i<10;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter the index position to check";
	try
	{
		int index;
		cin>>index;
		if(index<0||index>=10)
		{
			throw 2;
		}
		else
		{
			cout<<"the value entered is found in the array";
		}
	}
	catch(int b)
	{
		cout<<"the value entered in not found in the given array";
	}
}
