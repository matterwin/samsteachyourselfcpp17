#include <iostream>
#include <memory>	// new inclue to use unique_ptr
using namespace std;

class Date 
{
private: 
	int day, month, year;

public:
	Date(int d, int m, int y) : day(d), month(m), year(y) {};

	void DisplayDate()
	{
		cout << month << " / " << day << " / " << year << endl;
	}
};

int main()
{
	unique_ptr<int> smartIntPtr(new int);
	*smartIntPtr = 42;

	// use smart pointer type like an int*
	cout << "Integer value is: " << *smartIntPtr << endl;

	unique_ptr<Date> smartHoliday (new Date(12, 25, 2016));
	cout << "The new instance of date contains: ";

	// use smartHoliday just as you would a Date*
	smartHoliday->DisplayDate();

	return 0;
}
