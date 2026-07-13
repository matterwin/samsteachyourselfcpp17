#include <iostream>
using namespace std;

class Fish 
{
public:
	virtual void Swim()
	{
		cout << "Fish swims in water" << endl;
	}

	// base class should always have virtual destructors
	// virtual ~Fish();

	virtual ~Fish() = 0;
};

// still have to define a destructor for base
Fish::~Fish() 
{
	cout << "Fish destroyed\n";
}

// A base class used polymorphically should have a virtual destructor.
// This ensures deleting a derived object through a base pointer calls
// both the derived and base destructors.
// virtual ~Fish();

// A pure virtual destructor makes Fish an abstract class, preventing
// direct creation of Fish objects. It still requires a definition because
// the base destructor must execute when derived objects are destroyed.
// virtual ~Fish() = 0;

class Tuna : public Fish 
{
public:
	void Swim() override
	{
		cout << "Tuna swims real fast in the sea" << endl;
	}

	void BecomeDinner()
	{
		cout << "Tuna became dinner in Sushi" << endl;
	}

	~Tuna()
    {
        cout << "Tuna destroyed\n";
    }
};

class Carp : public Fish 
{
public:
	void Swim() override
	{
		cout << "Carp swims real slow in the lake" << endl;
	}

	void Talk()
	{
		cout << "Carp talked Carp!" << endl;
	}

	~Carp()
    {
        cout << "Carp destroyed\n";
    }
};

void DetectFishType(Fish* objFish)
{
	Tuna* objTuna = dynamic_cast<Tuna*>(objFish);
	Carp* objCarp = dynamic_cast<Carp*>(objFish);

	if (objTuna)	// check success of cast
	{
		cout << "Detected Tuna. Making Tuna dinner: " << endl;
		objTuna->BecomeDinner();
	}

	if (objCarp)	// check success of cast
	{
		cout << "Detected Carp. Making carp talk: " << endl;
		objCarp->Talk();
	}

	cout << "Verifying type using virtual Fish::Swim: " << endl;
	objFish->Swim();
}

int main()
{
	Carp myLunch;
	Tuna myDinner;

	DetectFishType(&myDinner);
	cout << endl;
	DetectFishType(&myLunch);

	return 0;
}
