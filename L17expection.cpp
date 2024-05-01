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
cout<<"\nend of program";
}
