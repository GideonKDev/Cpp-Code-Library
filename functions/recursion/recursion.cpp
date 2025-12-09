// Recursion is the technique of making a function call itself.
// This technique provides a way to break complicated problems down into simple problems which are easier to solve.
// Recursion may be a bit difficult to understand. The best way to figure out how it works is to experiment with it.
#include <iostream>
using namespace std;

int sum(int number)
{
    return number + sum(number - 1); // function calling itself
}

int main()
{

    int x = 5;
    cout << sum(x) << "\n";

    return 0;
}