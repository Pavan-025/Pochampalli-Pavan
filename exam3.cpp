#include<iostream>
using namespace std;
class comp_num
{
	public:
		int a;
		int b;
		public :
			comp_num()
			{
				a=2;
				b=4;
			}
			comp_num(int x,int y)
			{
				a=x;
				b=y;
			}
			comp_num operator +(comp_num cn1)
			{
				comp_num comp;
				comp.a=a+cn1.a;
				comp.b=b+cn1.b;
				cout<<"\nthe subtraction of two imaginary numbers are:"<<comp.a<<" j"<<comp.b;
			}
			comp_num operator -(comp_num cn2)
			{
				comp_num comp1;
				comp1.a=a-cn2.a;
				comp1.b=b-cn2.b;
				cout<<"\nthe subtraction of two imaginary numbers are:"<<comp1.a<<" j"<<comp1.b;
			}
};
int main()
{
	comp_num c1(4,2);
	comp_num c2(4,1);
	comp_num c;
	c=c1+c2;
	comp_num c4(4,2);
	comp_num c5(1,3);
	comp_num c6;
	c6=c4-c5;
}
