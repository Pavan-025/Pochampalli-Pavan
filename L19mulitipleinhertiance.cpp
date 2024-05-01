/*You are given a base class Animal with a virtual function speak() that prints a message indicating the sound the animal makes. You need to create three derived classes: Dog, Cat, and Cow, such that:

Dog class should inherit from Animal and override the speak() method to print "Woof".
Cat class should inherit from Animal and override the speak() method to print "Meow".
Cow class should inherit from Animal and override the speak() method to print "Moo".
Additionally, you need to implement a function makeSpeak(Animal *animal) that takes a pointer to an Animal object as input and calls the speak() method of that object.

Input Format
The input consists of multiple lines, each containing a string representing the type of animal.

Output Format
For each animal type, print the sound it makes according to the description above.

Sample Input
Dog
Cat
Cow
Sample Output

Woof
Meow
Moo
Explanation
For the given input, the makeSpeak() function is called with pointers to objects of Dog, Cat, and Cow classes. When speak() method is invoked for each object, it prints the sound the corresponding animal makes.

Constraints
The input animal types are limited to "Dog", "Cat", and "Cow".
This problem evaluates the understanding of multilevel inheritance, polymorphism, and virtual functions in C++.*/
#include<iostream>
using namespace std;

class animal {
public:
    virtual void speak()
	 {
        // Default implementation does nothing
    }
};

class dog : public animal 
{
public:
    void speak()
	 {
        cout << "\nWoof";
    }
};

class cat : public animal
 {
public:
    void speak()  
	{
        cout << "\nMeow";
    }
};

class cow : public animal
 {
public:
    void speak() 
	 {
        cout << "\nMoo";
    }
};

int main() 
{
    animal *ptr;
    dog d; 
    cat c;
    cow e;
    ptr = &d;
    ptr->speak();

    ptr = &c;
    ptr->speak();

    ptr = &e;
    ptr->speak();

}

