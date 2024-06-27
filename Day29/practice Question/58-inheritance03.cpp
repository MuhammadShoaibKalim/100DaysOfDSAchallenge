#include <iostream>
using namespace std;

class Engine {
public:
    void start() {
        cout << "Engine starts" << endl;
    }
};

class Wheels {
public:
    void rotate() {
        cout << "Wheels rotate" << endl;
    }
};

class Car : public Engine, public Wheels {
public:
    void drive() {
        cout << "Car drives" << endl;
    }
};

int main() {
    Car car;
    car.start(); 
    car.rotate();
    car.drive(); 
    return 0;
}
