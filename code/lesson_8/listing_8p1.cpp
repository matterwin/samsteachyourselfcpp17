#include <iostream>
using namespace std;

int main()
{
    int age = 30;
    const double PI = 3.1416;

    int *agePtr = &age;
    const double *PIPtr = &PI;

    cout << "=== Basic pointers ===" << endl;

    cout << "Address of age (&age): \t\t" << &age << endl;
    cout << "Value of agePtr: \t\t\t" << agePtr << endl;
    cout << "Value via *agePtr: \t\t\t" << *agePtr << endl;

    cout << "\nAddress of PI (&PI): \t\t\t" << &PI << endl;
    cout << "Value of PIPtr: \t\t\t" << PIPtr << endl;
    cout << "Value via *PIPtr: \t\t\t" << *PIPtr << endl;

    cout << "\n=== Address of the pointer variables themselves ===" << endl;

    cout << "Address of agePtr (&agePtr): \t\t" << &agePtr << endl;
    cout << "Address of PIPtr (&PIPtr): \t\t" << &PIPtr << endl;

    cout << "\n=== Pointer-to-pointer example ===" << endl;

    int **agePtr2 = &agePtr;

    cout << "Address stored in agePtr2: \t\t" << agePtr2 << endl;
    cout << "Value via *agePtr2: \t\t\t" << *agePtr2 << endl;
    cout << "Value via **agePtr2: \t\t\t" << **agePtr2 << endl;

    return 0;
}
