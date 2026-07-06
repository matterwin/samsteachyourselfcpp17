#include <iostream>
using namespace std;

constexpr int Square(int number) { return number * number; }

int main()
{
	const int ARRAY_LENGTH = 5;
	int myNums[ARRAY_LENGTH] = {5, 10, 0, -101, 20};

	int moreNums[Square(ARRAY_LENGTH)];

	cout << "Enter index of the element to be changed: ";
	int elementIndex = 0;
	cin >> elementIndex;

	cout << "Enter new value: ";
	int val = 0;
	cin >> val;

	myNums[elementIndex] = val;
	moreNums[elementIndex] = val;

	cout << "Element " << elementIndex << " in array myNums is: ";
	cout << myNums[elementIndex] << endl;

	cout << "Element " << elementIndex << " in array moreNums is: ";
	cout << moreNums[elementIndex] << endl;

	return 0;
}
