#include <iostream>
using namespace std;

int main()
{
	cout << "This program will multiply 2 numbers for you\n";

	cout << "Enter first num: ";
	int firstNum = 0;
	cin >> firstNum;

	cout << "Enter secon num: ";
	int secondNum = 0;
	cin >> secondNum;

	int multiplicationResult = firstNum * secondNum;

	cout << firstNum << " x " << secondNum;
	cout << " = " << multiplicationResult << endl;

	return 0;
}
