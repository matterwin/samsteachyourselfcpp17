#include <algorithm>
#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
	vector<int> numsInVec{101, -4, 500, 21, 42, -1};

	list<char> charsInList{'a', 'h', 'z', 'k', 'l'};
	cout << "Display elements in a vector using a lambda: " << endl;

	// display the array of integers
	for_each(numsInVec.cbegin(),
			numsInVec.cend(),
			[](const int& e) { cout << e << ' '; });

	cout << endl;
	cout << "Display elements in a vector using a lambda: " << endl;
	// display the array of integers
	for_each(charsInList.cbegin(),
			charsInList.cend(),
			[](auto& e) { cout << e << ' '; });
	cout << endl;

	return 0;
}
