#include <iostream>
using namespace std;

class Fish 
{
public:
	virtual void Swim() 
	{
		cout << "Fish swims! " << endl;
	}
};

class Tuna : public Fish
{
public:
	// override Fish::Swim
	void Swim()
	{
		cout << "Tuna swims!" << endl;
	}
};

class Carp : public Fish
{
public:
	// override Fish::Swim
	void Swim()
	{
		cout << "Carp swims!" << endl;
	}
};

// Notice reference Fish& still calls the 
// derived class:Swim() b/c Fish::Swim() is virtual
void MakeFishSwim(Fish& inputFish)
{
	// calling vurtla method Swim()
	inputFish.Swim();
}

int main() 
{
	Tuna myDinner;
	Carp myLunch;

	// sending Tuna as Fish
	MakeFishSwim(myDinner);

	// sending Tuna as Fish
	MakeFishSwim(myLunch);

	return 0;
}

