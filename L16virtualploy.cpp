/*Imagine a publishing company that markets both book and
 audiocassette versions of its
works. Create a class publication that stores the title
 (a string) and price (type float)
of a publication. 
From this class derive two classes: book, which adds a page count (type
int), and tape, which adds a playing time in minutes (type float).
 Each of these three
classes should have a getdata() function to get its
 data from the user at the keyboard,
and a putdata() function to display its data.
getdata()and putdata must be pure virtual function in base class.
Write a main() program to test the book and tape classes by creating instances of them,
asking the user to fill in data with getdata(), and then displaying the data with putdata().*/
#include<iostream>
using namespace std;
class publication
{
public:
string title;
float  price;
public:
 virtual void get_data()=0;
 virtual void put_data()=0;
};
class book:public publication
{
	public:
		int page_count;
		public:
		void get_data()
			{
				cout<<"\n enter the tittle and price of the book:";
				cin>>title;
				cin>>price;
				cout<<"\n enter the page count:";
				cin>>page_count;
			}
			void put_data()
			{
				cout<<"\ntitle="<<title<<"\nprice="<<price;
				cout<<"\npage count="<<page_count;
			}
};
class tape:public publication
{
	public:
		float playtime;
		public:
			void get_data()
			{
				cout<<"\n enter the play time:";
				cin>>playtime;
			}
			void put_data()
			{
				cout<<"\nplaytime="<<playtime;
				
			}
};
main()
{
	publication *ptr;
	book b;
	tape t;
	ptr=&b;
	ptr->get_data();
	ptr->put_data();
	ptr=&t;
	ptr->get_data();
	ptr->put_data();
}
