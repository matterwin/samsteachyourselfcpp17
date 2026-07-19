#include <sstream>
#include <string>
#include <iostream>
using namespace std;

class Date 
{
private:
	int day, month, year;
	string dateInString;

public:
	Date(int d, int m, int y) : day(d), month(m), year(y) {};

	operator const char*()
	{
		ostringstream formattedDate;	// assists string conversion
		formattedDate << month << " / " << day << " / " << year;

		dateInString = formattedDate.str();
		return dateInString.c_str();
	}
};

int main()
{
	Date holiday (12, 25, 2016);		// dec 25, 2016

	cout << "Holiday is on: " << holiday << endl;

	string strHoliday (holiday);		// OK
	strHoliday = Date(11, 11, 2016);	// also OK!

	return 0;
}

