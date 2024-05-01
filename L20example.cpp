#include<iostream>
using namespace std;
class BugWarrior
{
	public:
	virtual	void attack()=0;
	   virtual void defend()=0;
};
class KnightWarrior:public BugWarrior
{
	public:
void attack()
   {
	cout<<"\n knight warrior attack with bug warrior:";
	}
	void defend()
	{
	cout<<"\n knight warrior defend with bug warrior:";	
	}
		
};
class WizardWarrior:public BugWarrior
{
	public:
void attack()
   {
	cout<<"\n wizard warrior attack with bug warrior:";
	}
	void defend()
	{
	cout<<"\n wizard warrior defend with bug warrior:";	
	}	
};
int main()
{
	KnightWarrior k;
	WizardWarrior w;
	k.attack();
	k.defend();
	w.attack();
	w.defend();
	
	
	/*BugWarrior *b;
	KnightWarrior k;
	WizardWarrior w;
	b=&k;
	b->attack();
	b->defend();
	b=&w;
	b->attack();
	b->defend();*/
	
}
