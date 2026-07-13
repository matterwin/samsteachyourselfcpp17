#include <iostream>
#include <string>
#include <string.h>
using namespace std;

class MyString 
{
private:
	char* buffer;

	// private default constructor
	MyString() {}

public:
	// constructor
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

	// NEW (from Listing 12.9)
	const char& operator[] (int index) const
	{
		if (index < GetLength())
			return buffer[index];

		return buffer[0]; // failed
	}

	// Destructor
	~MyString()
	{
		if (buffer != NULL)
			delete[] buffer;
	}

	// recall: const here tells us
	// "This member function promises not to modify the object it belongs to."
	int GetLength() const 
	{
		return strlen(buffer);
	}

	operator const char*()
	{
		return buffer;
	}

};

int main()
{
	cout << "Type a statement: ";
	string strInput;
	getline(cin, strInput);

	MyString youSaid(strInput.c_str());

	cout << "Using operator[] for displaying your input: " << endl;
	for (int i = 0; i < youSaid.GetLength(); ++i)
		cout << youSaid[i] << " ";
	cout << endl;

	cout << "Enter index 0 - " << youSaid.GetLength() - 1 << ": ";
	int index = 0;
	cin >> index;
	cout << "Input char at zero-based position: " << index;
	cout << " is: " << youSaid[index] << endl;

	return 0;
}

