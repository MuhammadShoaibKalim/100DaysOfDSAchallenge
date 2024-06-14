#include <iostream>
using namespace std;

class Car {
private:
    string make;
    string model;
    int year;

public:
    void setMake(string m) {
        make = m;
    }
    string getMake() const {
        return make;
    }
    
    void setModel(string m) {
        model = m;
    }
    string getModel() const {
        return model;
    }
    
    void setYear(int y) {
        year = y;
    }
    int getYear() const {
        return year;
    }
    
    void printDetails() const {
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    Car car;
    car.setMake("Toyota");
    car.setModel("Camry");
    car.setYear(2021);
    
    car.printDetails();
    
    return 0;
}
