#include <iostream>
#include <string>
using namespace std;

template <typename Type>
const Type& GetMax(const Type& val1, const Type& val2)
{
	if (val1 > val2)
		return val1;
	else
		return val2;
}

template <typename Type>
void DisplayComparison(const Type& val1, const Type& val2)
{
	cout << "GetMax(" << val1 << ", " << val2 << ") = ";
	cout << GetMax(val1, val2) << endl;
}

int main()
{
	int num1 = -101, num2 = 2011;
	DisplayComparison(num1, num2);

	double d1 = 3.14, d2 = 3.1416;
	DisplayComparison(d1, d2);

	string name1("Jack"), name2("John");
	DisplayComparison(name1, name2);

	return 0;
}
