#include <algorithm>
#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
	vector<int> numsInVec{101, -4, 500, 21, 42, -1};

	auto evenNum = find_if(numsInVec.cbegin(),
			numsInVec.cend(),
			[](const int& n) { return (n & 1) == 0; });

	if (evenNum != numsInVec.end())
		cout << "Even number in collection is: " << *evenNum << endl;

	return 0;
}

