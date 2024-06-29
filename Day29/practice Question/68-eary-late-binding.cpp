#include <iostream>
using namespace std;

class Base
{
public:
    void show()
    {
        cout << "Base class show function (Early Binding)" << endl;
    }
};

class Derived : public Base
{
public:
    void show()
    {
        cout << "Derived class show function (Early Binding)" << endl;
    }
};

int main()
{
    Base b;
    Derived d;
    
    b.show();
    d.show();
    

    return 0;
}
