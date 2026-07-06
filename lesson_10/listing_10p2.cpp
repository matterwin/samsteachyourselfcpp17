#include <iostream>
using namespace std;

class Fish
{
protected:
	bool isFreshWaterFish;			// accessible only to derived classes

public:
	void Swim()
	{
		if (isFreshWaterFish)
			cout << "Swims in lake" << endl;
		else
			cout << "Swims in sea" << endl;
	}
};

class Tuna : public Fish
{
public:
	Tuna()
	{
		isFreshWaterFish = false;	// set protected member in base
	}
};

int main()
{
	Tuna myDinner;

	cout << "About my food" << endl;

	cout << "Dinner: ";
	myDinner.Swim();

	// uncomment line below to see that protected members
	// are not accessiblefrom outside the class heirarchy
	myDinner.isFreshWaterFish = false;

	return 0;
}
