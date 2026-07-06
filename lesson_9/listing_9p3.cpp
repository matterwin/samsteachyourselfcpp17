#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int age;
    double gpa;

public:
	Student() {} // default constructor

    // Constructor to initialize data members
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
    // Creating objects using constructor
    Student s1("Alice", 20, 3.8);
    Student s2("Bob", 22, 3.5);

    s1.display();
    cout << "-----------------" << endl;
    s2.display();

    return 0;
}
