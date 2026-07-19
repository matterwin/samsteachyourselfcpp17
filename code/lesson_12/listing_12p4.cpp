#include <iostream>
using namespace std;

class Date 
{
private:
	int day, month, year;
	string dateInString;

public:
	Date(int m, int d, int y) : day(d), month(m), year(y) {};

	Date operator+ (int daysToAdd)	// binary addition
	{
		Date newDate(month, day + daysToAdd, year);
		return newDate;
	}

	Date operator- (int daysToSub)	// binary subtraction
	{
		return Date(month, day - daysToSub, year);
	}

	void DisplayDate()
	{
		cout << month << " / " << day << " / " << year << endl;
	}
};

int main()
{
	Date Holiday(12, 25, 2016);
	cout << "Holiday on: ";
	Holiday.DisplayDate();

	Date Prev (Holiday - 19);
	cout << "Previous holiday on: ";
	Prev.DisplayDate();

	Date Next (Holiday + 6);
	cout << "Next holiday on: ";
	Next.DisplayDate();

	return 0;
}
