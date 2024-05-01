/*Imagine a publishing company that markets both book and audiocassette versions of its
 works. Create a class publication that stores the title (a string) and price (type float)
 of a publication. From this class derive two classes: book, which adds a page count (type
 int), and tape, which adds a playing time in minutes (type float). Each of these three
 classes should have a getdata() function to get its data from the user at the keyboard,
 and a putdata() function to display its data.
 Write a main() program to test the book and tape classes by creating instances of them,
 asking the user to fill in data with getdata(), and then displaying the data with putdata().*/
 
 #include<iostream>
using namespace std;

class publication
 {
public:
    string title;
    float price;

    void getdata() 
	{
        cout << "Enter title of the publication: ";
        cin >> title;
        cout << "Enter price of the publication: ";
        cin >> price;
    }

    void putdata() {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }
};

class book : public publication
 {
public:
    int pagecount;

    void getdata() 
	{
        publication::getdata(); // Call base class getdata() to get title and price
        cout << "Enter number of pages in the book: ";
        cin >> pagecount;
    }

    void putdata() 
	{
        publication::putdata(); // Call base class putdata() to display title and price
        cout << "Page Count: " << pagecount << endl;
    }
};

class tape : public publication
 {
public:
    float playing_time;

    void getdata()
	 {
        publication::getdata(); // Call base class getdata() to get title and price
        cout << "Enter playing time of the tape (in minutes): ";
        cin >> playing_time;
    }

    void putdata()
	 {
        publication::putdata(); // Call base class putdata() to display title and price
        cout << "Playing Time: " << playing_time << " minutes" << endl;
    }
};

int main()
 {
    book b;
    tape t;

    cout << "Enter data for the book:\n";
    b.getdata();

    cout << "\nEnter data for the tape:\n";
    t.getdata();

    cout << "\nDisplaying book information:\n";
    b.putdata();

    cout << "\nDisplaying tape information:\n";
    t.putdata();

    return 0;
}
