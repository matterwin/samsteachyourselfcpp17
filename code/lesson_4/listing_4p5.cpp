#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    // ----------------------------
    // C-style string
    // ----------------------------
    char sayHello[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '\0'};

    cout << "C-style string:" << endl;
    cout << sayHello << endl;
    cout << "Size of array: " << sizeof(sayHello) << endl;
    cout << "Length using strlen(): " << strlen(sayHello) << endl << endl;

    cout << "Replacing space with null" << endl;

    sayHello[5] = '\0';
    cout << sayHello << endl;
    cout << "Size of array: " << sizeof(sayHello) << endl;
    cout << "Length using strlen(): " << strlen(sayHello) << endl << endl;


    // ----------------------------
    // std::string version
    // ----------------------------
    std::string sayHelloStr = "Hello World";

    cout << "std::string version:" << endl;
    cout << sayHelloStr << endl;
    cout << "Size of string: " << sayHelloStr.size() << endl;
    cout << "Length using .size(): " << sayHelloStr.size() << endl << endl;

    cout << "Replacing space with null (std::string)" << endl;

    sayHelloStr[5] = '\0';
    cout << sayHelloStr << endl;
    cout << "Size of string: " << sayHelloStr.size() << endl;
    cout << "Length using .size(): " << sayHelloStr.size() << endl << endl;


    // ----------------------------
    // Convert std::string to C-style for strlen
    // ----------------------------
    cout << "Converting std::string to C-style string:" << endl;

    const char* cStr = sayHelloStr.c_str();

    cout << cStr << endl;
    cout << "Length using strlen(): " << strlen(cStr) << endl;

    return 0;
}
