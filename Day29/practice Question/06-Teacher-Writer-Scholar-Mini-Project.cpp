#include <iostream>
#include <string>
using namespace std;

class Teacher {
private:
    string teacher_name;
    int teacher_age;
    string teacher_address;
    string teacher_books;
public:
    void get_input() {
        cout << " -----Input Teacher Details ------" << endl << endl;
        cout << "Enter teacher name: ";
        cin.ignore();
        getline(cin, teacher_name);
        cout << "Enter teacher age: ";
        cin >> teacher_age;
        cin.ignore(); // Clear the newline character from the buffer
        cout << "Enter teacher address: ";
        getline(cin, teacher_address);
        cout << "Enter teacher books: ";
        getline(cin, teacher_books);
    }

    void show_data() const {
        cout << "\n -----Output Teacher Details------" << endl << endl;
        cout << "Teacher Name: " << teacher_name << endl;
        cout << "Teacher Age: " << teacher_age << endl;
        cout << "Teacher Address: " << teacher_address << endl;
        cout << "Teacher Books: " << teacher_books << endl;
    }
};

class Writer {
private:
    string writer_name;
    string writer_address;
    string writer_books;
public:
    void get_input() {
        cout << " -----Input Writer Details ------" << endl << endl;
        cout << "Enter writer name: ";
        cin.ignore();
        getline(cin, writer_name);
        cout << "Enter writer address: ";
        getline(cin, writer_address);
        cout << "Enter writer books: ";
        getline(cin, writer_books);
    }

    void show_data() const {
        cout << "\n -----Output Writer Details------" << endl << endl;
        cout << "Writer Name: " << writer_name << endl;
        cout << "Writer Address: " << writer_address << endl;
        cout << "Writer Books: " << writer_books << endl;
    }
};

class Scholar : public Teacher, public Writer {
public:
    void get_input() {
        Teacher::get_input();
        Writer::get_input();
    }

    void show_data() const {
        Teacher::show_data();
        Writer::show_data();
    }
};

int main() {
    Scholar S;

    S.get_input();

    cout << "\nScholar Data:\n";
    S.show_data();

    return 0;
}
