template <typename T>
class destructivecopy_ptr 
{
private:
	T* object;
public:
	destructivecopy_ptr(T* input) : object(input) {}
	~destructivecopy_ptr() { delete object; }

	// copy constructor
	destructivecopy_ptr(destructivecopy_ptr& src)
	{
		// take ownership on copy
		object = src.object;

		// destroy source
		src.object = 0;
	}

	// copy assignment operator
	destructivecopy_ptr& operator= (destructivecopy_ptr& src)
	{
		if (object != src.object)
		{
			delete object;
			object = src.object;
			src.object = 0;
		}
	}
};

int main()
{
	destructivecopy_ptr<int> num(new int);
	destructivecopy_ptr<int> copy = num;

	// num is now invalid
	return 0;
}
