#include <iostream>
using namespace std;

class Date 
{
private:
	int day, month, year;

public:
	Date(int d, int m, int y) : day(d), month(m), year(y) {};

	Date& operator ++ ()	// prefix increment
	{
		++day;
		return *this;
	}

	Date& operator -- ()
	{
		--day;
		return *this;
	}

	Date operator ++ (int)	// postfix increment
	{
		Date copy(month, day, year);
		++day;
		return copy;	// copy of instance before increment returned
	}

	Date operator -- (int)	// postfix decrement
	{
		Date copy(month, day, year);
		--day;
		return copy;	// copy of instance before decrement returned
	}

	void DisplayDate()
	{
		cout << month << " / " << day << " / " << year << endl;
	}
};

int main()
{
	Date holiday (12, 25, 2016);	// dec 25, 2016

	cout << "The date object is initialized to: ";
	holiday.DisplayDate();

	++holiday;
	cout << "The date after prefix-increment is: ";
	holiday.DisplayDate();

	--holiday;
	cout << "The date after prefix-decrement is: ";
	holiday.DisplayDate();

	holiday++;
	cout << "The date after postfix-increment is: ";
	holiday.DisplayDate();

	holiday--;
	cout << "The date after postfix-decrement is: ";
	holiday.DisplayDate();

	// will get error in absence of conversion operator
	// cout << holiday;

	return 0;
}
