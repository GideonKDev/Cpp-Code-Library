// Variables are containers for storing data values.
/*In C++, there are different types of variables (defined with different keywords), for example:
int - stores integers (whole numbers), without decimals, such as 123 or -123
double - stores floating point numbers, with decimals, such as 19.99 or -19.99
char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
string - stores text, such as "Hello World". String values are surrounded by double quotes
bool - stores values with two states: true or false*/

// Declaring (Creating) Variables
#include <iostream>
using namespace std;

int main()
{
    int myNum = 5;            // Integer (whole number)
    double myFloatNum = 5.99; // Floating point number
    char myLetter = 'D';      // Character
    string myText = "Hello";  // String
    bool myBoolean = true;    // Boolean
    return 0;
}

// Changing Variable Values
#include <iostream>
using namespace std;

int main()
{
    int myNumber = 24; // myNumber is 24
    myNumber = 50;     // myNumber is now 50
    cout << myNumber;
    return 0;
}

// Display Variables
// The cout object is used together with the << operator to display variables.To combine both text and a variable, separate them with the << operator:

#include <iostream>
using namespace std;

int main()
{
    string myName = "Omillo Fidel Charles";
    cout << "Hello, my name is" << myName << endl;
    return 0;
    ;
}

// Declare Multiple Variables
#include <iostream>
using namespace std;

int main()
{
    string player1 = "Omillo", player2 = "Fidel", player3 = "Charles";
    cout << player1 << endl;
    cout << player2 << endl;
    cout << player3 << endl;
    return 0;
}

// One value to multiple variables
#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    a = b = c = 50;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    return 0;
}

// Constants
//  You can create a variable with the const keyword if you don't want others (or yourself) to change it.
//  A constant variable cannot be modified after it is created.

#include <iostream>
using namespace std;

int main()
{
    const string myName = "Omillo Fidel Charles";
    // myName = "John"; // This will generate an error
    cout << myName;
    return 0;
}

// PROBLEMS
// Write a problem to find the area of a rectangular figure given the length as 15cm and with 7.5cm

#include <iostream>
using namespace std;

int main()
{
    int length = 15;
    float width = 7.5;
    float area = length * width;
    cout << area << endl;
    return 0;
}