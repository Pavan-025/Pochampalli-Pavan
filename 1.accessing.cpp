#include<iostream>
#include<string>
using namespace std;
main()
{
string a("one two three");
cout<<a<<endl;
char y=a.at(4);
//int y=a.at(4);
cout<<y<<endl;
cout<<y<<endl;
cout<<a.substr(2,4)<<endl;
cout<<a.find_last_of('e')<<endl;
}


