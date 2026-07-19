template <typename T>
class deepcopy_smart_ptr 
{
private:
	T* ptr;
public:
	// ... other functions

	// copy constructor of the deepcopy pointer
	deepcopy_smart_ptr(const deepcopy_smart_ptr& src)
	{
		// clone() is virtual: ensures deep copy of Derived class object
		ptr = src->Clone();
	}

	// copy assignment operator
	deepcopy_smart_ptr& operator= (const deepcopy_smart_ptr& src)
	{
		if (ptr)
			delete ptr;

		ptr = src->Clone();
	}
};

