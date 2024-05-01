#include<iostream>
using namespace std;
class figure
{
	int length,breadth,side,radius;
	double pie;
	public:
		figure()
		{
			length=2;
			breadth=2;
			side=4;
			radius=4;
			pie=3.14;
		}
		figure(int l,int b,int s,int r,double p=3.14)
		{
			length=l;
			breadth=b;
			side=s;
			radius=r;
			pie=p;
		}
		void area_square()
		{
			cout<<"\narea of sqare="<<side*side;
		}
		void area_rect()
		{
			cout<<"\narea of rect= "<<length*breadth;
		}
		void area_circle()
		{
			cout<<"\narea of circle= "<<pie*radius*radius;
		}
		};
		main()
		{
			figure f1;
			f1.area_square();
			f1.area_rect();
			f1.area_circle();
			figure f2(4,4,2,2,7.14);
			f2.area_circle();
			f2.area_rect();
			f2.area_square();
			cout<<"\n";
			figure f3(4,4,2,2);
			f3.area_circle();
			f3.area_rect();
			f3.area_square();
		}
