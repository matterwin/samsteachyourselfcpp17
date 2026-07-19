#include <iostream>
using namespace std;

int main()
{
    int x = 5;

    cout << "Initial x = " << x << endl;

    // PREFIX increment
    int a = ++x;
    cout << "\nAfter prefix ++x:" << endl;
    cout << "a = " << a << endl;  // x already incremented
    cout << "x = " << x << endl;

    // POSTFIX increment
    int b = x++;
    cout << "\nAfter postfix x++:" << endl;
    cout << "b = " << b << endl;  // old value
    cout << "x = " << x << endl;

    // PREFIX decrement
    int c = --x;
    cout << "\nAfter prefix --x:" << endl;
    cout << "c = " << c << endl;
    cout << "x = " << x << endl;

    // POSTFIX decrement
    int d = x--;
    cout << "\nAfter postfix x--:" << endl;
    cout << "d = " << d << endl;
    cout << "x = " << x << endl;

    return 0;
}
