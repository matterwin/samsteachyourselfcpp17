template <typename T>
class EverythingButInt 
{
public:
	EverythingButInt()
	{
		static_assert(sizeof(T) != sizeof(int), "No int please!");
	}
};

int main()
{
	EverythingButInt<int> test;	// template instantiation with in (error!)
	return 0;
}

// output
// listing_14p9.cpp: In instantiation of ‘EverythingButInt<T>::EverythingButInt() [with T = int]’:
// listing_14p9.cpp:13:24:   required from here
//    13 |         EverythingButInt<int> test;     // template instantiation with in
//       |                               ^~~~
// listing_14p9.cpp:7:41: error: static assertion failed: No int please!
//     7 |                 static_assert(sizeof(T) != sizeof(int), "No int please!");
//       |                               ~~~~~~~~~~^~~~~~~~~~~~~~
//   • the comparison reduces to ‘(4 != 4)’

