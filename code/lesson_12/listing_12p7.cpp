#include <iostream>
#include <string>
using namespace std;

class Date 
{
private:
    int day, month, year;
    string dateInString;

public:
    Date(int m, int d, int y) : day(d), month(m), year(y) {}

    bool operator==(const Date& compareTo) const
    {
        return (day == compareTo.day &&
                month == compareTo.month &&
                year == compareTo.year);
    }

    bool operator!=(const Date& compareTo) const
    {
        return !(*this == compareTo);
    }

    bool operator<(const Date& compareTo) const
    {
        if (year != compareTo.year)
            return year < compareTo.year;

        if (month != compareTo.month)
            return month < compareTo.month;

        return day < compareTo.day;
    }

    bool operator<=(const Date& compareTo) const
    {
        return (*this == compareTo) || (*this < compareTo);
    }

    bool operator>(const Date& compareTo) const
    {
        return compareTo < *this;
    }

    bool operator>=(const Date& compareTo) const
    {
        return (*this == compareTo) || (*this > compareTo);
    }

    void DisplayDate() const
    {
        cout << month << " / " << day << " / " << year << endl;
    }
};

int main()
{
    Date holiday1(12, 25, 2016);
    Date holiday2(12, 31, 2016);
    Date holiday3(12, 25, 2016);

    cout << "holiday1 is: ";
    holiday1.DisplayDate();

    cout << "holiday2 is: ";
    holiday2.DisplayDate();

    cout << "holiday3 is: ";
    holiday3.DisplayDate();

    cout << endl;

    if (holiday1 == holiday2)
        cout << "== operator: holiday1 and holiday2 are the same day" << endl;
    else
        cout << "== operator: holiday1 and holiday2 are different days" << endl;

    if (holiday1 == holiday3)
        cout << "== operator: holiday1 and holiday3 are the same day" << endl;
    else
        cout << "== operator: holiday1 and holiday3 are different days" << endl;

    cout << endl;

    if (holiday1 != holiday2)
        cout << "!= operator: holiday1 and holiday2 are different days" << endl;
    else
        cout << "!= operator: holiday1 and holiday2 are the same day" << endl;

    cout << endl;

    if (holiday1 < holiday2)
        cout << "< operator: holiday1 is before holiday2" << endl;
    else
        cout << "< operator: holiday1 is not before holiday2" << endl;

    if (holiday2 > holiday1)
        cout << "> operator: holiday2 is after holiday1" << endl;
    else
        cout << "> operator: holiday2 is not after holiday1" << endl;

    cout << endl;

    if (holiday1 <= holiday3)
        cout << "<= operator: holiday1 is before or equal to holiday3" << endl;
    else
        cout << "<= operator: holiday1 is after holiday3" << endl;

    if (holiday2 >= holiday1)
        cout << ">= operator: holiday2 is after or equal to holiday1" << endl;
    else
        cout << ">= operator: holiday2 is before holiday1" << endl;

    return 0;
}

// note this had to be rewritten since I am compiling with a compiler that is for C++20 and above.
// The textbook code is for compilers older, i.e. up to C++17
