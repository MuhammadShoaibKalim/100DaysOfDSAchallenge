#include <iostream>
using namespace std;

class Employee {
private:
    int employeeID;
    string name;
    double salary;

public:
    void setEmployeeID(int id) {
        employeeID = id;
    }
    int getEmployeeID() const {
        return employeeID;
    }
    
    void setName(string n) {
        name = n;
    }
    string getName() const {
        return name;
    }
    
    void setSalary(double s) {
        salary = s;
    }
    double getSalary() const {
        return salary;
    }
    
    void printDetails() const {
        cout << "Employee ID: " << employeeID << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    Employee emp;
    emp.setEmployeeID(101);
    emp.setName("John Smith");
    emp.setSalary(75000.0);
    
    emp.printDetails();
    
    return 0;
}
