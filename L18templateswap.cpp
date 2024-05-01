#include<iostream>
using namespace std;

template<class T>
 void swap_values(T &m,T &n)
{
	T temp =m;
	m=n;
	n=temp;
}
int main()
{
	int a,b;
	float x,y;
	cin>>a>>b>>x>>y;
	swap_values(a,b);
	swap_values(x,y);
	cout<<a<<"\n"<<b;
	cout<<"\n"<<x<<"\n"<<y;
}
