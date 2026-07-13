#include <iostream>
using namespace std;

template <typename T>
class TestStatic 
{
public:
	static int staticVal;
};

// static member initialization
template<typename T> int TestStatic<T>::staticVal;

int main()
{
	TestStatic<int> intInstance;
	cout << "Setting staticVal for intInstance to 2011" << endl;
	intInstance.staticVal = 2011;

	TestStatic<double> dbInstance;
	cout << "Setting staticVal for dbInstance to 1011" << endl;
	dbInstance.staticVal = 1011;

	TestStatic<int> intInstance2;

	cout << "intInstance staticVal = " << intInstance.staticVal << endl;
	cout << "dbInstance staticVal = " << dbInstance.staticVal << endl;
	cout << "intInstance2 staticVal = " << intInstance2.staticVal << endl;
	cout << endl << endl;

	cout << "Setting staticVal for intInstance2 to 444" << endl;
	intInstance2.staticVal = 444;

	cout << "intInstance staticVal = " << intInstance.staticVal << endl;
	cout << "dbInstance staticVal = " << dbInstance.staticVal << endl;
	cout << "intInstance2 staticVal = " << intInstance2.staticVal << endl;

	return 0;
}
