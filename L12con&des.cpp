//order of execution for bconstructor(from base to child)
//for desgructor(from child to base)
#include<iostream>
using namespace std;
class Base
{
	public:
		Base()
		{
			cout<<"\nI m base";
		}
		~Base()
		{
			cout<<"\n Base deleted";
		}
};
class Child:public Base
{
	public:
		Child()
		{
			cout<<"\ni m child";
		}
		~Child()
		{
			cout<<"\nChild destroyed";
		}
};
main()
{
	Child c;
	cout<<"\nend of program";
}
