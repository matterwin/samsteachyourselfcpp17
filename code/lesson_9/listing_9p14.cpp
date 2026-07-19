#include <string>
#include <iostream>
using namespace std;

class Human
{
private:
    friend void DisplayAge(const Human& person);

    // Friend class declaration
    friend class HumanInspector;

    string name;
    int age;

public:
    Human(string humansName, int humansAge)
    {
        name = humansName;
        age = humansAge;
    }
};

// friend function
void DisplayAge(const Human& person)
{
    cout << "Age (friend function): " << person.age << endl;
}

// friend class
class HumanInspector
{
public:
    void showAll(const Human& person)
    {
        cout << "Inspector reading private data:" << endl;
        cout << "Name: " << person.name << endl;
        cout << "Age : " << person.age << endl;
    }
};

int main()
{
    Human firstMan("Adam", 25);

    cout << "Accessing private member age via friend function: ";
    DisplayAge(firstMan);

    HumanInspector inspector;
    inspector.showAll(firstMan);

    // compile error examples:
    // cout << firstMan.age << endl;
    // cout << firstMan.name << endl;

    return 0;
}
