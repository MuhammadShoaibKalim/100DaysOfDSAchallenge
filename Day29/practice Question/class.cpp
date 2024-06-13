#include <iostream>
#include <string>
using namespace std;

class my_class
{

public:
    int marks;
    string name;

public:
    void get_marks();
    void show_marks()
    {
        cout << "The marks of student: " << marks << endl;
        cout << "The name of student: " << name << endl;
    }
};

void my_class::get_marks()
{
     cout<<" Enter marks of student :";
    cin>>marks;
    cout<<" Enter name of student :";
    cin>>name;
}

int main()
{
    my_class class_object;
    // class_object.marks = 450;
    // class_object.name = " Ali khan ";

    class_object.get_marks();
    class_object.show_marks();
    return 0;
}
