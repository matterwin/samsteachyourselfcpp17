#include <iostream>
using namespace std;

class Human
{
public:
	string name;
	int age;

	void IntroduceSelf()
	{
		cout << "I am " + name + " and am ";
		cout << age << " years old" << endl;
	}
};

int main()
{
	// create an object, i.e. instance of a class
	Human firstName;

	firstName.name = "Jeff";
	firstName.age = 21;

	firstName.IntroduceSelf();

	return 0;
}
