#include<iostream>
using namespace std;
class shape
{
	public:
		virtual
	 void display()
	{
		cout<<"\n Drawing a shape";
	
	}
};
class circle :public shape
{
	public:
	void display()
	{
		cout<<"\n Drawing a cricle";
		
	 } 
};
class rectangle:public shape
{
	public:
		void display()
		{
			cout<<"\n Drawing a rectangle ";
		
		}
};
int main(){
	shape *s;
	circle c;
	rectangle r;
	s=&c;
	s->display();
	s=&r;
	s->display();
	
	

}
