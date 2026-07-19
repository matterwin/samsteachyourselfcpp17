#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "How many integers shall I reserve memory for?" << endl;
	int numEntries = 0;
	cin >> numEntries;

	int* myNums = new int[numEntries];

	cout << "Memory allocated at: " << hex << myNums << endl;

	delete[] myNums;

	return 0;
}
