#include <iostream>
using namespace std;

// template with default params: int & double
template <typename T1=int, typename T2=double>
class HoldsPair 
{
private:
	T1 value1;
	T2 value2;

public:
	// constructor
	HoldsPair(const T1& val1, const T2& val2) : value1(val1), value2(val2) {}

	// accesor functions
	const T1& GetFirstValue() const 
	{
		return value1;
	}

	// recall: 
	// The rightmost const makes this member function a const member function,
	// meaning it cannot modify the object's member variables and can be called
	// on const objects.
	//
	// The leftmost const applies to the return type, meaning the function returns
	// a const reference. The caller can access the returned value but cannot modify it.
	const T2& GetSecondValue() const 
	{
		return value2;
	}
};

int main()
{
	HoldsPair<> pairIntDbl(300, 10.09);
	HoldsPair<short, const char*> pairShortStr(25, "Learn templates, love C++");

	cout << "The first object contains -" << endl;
	cout << "Value 1: " << pairIntDbl.GetFirstValue() << endl;
	cout << "Value 2: " << pairIntDbl.GetSecondValue() << endl;

	cout << "The second object contains -" << endl;
	cout << "Value 1: " << pairShortStr.GetFirstValue() << endl;
	cout << "Value 2: " << pairShortStr.GetSecondValue() << endl;

	return 0;
}
