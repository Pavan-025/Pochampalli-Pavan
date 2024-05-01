#include<iostream>
using namespace std;

class Figure 
{
private:
    int side;
    int length;
    int breadth;
    int radius;
    float pi;

public:
    // Default constructor
    Figure() 
	{
        side = 20;
        length = 10;
        breadth = 14;
        radius = 6;
        pi = 3.14; 
    }

    // Parameterized constructor
    Figure(int s, int l, int b, int r, float p = 3.14)
	 {
        side = s;
        length = l;
        breadth = b;
        radius = r;
        pi = p;    
    }
    
    // Calculate area of square
    void area_of_square() 
	{
        int square = side * side;
        cout << "\n Area of square is: " << square;
    }
    
    // Calculate area of circle
    void area_of_circle()
	 {
        int circle = pi * radius * radius;
        cout << "\n Area of circle is: " << circle;
    }
    
    // Calculate area of rectangle
    void area_of_rectangle() 
	{
        int rectangle = length * breadth;
        cout << " \n Area of rectangle is: " << rectangle;
    }
};

int main() 
{
    Figure f1;
    f1.area_of_square();
    f1.area_of_circle();
    f1.area_of_rectangle();
    
    Figure f2(4, 5, 6, 7, 3.14);
    f2.area_of_square();
    f2.area_of_circle();
    f2.area_of_rectangle();
    
}

