#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a = 5;
    int b = 10;

    cout << "a = " << a << ", b = " << b << endl;

    cout << "\nRelational operator results:" << endl;

    cout << "(a < b)  = " << (a < b) << endl;
    cout << "(a > b)  = " << (a > b) << endl;
    cout << "(a <= b) = " << (a <= b) << endl;
    cout << "(a >= b) = " << (a >= b) << endl;
    cout << "(a == b) = " << (a == b) << endl;
    cout << "(a != b) = " << (a != b) << endl;

    cout << "\nNow changing values..." << endl;

    a = 10;

    cout << "a = " << a << ", b = " << b << endl;

    cout << "(a == b) = " << (a == b) << endl;
    cout << "(a >= b) = " << (a >= b) << endl;
    cout << "(a <= b) = " << (a <= b) << endl;

    // ============================
    // Floating-point comparison
    // ============================
    cout << "\n=== Floating-point relational comparison ===" << endl;

    double x = 0.1 + 0.2;
    double y = 0.3;

    cout << "x = 0.1 + 0.2 = " << x << endl;
    cout << "y = 0.3       = " << y << endl;

    cout << "(x < y)  = " << (x < y) << endl;
    cout << "(x > y)  = " << (x > y) << endl;
    cout << "(x == y) = " << (x == y) << "  // usually false due to precision error" << endl;

    cout << "\nDifference |x - y| = " << fabs(x - y) << endl;

    cout << "\nSafe comparison (epsilon method):" << endl;
    double epsilon = 1e-9;
    cout << "(|x - y| < epsilon) = " << (fabs(x - y) < epsilon) << endl;

    return 0;
}
