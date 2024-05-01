#include<iostream>
using namespace std;
main()
{
	int a,b,c;
	cout<<"\nenter a and b";
	cin>>a>>b;
	try
	{
	
	if(b==0)
	throw 'a';
	else if(b<0)
	throw 10;
	else
	{
		c=a/b;
	
	cout<<"\nresult is"<<c;
}
}
catch(char)
{
	cout<<"\nenter the value of B again it cant be zero";
}
catch(int a)
{
	cout<<"\nenter positive value of B";
}
cout<<"\nend of program";
}
