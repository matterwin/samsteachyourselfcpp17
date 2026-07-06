#include <iostream>
using namespace std;

int main()
{
    cout << "Enter two integers:" << endl;
    int num1 = 0, num2 = 0;
    cin >> num1 >> num2;

    cout << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
    cout << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
    cout << num1 << " * " << num2 << " = " << (num1 * num2) << endl;

    if (num2 != 0)
        cout << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
    else
        cout << "Division by zero is undefined" << endl;

    cout << num1 << " % " << num2 << " = " << (num1 % num2) << endl;

    return 0;
}
