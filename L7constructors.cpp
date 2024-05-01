#include<iostream>
using namespace std;
class demo
{ 
static int count;
int number;
	public:
		demo()
		{
		number=0;	
			count++;
			number++;
		}
		/*void number()
		{
			
			count++;
		}*/
		void display()
		{
			cout<<"\ncount--"<<count<<"\nnumber="<<number;
		}
	};
	int demo:: count=0;
	main()
	{
		demo d;//,d1,d2;
	//	d.number();
	//	d1.number();
	//	d2.number();
		d.display();//count  number
		demo d1;
		
		d1.display();
		demo d2;
		d2.display();
	}
