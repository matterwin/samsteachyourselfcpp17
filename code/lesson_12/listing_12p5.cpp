#include <iostream>
using namespace std;

class Date 
{
private:
	int day, month, year;
	string dateInString;

public:
	Date(int m, int d, int y) : day(d), month(m), year(y) {};

	void operator+= (int days)
	{
		day += days;
	}

	void operator-= (int days)
	{
		day -= days;
	}

	void DisplayDate()
	{
		cout << month << " / " << day << " / " << year << endl;
	}
};

int main()
{
	Date holiday(12, 25, 2016);
	cout << "Holiday on: ";
	holiday.DisplayDate();

	cout << "holiday -= 18 gives: ";
	holiday -= 19;
	holiday.DisplayDate();

	cout << "holiday += 25 gives: ";
	holiday += 25;
	holiday.DisplayDate();

	Date holiday1(12, 25, 2016);
	Date holiday2(12, 25, 2016);

	// if (holiday1 == holiday2) cout << "byte level the same\n";
	// else cout << "byte level not the same\n";

	return 0;
}

