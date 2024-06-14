#include <iostream>
using namespace std;

class Rectangle {
private:
    double width;
    double height;

public:
    void setWidth(double w) {
        width = w;
    }
    double getWidth() const {
        return width;
    }
    
    void setHeight(double h) {
        height = h;
    }
    double getHeight() const {
        return height;
    }
    
    double getArea() const {
        return width * height;
    }
    
    double getPerimeter() const {
        return 2 * (width + height);
    }
};

int main() {
    Rectangle rect;
    rect.setWidth(5.0);
    rect.setHeight(3.0);
    
    cout << "Width: " << rect.getWidth() << endl;
    cout << "Height: " << rect.getHeight() << endl;
    cout << "Area: " << rect.getArea() << endl;
    cout << "Perimeter: " << rect.getPerimeter() << endl;
    
    return 0;
}
