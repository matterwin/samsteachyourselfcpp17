#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // 1. Fixed size (default-initialized to 0)
    vector<int> dynArray1(3);

    // 2. Fixed size with custom initial value
    vector<int> dynArray2(3, 7);  // {7, 7, 7}

    // 3. List initialization
    vector<int> dynArray3 = {1, 2, 3, 4, 5};

    // 4. Push_back (dynamic growth)
    vector<int> dynArray4;
    dynArray4.push_back(10);
    dynArray4.push_back(20);
    dynArray4.push_back(30);

    // Print all examples
    cout << "dynArray1: ";
    for (int x : dynArray1) cout << x << " ";
    cout << endl;

    cout << "dynArray2: ";
    for (int x : dynArray2) cout << x << " ";
    cout << endl;

    cout << "dynArray3: ";
    for (int x : dynArray3) cout << x << " ";
    cout << endl;

    cout << "dynArray4: ";
    for (int x : dynArray4) cout << x << " ";
    cout << endl;

    return 0;
}
