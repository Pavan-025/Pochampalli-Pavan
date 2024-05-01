//single level inheritance
#include<iostream>
using namespace std;
class Vehicle
{public:
	int number_of_wheels;
	
	public:
		Vehicle()
		{
			cout<<"\nI m Vehicle";
		}
		
};
class Bike:public Vehicle
{
	public:
		
		Bike()
		{
			number_of_wheels=2;
			cout<<"\nI m two wheeler";
		}
		void show()
		{
			cout<<number_of_wheels;
		}
};
main()
{
	Bike b;
	b.show();
}
