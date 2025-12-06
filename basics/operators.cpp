// Operators are used to perform operations on variables and values.

// 1. ARITHMETIC OPERATORS
// Addition + Adds together two values
// Subtraction - Subtracts one value from another
// Multiplication * Multiplies two values
// Division / Divides one value by another
// Modulus % Returns the remainder of the division
// Increment ++ Increaes the value of the variable by 1
// Decrement -- Decreases the value of a variable by 1

#include <iostream>
using namespace std;

int main()
{

    int x = 10;
    int y = 3;

    cout << (x + y) << "\n"; // 13
    cout << (x - y) << "\n"; // 7
    cout << (x * y) << "\n"; // 30
    cout << (x / y) << "\n"; // 3 (integer division)
    cout << (x % y) << "\n"; // 1

    int z = 5;
    ++z;
    cout << z << "\n"; // 6
    --z;
    cout << z << "\n"; // 5

    return 0;
}

// 2. ASSIGNMENT OPERATORS
// The addition compound assignment operator (+=) adds a value to a variable
// The subtraction compound assignment operator (-=) subtracts a value to a variable
// The multiplication compound assignment operator (*=) multiplies a value to a variable
// The division compound assignment operator (/=) divides a value to a variable
// The modules compound assignment operator (+=) returns the value of the remainder

#include <iostream>
using namespace std;

int main()
{

    int x = 10;

    x += 5;            // same as x = x + 5
    cout << x << "\n"; // 15

    x *= 2;            // same as x = x * 2
    cout << x << "\n"; // 30

    return 0;
}

// 3. COMPARISON OPERATORS
// Comparison operators are used to compare two values (or variables). This is important in programming, because it helps us to find answers and make decisions.
// The return value of a comparison is either 1 or 0, which means true (1) or false (0). These values are known as Boolean values.
//== Equal to
//!= Not equal to
//> Greater that
//< Less than
//>= Greater than or equal to
//<= Less than or equal to
#include <iostream>
using namespace std;

int main()
{

    int x = 5;
    int y = 3;
    cout << (x > y); // returns 1 (true) because 5 is greater than 3

    return 0;
}

// 4. LOGICAL OPERATORS
// As with comparison operators, you can also test for true (1) or false (0) values with logical operators.
//&& - Logical and - Returns true if both statements are true
//|| - Logical or - Returns true if one of the statements is true
//! - Logical not - Reverse the result, returns false if the result is true
#include <iostream>
using namespace std;

int main()
{
    int minAge = 18;
    bool hasId;
    int age;

    cout << "Enter your age: ";
    cin >> age;
    cout << "Do you have an ID? Select 1 for yes and 0 for no: ";
    cin >> hasId;

    if (age >= minAge && hasId == true)
    {
        cout << "You are an adult!";
    }
    else
        cout << "You are a child!";

    if (age >= minAge || hasId == true)
    {
        cout << "You are good to go!";
    }
    else
        cout << "At least one criteria should be met!";

    return 0;
}

// OPERATOR PRECEDENCE
// When a calculation contains more than one operator, C++ follows order of operations rules to decide which part to calculate first.
#include <iostream>
using namespace std;

int main()
{
    int result1 = 2 + 3 * 4;   // 2 + 12 = 14
    int result2 = (2 + 3) * 4; // 5 * 4 = 20

    cout << result1 << "\n";
    cout << result2 << "\n";

    return 0;
}
