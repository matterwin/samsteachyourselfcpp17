#include <iostream>
using namespace std;

int firstNum = 0;
int secondNum = 0;
int multiplicationResult = 0;

void Multiply()
{
	cout << "This program will multiply 2 numbers for you\n";

	cout << "Enter first num: ";
	cin >> firstNum;

	cout << "Enter secon num: ";
	cin >> secondNum;

	multiplicationResult = firstNum * secondNum;

	cout << firstNum << " x " << secondNum;
	cout << " = " << multiplicationResult << endl;
}

int main()
{
	Multiply();

	// main has no idea of firstNum and secondNum
	return 0;
}

