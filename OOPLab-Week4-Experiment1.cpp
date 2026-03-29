#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
    string name;
    int idNumber;
    string department;
    string position;

    Employee()
    {
        name = "";
        idNumber = 0;
        department = "";
        position = "";
    }

    Employee(string n, int id, string dept, string pos)
    {
        name = n;
        idNumber = id;
        department = dept;
        position = pos;
    }

    Employee(string n, int id)
    {
        name = n;
        idNumber = id;
        department = "";
        position = "";
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "ID Number: " << idNumber << endl;
        cout << "Department: " << department << endl;
        cout << "Position: " << position << endl;
        cout << "-----------------------" << endl;
    }
};

int main()
{
    string name, department, position;
    int id;

    // Default constructor calling

    Employee emp1 = Employee();

    // get values from user for constructor with employee’s name and employee’s ID number data members
    cout << "Enter details for Employee 2" << endl;
    cout << "Name: "; 
    cin >> name;
    cout << "ID Number: "; 
    cin >> id;
    Employee emp2 = Employee(name, id);

    // get values from user for constructor with employee’s name, employee’s ID number, department, and
    // position data members
    cout << "Enter details for Employee 3" << endl;
    cout << "Name: "; 
    cin >> name;
    cout << "ID Number: "; 
    cin >> id;
    cout << "Department: "; 
    cin >> department;
    cout << "Position: "; 
    cin >> position;
    Employee emp3 = Employee(name, id, department, position);

    cout << "\nEmployee Details:\n";
    cout << "\nObject created using Default Constructor\n\n";
    emp1.display();
    cout << "\nObject created using Parameterized Constructor with 2 arguments\n\n";
    emp2.display();
    cout << "\nObject created using Parameterized Constructor with 2 arguments\n\n";
    emp3.display();

    return 0;
}

