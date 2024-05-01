/*Imagine a publishing company that markets both book and audiocassette versions 
of its works. Create a class publication that stores the title (a string) and price (type float) of a
 publication. From this class derive classe: book, which adds a page count (type int),
Tape inherited from book, which adds a playing time in minutes (type float). 
Each of these three classes should have a getdata() function to get its data from the user 
at the keyboard, and a putdata() function to display its data. Write a main() program to test the book and tape
 classes by creating instances of them, asking the user to fill
 in data with getdata(), and then displaying the data with putdata()*/
#include<iostream>
using namespace std;
class publication
{
	public:
		string title;
		float price;
		public:
		void get_data()
		{
			cout<<"\n enter the title of the book:";
			cin>>title;
			cout<<"\n enter the price of the book:";
			cin>>price;
		}
		void put_data()
		{
			cout<<"title:"<<title;
			cout<<"price:"<<price;
		}
};
class book:public publication
{
	public:
		int page_count;
		public:
			void get_data()
			{
				cout<<"\n enter the page_count:";
				cin>>page_count;
			}
	void put_data()
	{
		cout<<"page_cont:"<<page_count;
	}
};
class tape:public book
{
public:
		float play_time;
		public:
			void get_data()
			{
				cout<<"\n enter the play_time:";
				cin>>play_time;
			}
	void put_data()
	{
		cout<<"play_time:"<<play_time;
	}
	
};
int main()
{
	class book b;


b.get_data();
b.put_data();

b.get_data();
b.put_data();
class tape t;
t.get_data();
t.put_data();	
}
