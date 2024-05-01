#include<iostream> 
using namespace std; 
class Shape 
{ 
	public: 
		int width;
		int height; 
		void getdata() 
		{ 
			cout<<"\nEnter the two values"; 
			cin>>width>>height; 
		} 
		virtual void display_area() 
		{ 
			cout<<"shape class"; 
		} 
}; 
class triangle:public Shape 
{ 
	public: 
		void display_area() 
		{
		double a; 
		a=0.5*width*height; 
			cout<<"\nArea of Triangle is"<<a; 
		} 
}; 
class Rectangle:public Shape 
{ 
	public: 
		void display_area() 
		{ 
			int a=width*height; 
			cout<<"\nArea of Rectangle is "<<a; 
		} 
}; 
main() 
{ 
	Shape *ptr; 
	triangle t; 
	Rectangle r; 	 
ptr=&t; 
ptr=&r;
ptr->getdata(); 
ptr->display_area(); 
ptr->getdata(); 
ptr->display_area(); 
}
