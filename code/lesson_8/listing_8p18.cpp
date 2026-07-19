#include <iostream>
using namespace std;

void GetSquare(int& number)
{
	number *= number;
}

int main()
{
	cout << "Enter a number you wish to square: ";
	int num = 0;
	cin >> num;

	GetSquare(num);
	cout << "Square is: " << num << endl;

	return 0;
}
