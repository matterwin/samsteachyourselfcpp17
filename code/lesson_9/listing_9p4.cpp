#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int age;
    double gpa;

public:
    // Constructor 1: default constructor
    Student() {
        name = "Unknown";
        age = 0;
        gpa = 0.0;
    }

    // Constructor 2: initialize name only
    Student(string n) {
        name = n;
        age = 0;
        gpa = 0.0;
    }

    // Constructor 3: initialize name and age
    Student(string n, int a) {
        name = n;
        age = a;
        gpa = 0.0;
    }

    // Constructor 4: initialize all members
    Student(string n, int a, double g) {
        name = n;
        age = a;
        gpa = g;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "GPA: " << gpa << endl;
    }
};

int main() {
    // Different ways to construct objects

    Student s1;                         // default
    Student s2("Alice");               // name only
    Student s3("Bob", 22);            // name + age
    Student s4("Charlie", 21, 3.9);    // full

    s1.display();
    cout << "-----------------" << endl;

    s2.display();
    cout << "-----------------" << endl;

    s3.display();
    cout << "-----------------" << endl;

    s4.display();

    return 0;
}
