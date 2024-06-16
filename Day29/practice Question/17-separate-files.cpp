// Student.cpp
#include "Student.h"

Student::Student(int id, string n, char g) : studentID(id), name(n), grade(g) {}

void Student::printDetails() const {
    cout << "Student ID: " << studentID << endl;
    cout << "Name: " << name << endl;
    cout << "Grade: " << grade << endl;
}




// Student.h
#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int studentID;
    string name;
    char grade;

public:
    Student(int id, string n, char g);
    void printDetails() const;
};

#endif



// main.cpp
#include "Student.h"

int main() {
    Student student(101, "Alice", 'A');
    student.printDetails();

    return 0;
}
