#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int main() 
{
	vector<int> numsInVec{25, 26, 27, 28, 29, 30, 31};
	cout << "The vector contains: {25, 26, 27, 28, 29, 30, 31}" << endl;

	cout << "Enter a divisor (> 0): ";
	int divisor = 1;
	cin >> divisor;

	// find the first element that is a multiple of divisor
	// note here i do just regular begin() and not cbegin()
	// cause im not taking dividend as const
	//
	// and if dividend is not const but you do cbegin(), you will get error
	vector<int>::iterator element;
	element = find_if(numsInVec.begin(),
			numsInVec.end(),
			[divisor](int dividend) { return (dividend % divisor) == 0; });

	if (element != numsInVec.end())
	{
		cout << "First element in vector divisible by " << divisor;
		cout << ": " << *element << endl;
	}

	return 0;
}
