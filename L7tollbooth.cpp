/*Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a 100/-
 toll. Mostly they do, but sometimes a car goes by without paying. The tollbooth keeps
 track of the number of cars that have gone by, and of the total amount of money collected.
  Model this tollbooth with a class called tollBooth. The two data items are a type
  int to hold the total number of cars, and a type double to hold the total amount
 of money collected. A constructor initializes both of these to 0. A member function called
 payingCar() increments the car total and adds 100/- to the cash total. Another function,
 called nopayCar(), increments the car total but adds nothing to the cash total. Finally, a
 member function called display() displays the two totals. Make appropriate member
 functions const.*/
 
 #include <iostream>
 using namespace std;

class TollBooth 
{
private:
    int totalCars;
    double totalMoney;

public:
    TollBooth() : totalCars(0), totalMoney(0.0) {}

    void payingCar() {
        totalCars++;
        totalMoney += 100.0;
    }

    void nopayCar() {
        totalCars++;
    }

    void display() const {
        std::cout << "Total Cars: " << totalCars << std::endl;
        std::cout << "Total Money:rupee" << totalMoney << std::endl;
    }
};

int main() 
{
    TollBooth booth;

    booth.payingCar();
    booth.payingCar();
    booth.nopayCar();
    booth.payingCar();

    booth.display();

    return 0;
}

