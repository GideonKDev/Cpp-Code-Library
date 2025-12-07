// An enum is a special type that represents a group of constants (unchangeable values).
#include <iostream>
using namespace std;

enum Level
{
    LOW,
    MEDIUM,
    HIGH
};

int main()
{
    enum Level myVar = MEDIUM;
    cout << myVar;
    return 0;
}