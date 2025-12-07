// A reference variable is an alias for an existing variable. It is created using the & operator
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string food = "Pizza";
    string &meal = food;

    cout << food << "\n";
    cout << meal << "\n";
    return 0;
}

// Updating Through References
// If you change the value of a reference variable, the original variable will also change (and vice versa), because they both refer to the same memory location
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string food = "Pizza"; // food variable
    string &meal = food;   // reference to food

    meal = "Burger"; // change the reference

    cout << food << "\n"; // Outputs Burger
    cout << meal << "\n"; // Outputs Burger
    return 0;
}
