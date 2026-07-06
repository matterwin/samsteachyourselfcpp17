#include <iostream>
using namespace std;

class Fish
{
protected:
	bool isFreshWaterFish;

public:
	// Fish constructor
	Fish(bool isFreshWater) : isFreshWaterFish(isFreshWater) {}	

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
	Tuna() : Fish(false) {}

	void Swim() 
	{ 
		cout << "Tuna swims real fast" << endl; 
		Fish::Swim();
	}
};

class Carp : public Fish
{
public:
	Carp() : Fish(true) {}

	void Swim() 
	{ 
		cout << "Carp swims real slow" << endl; 
		Fish::Swim();
	}
};

int main()
{
	Tuna myDinner;
	Carp myLunch;

	cout << "About my food" << endl;

	cout << "Lunch: ";
	myLunch.Swim();

	cout << "Dinner: ";
	myDinner.Swim();

	return 0;
}



