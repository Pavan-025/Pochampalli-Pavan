#include<iostream>
using namespace std;
struct phone
{
	int areacode;
	int exchange;
	int number;
};
main()
{
phone n1,n2;
n1.areacode=212;
n1.exchange=767;
n1.number=8900;
cout<<"\nenter the phone number for n2";
cin>>n2.areacode>>n2.exchange>>n2.number;
//information dispay

	cout<<"\narea code=="<<n1.areacode<<"\nexchange== "<<n1.exchange<<"\nnumber--"<<n1.number;
    cout<<"\narea code=="<<n2.areacode<<"\nexchange== "<<n2.exchange<<"\nnumber--"<<n2.number;


}
