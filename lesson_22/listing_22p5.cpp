#include <algorithm>
#include <string>
#include <vector>
#include <iostream>
using namespace std;

template<typename T>
void DisplayContents(const T& input)
{
	for (auto elem = input.cbegin(); elem != input.cend(); ++elem)
		cout << *elem << endl;
}

int main()
{
	vector<string> namesInVec{"jim", "Jack", "Sam", "Anna"};
	cout << "og: " << endl;
	DisplayContents(namesInVec);

	cout << "Sorted case sensitive: " << endl;
	sort(namesInVec.begin(), namesInVec.end());
	DisplayContents(namesInVec);

	cout << "order after sort ignoring case:" << endl;
	sort(namesInVec.begin(), namesInVec.end(),
			[](const string& str1, const string& str2) -> bool 
			{
				string str1LC;	// lowercase
				// assign space
				str1LC.resize(str1.size());
				// convert every char to the lc
				transform(str1.begin(), str1.end(), str1LC.begin(), ::tolower);

				string str2LC;	// lowercase
				// assign space
				str2LC.resize(str2.size());
				// convert every char to the lc
				transform(str2.begin(), str2.end(), str2LC.begin(), ::tolower);

				return (str1LC < str2LC);
			});

	DisplayContents(namesInVec);
	return 0;
}
