#include <iostream>
using namespace std;

class Human
{
	int age;
public:
	constexpr Human(int humansAge) : age(humansAge) {}
	constexpr int GetAge() const { return age; }
};

int main()
{
	constexpr Human somePerson(15);
	const int hisAge = somePerson.GetAge();

	// no error cause compiler see it cannot be optimized to 
	// insert in the bytecode the result but instead just does the
	// normal instructions for instantiation at run-time
	Human anotherPerson(45);	// not constant expression

	return 0;
}
