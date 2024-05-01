#include<conio.h>
#include<iostream>
using namespace std;

class Movie
{
	private:
		char title[50];
		int  year;
		char director_name[50];
		public:
	 
	 void get_info();
	 void display()
	 {
	 	cout<<"\nmovie detials are";
	 	cout<<title<<year<<director_name;
			  }		 
};

void Movie ::get_info()
{
	cin>>title>>year>>director_name;
}

 main()
{
	Movie m1;
	m1.get_info();
	m1.display();
	
}
