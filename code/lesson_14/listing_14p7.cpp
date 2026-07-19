#include <iostream>
using namespace std;

template <typename Res, typename ValType>
void Sum(Res& res, ValType& val)
{
	res = res + val;
}

template <typename Res, typename First, typename... Rest>
void Sum(Res& res, First val1, Rest... valN)
{
	res = res + val1;
	return Sum(res, valN ...);
}

int main()
{
	double dResult = 0;
	Sum(dResult, 3.14, 4.56, 1.1111);
	cout << "dResult = " << dResult << endl;

	string strResult;
	Sum(strResult, "Hello ", "World");
	cout << "strResult = " << strResult.c_str() << endl;

	return 0;
}

