#include <iostream>
using namespace std;

class time 
{
    int hours;
    int min;

public:
    time(int h, int m)
	 {
        hours = h;
        min = m;
    }
    
    time()
	 {
        hours = 0;
        min = 0;
    }

    time(int m) 
	{
        hours = m / 60;
        min = m % 60;
    }

    void display()
	 {
        cout << hours << ":" << min;	
    }

    operator int()
	 {
        int x;
        x = hours * 60 + min;
        return x;
    }
};

int main()
 {
    time t1(10, 20);
    time t2;
    int m = 90;
    t2 = m; // basic to class type conversion
    t2.display();
    m = t1; // class to basic conversion
    cout<<"\n";
	cout <<m;
    return 0;
}

