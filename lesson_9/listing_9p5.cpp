#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int age;
    double gpa;

public:
	// overloaded constructor and no default constructor
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

	void setAge(int _age) {
		age = _age;
	}
};

int main() {
    // Creating objects using constructor
    // Student s1("Alice", 20, 3.8);
    // Student s2("Bob", 22, 3.5);

	// Can still instantiate an object with no constructor 
	// explicitly listed cause the default is always implicitly there.
	// (I had commented out the overloaded constructor and it still
	// worked)
	// Student s0;
	// s0.setAge(4);
	// s0.display();

    // s1.display();
    // cout << "-----------------" << endl;
    // s2.display();

    return 0;
}

