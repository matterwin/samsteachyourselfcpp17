#include <iostream>
#include <string.h>
using namespace std;

class MyString
{
private:
	char* buffer;

public:
	MyString(const char* initString)
	{
		buffer = NULL;
		cout << "Default constructor: creating new MyString" << endl;
		if (initString != NULL)
		{
			buffer = new char[strlen(initString) + 1];
			strcpy(buffer, initString);

			cout << "buffer points to: " << hex;
			cout << (unsigned int*)buffer << endl;
		}
	}

	MyString(const MyString& copySource) // copy constructor
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

	~MyString()
	{
		cout << "Invoking destructor, clearing up" << endl;
		delete[] buffer;
	}

	int GetLength() { return strlen(buffer); }

	const char* GetString() { return buffer; }
};

void UseMyString(MyString str)
{
	cout << "String buffer in sayHello is " << str.GetLength();
	cout << " characters long" << endl;

	cout << "Buffer contains: " << str.GetString() << endl;
}

int main()
{
	MyString sayHello("Hello from String Class");
	UseMyString(sayHello);
	return 0;
}
