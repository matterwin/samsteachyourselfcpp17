#include <iostream>
using namespace std;

int main()
{
    int myNums[5] = {34, 44, 2, 9, -1};

    // Regular array indexing
    cout << "Array indexing:\n";
    cout << "myNums[0] = " << myNums[0] << endl;
    cout << "myNums[1] = " << myNums[1] << endl;
    cout << "myNums[2] = " << myNums[2] << endl;
    cout << "myNums[3] = " << myNums[3] << endl;
    cout << "myNums[4] = " << myNums[4] << endl;

    cout << "\nPointer arithmetic:\n";
    cout << "*(myNums + 0) = " << *(myNums + 0) << endl;
    cout << "*(myNums + 1) = " << *(myNums + 1) << endl;
    cout << "*(myNums + 2) = " << *(myNums + 2) << endl;
    cout << "*(myNums + 3) = " << *(myNums + 3) << endl;
    cout << "*(myNums + 4) = " << *(myNums + 4) << endl;

    return 0;
}
