/*
Write a program with a mother class Animal.
Inside it defines an age and name and set_value
function.Write two child classes zebra and dolphin
show the information of zebra and dolphin age and
the name. Then two bases object Zebra and Dolphin  
which write a message telling the age and name give 
some extra information (e.g place of origin)

*/

#include <iostream>
using namespace std;
class Animal {
    private:
        int age;
        string name;
    public:
        void set_value(int a, string n) {
            age = a;
            name = n;
        }
        void show() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }    
};
class Zebra :public Animal{
    public:
        void show() {
            cout << "Zebra is from Africa" << endl;
        }
};
class Dolphin :public Animal{
    public:
        void show() {
            cout << "Dolphin is from Ocean" << endl;
        }
};
int main() {
      

    
    return 0;
}
