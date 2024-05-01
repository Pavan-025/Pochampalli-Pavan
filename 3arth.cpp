#include<iostream>
using namespace std;
main()
{
string s1("abc");
string s2("xyz");	
string s3=s1+s2;
cout<<s3<<endl;
string  s5;	// Using constructor with no arguments.
string s4("hello");	// Using one-argument constructor.
s5 = s4;		// Assigning string objects
s5 = "mmm" + s2;	// Concatenating strings
cout<<s4<<"  " <<s5<<endl;
s3 += s5 ;		// s3 = s3 + s1;
cout<<s3; 

}
