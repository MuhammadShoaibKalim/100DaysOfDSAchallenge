#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    virtual void draw() const {
        cout << "Drawing shape." << endl;
    }
};

// Derived class 1
class Circle : public Shape {
public:
    void draw() const override {
        cout << "Drawing circle." << endl;
    }
};

// Derived class 2
class Rectangle : public Shape {
public:
    void draw() const override {
        cout << "Drawing rectangle." << endl;
    }
};

int main() {
    Circle circle;
    Rectangle rectangle;

    Shape *shape1 = &circle;
    Shape *shape2 = &rectangle;

    shape1->draw();   // Calls Circle's draw() dynamically
    shape2->draw();   // Calls Rectangle's draw() dynamically

    return 0;
}
