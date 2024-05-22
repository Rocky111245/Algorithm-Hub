// C++ Program to demonstrate the working of modulo operator
#include <iostream>

using namespace std;

// Driver code
int main(void)
{
    int x, y;

    int result;

    x = 3;
    y = 4;

    // using modulo operator
    result = x % y;
    cout << result << endl;

    result = y % x;
    cout << result << endl;

    // for different values
    x = 4;
    y = 2;

    result = x % y;
    cout << result;

    return 0;
}

// This code is contributed by Mayank Tyagi
