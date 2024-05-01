//Relational operators in strings
#include<iostream>
#include<iostream>
using namespace std;
main()
{
string s1("abc");
string s2("xyz");	
string s3=s1+s2;
if (s1!=s2)
cout<<"s1 is not equal to s2"<<endl;
	//if(s2>s1) if s3==s1+s2   
int x= s1.compare(s2);
if (x==0)
	cout<<"s1 and s2 are equal";
	else if( x>0)
	cout<<"s1 is greater than s2";
	else
	cout<<"si is smaller than s2";
	
}
