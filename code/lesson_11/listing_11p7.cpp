#include <iostream>
using namespace std;

class Animal 
{
public:
	Animal() 
	{
		cout << "Animal constructor" << endl;
	}

	// sample member
	int age;
};

// problem with diamond problem
class Mammal : public Animal {};
class Bird : public Animal {};
class Reptile : public Animal {};

class Platypus final : public Mammal, public Bird, public Reptile
{
public:
	Platypus ()
	{
		cout << "Platypus constructor" << endl;
	}
};

int main()
{
	Platypus duckBilledP;

	// uncomment next line to see compile failure
	// age is ambiguous as there are three instances of base Animal
	duckBilledP.age = 25;

	return 0;
}

// output 
// listing_11p7.cpp: In function ‘int main()’:
// listing_11p7.cpp:36:21: error: request for member ‘age’ is ambiguous
//    36 |         duckBilledP.age = 25;
//       |                     ^~~
//   • there are 3 candidates
//     • candidate 1: ‘int Animal::age’
//       listing_11p7.cpp:13:13:
//          13 |         int age;
//             |             ^~~
//     • candidate 2: ‘int Animal::age’
//     • candidate 3: ‘int Animal::age’

