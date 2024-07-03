/*
Write a class name Teacher having attributes teacher_name, teacher_age,
teacher_address, teacher_books written by him and it contains member of book
that get and show the output.
Write another class name Writer contains attributes writer_name, writer_address, 
 writer_books written by him and it contains member function to get input and display output.
Another class Scholar inherit from both Teacher and Writer.

*/
#include <iostream>
using namespace std;
class Teacher{
    private:
        string teacher_name;
        int teacher_age;
        string teacher_address;
    public:
        void get_input()
        {
            cout<<" -----Input------"<<endl<<endl;
            cout<<" Enter teacher name :";
            cin>>teacher_name;
            cout<<"Enter teacher age :";
            cin>>teacher_age;
            cout<<"Enter teacher address :";
            cin>>teacher_address;
        }    
        void show_data()
        {
            cout<<" -----Output------"<<endl<<endl;
            cout<<"Teacher Name : "<<teacher_name<<endl;
            cout<<"Teacher age : "<<teacher_age<<endl;
            cout<<"Teacher Address : "<<teacher_address<<endl;
        }
};
class Writer {
    private: 
       string writer_name;
       string writer_address;
       string writer_books;
    public:
    void get_input()
    {
            cout<<" -----Input------"<<endl<<endl;
        cout<<"Enter writer name :";
        cin>>writer_name;
        cout<<"Enter writer address :";
        cin>>writer_address;
        cout<<"Enter writer books :";
        cin>>writer_books;
    } 
    void show_data()
    {
        cout<<" -----Output------"<<endl<<endl;
        cout<<"Writer Name : "<<writer_name<<endl;
        cout<<"Writer Address : "<<writer_address<<endl;
        cout<<"Writer Books : "<<writer_books<<endl;
    }  
};

class Scholar : public Teacher, public Writer {
          public:
            void get_input()
            {
                Teacher::get_input();
                Writer::get_input();
            }

             void show_input()
            {
                Teacher::get_input();
                Writer::get_input();
            }
             
};
int main() {
   
   
    
    return 0;
}
