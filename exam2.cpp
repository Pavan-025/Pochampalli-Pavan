#include<iostream>
using namespace std;
class demo
{
	double real;
	double imaginary;
	public:
		complex(double r double i);
			real(r),
			imaginary(i){
			}
			complex operator+(const  complex&other)
		{
			return complex(real+other,real,imaginary+other,imaginary);
		}
		complex operator-(const comlex&other)
		{
			return complex(real-other,imaginary-other);
			
		}
		void display()
		{
			cout<<real<<"+"<<imaginary<<"i";
		}
};
int main()
{
	complex num1(3,4);complex num2(1,-2);
	complex sum = num1+num2;
	complex diff + num1-num2;
	cout<<"sum is:";
	sum.display();
	cout<<"difference:";
	diff.display();
}
