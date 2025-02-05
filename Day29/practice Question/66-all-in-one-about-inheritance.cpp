//single inheritance

#include <iostream>
using namespace std;

class Base {
public:
    void display() {
        cout << "Base class display function" << endl;
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived class show function" << endl;
    }
};

int main() {
    Derived d;
    d.display();
    d.show();
    return 0;
}

//Multiple inheritance

#include <iostream>
using namespace std;

class Base1 {
public:
    void display() {
        cout << "Base1 class display function" << endl;
    }
};

class Base2 {
public:
    void show() {
        cout << "Base2 class show function" << endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    void print() {
        cout << "Derived class print function" << endl;
    }
};

int main() {
    Derived d;
    d.display();
    d.show();
    d.print();
    return 0;
}

//Multilevel inheritance
#include <iostream>
using namespace std;

class Base {
public:
    void display() {
        cout << "Base class display function" << endl;
    }
};

class Intermediate : public Base {
public:
    void show() {
        cout << "Intermediate class show function" << endl;
    }
};

class Derived : public Intermediate {
public:
    void print() {
        cout << "Derived class print function" << endl;
    }
};

int main() {
    Derived d;
    d.display();
    d.show();
    d.print();
    return 0;
}

// Hierarchical Inheritance

#include <iostream>
using namespace std;

class Base {
public:
    void display() {
        cout << "Base class display function" << endl;
    }
};

class Derived1 : public Base {
public:
    void show() {
        cout << "Derived1 class show function" << endl;
    }
};

class Derived2 : public Base {
public:
    void print() {
        cout << "Derived2 class print function" << endl;
    }
};

int main() {
    Derived1 d1;
    Derived2 d2;
    d1.display();
    d1.show();
    d2.display();
    d2.print();
    return 0;
}

//Hybrid inheritance
#include <iostream>
using namespace std;

class Base {
public:
    void display() {
        cout << "Base class display function" << endl;
    }
};

class Intermediate1 : public Base {
public:
    void show() {
        cout << "Intermediate1 class show function" << endl;
    }
};

class Intermediate2 : public Base {
public:
    void print() {
        cout << "Intermediate2 class print function" << endl;
    }
};

class Derived : public Intermediate1, public Intermediate2 {
public:
    void displayAll() {
        cout << "Derived class displayAll function" << endl;
    }
};

int main() {
    Derived d;
    d.display();
    d.show();
    d.print();
    d.displayAll();
    return 0;
}

//Virtual function/override

#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() {
        cout << "Base class display function" << endl;
    }
};

class Derived : public Base {
public:
    void display() override {
        cout << "Derived class display function" << endl;
    }
};

int main() {
    Base* b;
    Derived d;
    b = &d;
    b->display();
    return 0;
}


//Eary Binding

#include <iostream>
using namespace std;

class Base {
public:
    void display() {
        cout << "Base class display function" << endl;
    }
};

class Derived : public Base {
public:
    void display() {
        cout << "Derived class display function" << endl;
    }
};

int main() {
    Base b;
    Derived d;
    b.display();
    d.display();
    return 0;
}

//Late Binding
#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() {
        cout << "Base class display function" << endl;
    }
};

class Derived : public Base {
public:
    void display() override {
        cout << "Derived class display function" << endl;
    }
};

int main() {
    Base* b;
    Derived d;
    b = &d;
    b->display();
    return 0;
}

//Polymerphism
#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing Shape" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

class Square : public Shape {
public:
    void draw() override {
        cout << "Drawing Square" << endl;
    }
};

int main() {
    Shape* shape;
    Circle circle;
    Square square;

    shape = &circle;
    shape->draw();

    shape = &square;
    shape->draw();

    return 0;
}


//function override 
#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() {
        cout << "Base class display function" << endl;
    }
};

class Derived : public Base {
public:
    void display() override {
        cout << "Derived class display function" << endl;
    }
};

int main() {
    Base b;
    Derived d;

    b.display();
    d.display();

    Base* basePtr = &d;
    basePtr->display();

    return 0;
}

//Late Binding
#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() {
        cout << "Base class display function" << endl;
    }
};

class Derived : public Base {
public:
    void display() override {
        cout << "Derived class display function" << endl;
    }
};

int main() {
    Base b;
    Derived d;

    b.display(); // Calls Base::display()
    d.display(); // Calls Derived::display()

    Base* basePtr = &d;
    basePtr->display(); // Calls Derived::display() due to late binding

    return 0;
}
