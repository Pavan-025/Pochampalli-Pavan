#include<iostream>
#include<string>
using namespace std;
void display(string str )
{
cout<<" size "<<str.size()<<endl;
cout<<" length "<<str.length()<<endl;
cout<<"capacity "<<str.capacity()<<endl;
cout<<" max size "<<str.max_size()<<endl;
cout<<(str.empty() ? "yes":"no")<<endl;
cout<<" substrig find  "<<str.find("4")<<endl;
cout<<" assign new value "<<str.assign("abcd")<<endl;
cout<<" new value assined "<<str<<endl;
cout<<" erase "<<str.erase(2,2)<<endl;
cout<<" size "<<str.size()<<endl;
cout<<" length "<<str.length()<<endl;
cout<<"capacity "<<str.capacity()<<endl;
cout<<" max size "<<str.max_size()<<endl;
}
main()
{
string str1  ;  //creating null string //("1234");
str1="1234";   //
display(str1);
}
