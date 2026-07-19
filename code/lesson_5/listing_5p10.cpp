#include <iostream>
using namespace std;

int main(int argc, char** argv) 
{
	cout << "Use sizeof to determine memory used by arrays" << endl;
	int myNums[100] = {0};

	cout << "Bytes used by an int: " << sizeof(int) << endl;
	cout << "Bytes used by myNums: " << sizeof(myNums) << endl;
	cout << "Bytes used by an element: " << sizeof(myNums[0]) << endl;
	cout << "Bytes used by an element * len of myNums: " << sizeof(myNums[0]) * 100 << endl;

	return 0;
}
