#include <iostream>
using namespace std;
#include <string.h>

class MyString 
{
private:
	char* buffer;

public:
	MyString(const char* init)
	{
		if (init != NULL)
		{
			buffer = new char[strlen(init) + 1];
			strcpy(buffer, init);
		}
		else
			buffer = NULL;
	}

	// Copy constructor (from Listing 9.9)
	MyString(const MyString& copySource)
	{
		buffer = NULL;
		cout << "Copy constructor: copying from MyString" << endl;
		if (copySource.buffer != NULL)
		{
			// allocate
			buffer = new char [strlen(copySource.buffer) + 1];

			// deep copy from the source into local buffer
			strcpy(buffer, copySource.buffer);

			cout << "buffer points to: " << hex;
			cout << (unsigned int*)buffer << endl;
		}
	}


	// Copy assignment operator
	MyString& operator= (const MyString& copySource)
	{
		if ((this != &copySource) && (copySource.buffer != NULL))
		{
			if (buffer != NULL)
				delete[] buffer;

			// ensure deep copy by frist allocating own buffer
			buffer = new char[strlen(copySource.buffer) + 1];

			// copy from the source into local buffer
			strcpy(buffer, copySource.buffer);
		}

		return *this;
	}

	operator const char*()
	{
		return buffer;
	}

	~MyString()
	{
		delete[] buffer;
	}
};

int main()
{
	MyString string1("Hello ");
	MyString string2("World");

	cout << "Before assignment: " << endl;
	cout << string1 << string2 << endl;

	string2 = string1;

	cout << "After assignment string2 = string1: " << endl;
	cout << string1 << string2 << endl;

	return 0;
}
