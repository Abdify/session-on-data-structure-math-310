#include <iostream>

using namespace std;

class Car {
   public:
    int speed;
    int date;
    string color;
    float weight;
    int* ptr;
};

int main() {
    // create static instance
    int num = 5;
    Car myCar;
    // create dynamic instance
    Car* myCar2 = new Car();
    Car* myCar3 = new Car();

    // assign/access data
    myCar.speed = 200;
    myCar2->speed = 250;  // arrow operator

    return 0;
}