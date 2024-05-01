#include<iostream>
using namespace std;
class Base
{
	private:
		int x;
		protected:
			int y;
			public:
				int z;
				void display()
				{
					cout<<x<<"\t"<<y<<"\t"<<z;
				}
};
class derived:public Base
{
	public:	
			x=10;//error
			y=20;//yes protected and can be used inside child
			z=30;//public
		
};
main()
{
	derived d;
	d.x=10;//error ,x is private
	d.y=20;//error,y is protected
	d.z=300;//allowed ,z is public
	d.display();//allowed because of inheritance
	
	
	
	
}
