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

