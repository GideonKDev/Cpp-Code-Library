// Comments can be used to explain C++ code, and to make it more readable. It can also be used to prevent execution when testing alternative code. Comments can be singled-lined or multi-lined.

// SINGLE LINE COMMENTS
// Single-line comments start with two forward slashes (//).Any text between // and the end of the line is ignored by the compiler (will not be executed).

#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World!"; // This is a single line comment!
    return 0;
}

// MULTI LINE COMMENTS
// Multi-line comments start with /* and end with */.Any text between /* and */ is ignored by the compiler (will not be executed).

#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World!";
    /* This is a
    multi-line comment */
    return 0;
}