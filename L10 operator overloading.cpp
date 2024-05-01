//SHOWING THE OVERLODING OF PREFIX AND POSTFIX INCREMENT OPERATORS
#include<iostream>
#include<conio.h>
class score 
{
      private:
              int val;
              public:
                     score()
                     {
                            val=0;
                            }
                            score operator++() //prefix overloded operator function
                            {
                                  cout<<"\nI am prefix\n";
                                 score temp;
                                 val=val+2;
                                 temp.val=val;
                                // void show()
                                // {
                                 return temp;
                                 }
                                 score operator++(int) //postfix overloded operator function
                                 {
                                   cout<<"\nI am Postfix\n";
                                   score temp;
                                 val=val+1;
                                 temp.val=val;
                                 return temp;
                                 } 
                                       
  //THE PREFIX VERSION OF OVERLODED INCREMENT OPERATOR FUNCTION TAKES NO PARAMETER WHILE 
  //POSTFIX VERSION OF OVERLODED INCREMENT OPERATOR FUNCTION TAKES UNUSED PARAMETER OF TYPE INT
                                 
                                 
                                 int show()
                                 {
                                     return(val);
                                     }
                                     };
                                     int main()
                                     {
                                         score s1,s2;
                                         cout<<"\nInitial value of s1 object = "<<s1.show();
                                         cout<<"\nInitial value of s2 object = "<<s2.show();
                                     //    s2=++s1;
                                       //  cout<<"\nvalue of s1 is = "<<s1.show();
                                         //cout<<"\n"<<s2.show();
                                         //cout<<"\nvalue of s2 after prefix operation = "<<s2.show();
                                         //s2=s1++;
                                         s2++;
                                         ++s1;
                                         cout<<"\n"<<s2.show();
                                         cout<<"\nvalue of s1 is = "<<s1.show();
                                         cout<<"\nvalue of s2 after postfix operation ="<<s2.show();
                                        
                                    
                                         }
