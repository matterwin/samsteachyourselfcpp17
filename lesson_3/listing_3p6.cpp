#include <iostream>
using namespace std;

int main()
{
	auto coinFlippedHeads = true;
	auto largeNum = 2500000000000;
	auto smallNum = 3;
	// auto willGetError;
	// error: declaration of ‘auto willGetError’ has no initializer
    // 9 |         auto willGetError;

	cout << "coinFlippedHeads = " << coinFlippedHeads;
	cout << ", sizeof(coinFlippedHeads) = " << sizeof(coinFlippedHeads) << endl;

	cout << "largeNum = " << largeNum;
	cout << ", sizeof(largeNum) = " << sizeof(largeNum) << endl;

	cout << "smallNum = " << smallNum;
	cout << ", sizeof(smallNum) = " << sizeof(smallNum) << endl;

	return 0;
}
