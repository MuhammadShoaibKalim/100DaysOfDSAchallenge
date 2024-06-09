#include <iostream>
using namespace std;

double FindDiameter(double radius);
double FindCircumference(double radius);
double FindArea(double radius);

int main() {
    double radius;
    cout << "Enter the radius: ";
    cin >> radius;

    double diameter = FindDiameter(radius);
    double circumference = FindCircumference(radius);
    double area = FindArea(radius);

    cout << "The radius of the circle is: " << radius << endl;
    cout << "The diameter of the circle is: " << diameter << endl;
    cout << "The circumference of the circle is: " << circumference << endl;
    cout << "The area of the circle is: " << area << endl;

    return 0;
}

double FindDiameter(double r) {
    return 2 * r;
}

double FindCircumference(double r) {
    return 2 * 3.141592653589793 * r;
}

double FindArea(double r) {
    return 3.141592653589793 * r * r;
}
