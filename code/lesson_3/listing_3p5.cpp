#include <iostream>
#include <cstdint>

int main()
{
    using namespace std;

    cout << "C++ Type Sizes (in bytes)\n";
    cout << "-------------------------\n\n";

    // ----------------------------
    // Basic fundamental types
    // ----------------------------
    cout << "Basic types:\n";
    cout << "bool:        " << sizeof(bool) << "\n";
    cout << "char:        " << sizeof(char) << "\n";
    cout << "wchar_t:     " << sizeof(wchar_t) << "\n\n";

    // ----------------------------
    // Signed integer types
    // ----------------------------
    cout << "Signed integer types:\n";
    cout << "short:       " << sizeof(short) << "\n";
    cout << "int:         " << sizeof(int) << "\n";
    cout << "long:        " << sizeof(long) << "\n";
    cout << "long long:   " << sizeof(long long) << "\n\n";

    // ----------------------------
    // Unsigned integer types
    // ----------------------------
    cout << "Unsigned integer types:\n";
    cout << "unsigned short:     " << sizeof(unsigned short) << "\n";
    cout << "unsigned int:       " << sizeof(unsigned int) << "\n";
    cout << "unsigned long:      " << sizeof(unsigned long) << "\n";
    cout << "unsigned long long: " << sizeof(unsigned long long) << "\n\n";

    // ----------------------------
    // Fixed-width integer types
    // ----------------------------
    cout << "Fixed-width integer types (<cstdint>):\n";
    cout << "int8_t:    " << sizeof(int8_t) << "\n";
    cout << "uint8_t:   " << sizeof(uint8_t) << "\n";
    cout << "int16_t:   " << sizeof(int16_t) << "\n";
    cout << "uint16_t:  " << sizeof(uint16_t) << "\n";
    cout << "int32_t:   " << sizeof(int32_t) << "\n";
    cout << "uint32_t:  " << sizeof(uint32_t) << "\n";
    cout << "int64_t:   " << sizeof(int64_t) << "\n";
    cout << "uint64_t:  " << sizeof(uint64_t) << "\n\n";

    // ----------------------------
    // Floating-point types
    // ----------------------------
    cout << "Floating-point types:\n";
    cout << "float:       " << sizeof(float) << "\n";
    cout << "double:      " << sizeof(double) << "\n";
    cout << "long double: " << sizeof(long double) << "\n\n";

    // ----------------------------
    // Pointer types
    // ----------------------------
    cout << "Pointer type:\n";
    cout << "int*:        " << sizeof(int*) << "\n";

    return 0;
}
