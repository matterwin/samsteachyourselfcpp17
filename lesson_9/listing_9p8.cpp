#include <iostream>
#include <string.h>
using namespace std;

class MyString
{
private:
	char* buffer;

public:
	static int id;
	int uid;
	MyString(const char* initString)
	{
		if (initString != NULL)
		{
			buffer = new char[strlen(initString) + 1];
			strcpy(buffer, initString);
		}
		else
			buffer = NULL;

		uid = id++;	
	}

	~MyString() 
	{
		cout << "Invoking destructor, clearing up for id: " << uid << endl;
		if (buffer != NULL)
			delete[] buffer;
	}

	int GetLength() { return strlen(buffer); }

	const char* GetString() { return buffer; }
};

int MyString::id = 0;

void UseMyString(MyString str)
{
	cout << "String buffer in sayHello is " << str.GetLength();
	cout << " characters long" << endl;

	cout << "Buffer contains: " << str.GetString() << endl;

	// shows the obj destructor gets called first for this argument copied
	// which then means the original caller object calls destructor again on that
	// and if things are dynamically allocated, you get major issues/crash.
	str.uid = 21;
}

int main()
{
	MyString sayHello("Hello from String Class");
	UseMyString(sayHello);
	return 0;
}

