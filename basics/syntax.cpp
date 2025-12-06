#include <iostream>  //header file library for input and output
using namespace std; // means that we can use names for objects and variables from the standard library
// c++ ignores spaces and line breaks
int main() // every c++ program must have a main function. Any code inside the main function will be executed
{
    cout << "Hello World!"; // cout is used to output/print text to the console
    cout << "Hello World!";
    return 0; // indicates that the program ended successfully
}

// NOTES
// C++ is case sensitive: 'cout' is different from 'COUT'
// Every statement in C++ ends with a semicolon (;)
// Curly braces {} are used to group statements
// Comments are ignored by the compiler. They are used to explain the code and make it more readable
// Single-line comments start with // and extend to the end of the line

// OMITTING NAMESPACE

#include <iostream>
int main()
{
    std::cout << "Hello World!";
    return 0;
}
// In the example above, we omitted the 'using namespace std;' line
// Therefore, we had to use 'std::cout' instead of just 'cout'