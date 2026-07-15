#include <vector>
#include <iostream>
#include <algorithm>

int main()
{
    using namespace std;

    vector<int> vecMultiplicand{0, 1, 2, 3, 4};
    vector<int> vecMultiplier{100, 101, 102, 103, 104};

    // Holds the result of multiplication
    vector<int> vecResult;

    // Make space for the result
    vecResult.resize(vecMultiplier.size());

    transform(vecMultiplicand.begin(),
              vecMultiplicand.end(),
              vecMultiplier.begin(),
              vecResult.begin(),
              [](int a, int b) { return a * b; });

    // Print the results
    for (int value : vecResult)
    {
        cout << value << ' ';
    }
    cout << endl;

    return 0;
}
