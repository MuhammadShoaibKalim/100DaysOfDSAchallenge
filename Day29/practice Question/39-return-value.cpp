#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    // Overloading the + operator to add two Complex objects
    Complex operator + (const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    // Overloading the * operator to multiply two Complex objects
    Complex operator * (const Complex& other) const {
        return Complex(real * other.real - imag * other.imag, real * other.imag + imag * other.real);
    }

    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(2, 3);
    Complex c2(4, 5);

    // Adding two complex numbers
    Complex resultAdd = c1 + c2;
    cout << "Addition result: ";
    resultAdd.display();

    // Multiplying two complex numbers
    Complex resultMul = c1 * c2;
    cout << "Multiplication result: ";
    resultMul.display();

    return 0;
}
