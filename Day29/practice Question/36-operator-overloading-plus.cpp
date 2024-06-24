#include <iostream>
using namespace std;
class Complex {
    public:
        double real;
        double img;
    public:
       Complex( double x=0, double y=0): real(x), img(y){}
    
    Complex operator + (const Complex& c) const
    {
                   return Complex(real + c.real + img + c.img);
    }
    void display() const {
                   cout<<real<<" + "<<img<<"i"<<endl;
    }   
};
int main() {
            
            Complex c1(10,2);
            Complex c2(3,10);

             Complex c3=c1+c2;
            c3.display();
     
    return 0;
}
