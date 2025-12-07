// Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.

// To declare an array, define the variable type, specify the name of the array followed by square brackets and specify the number of elements it should store
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string cars[4] = {"Volvo", "BMW", "Ford", "Audi"};

    return 0;
}

// Access the Elements of an Array
// You access an array element by referring to the index number inside square brackets []
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string players[3] = {"Omillo", "Chris", "Ericko"};
    players[0] = "Marcus"; // Replaces Omillo with Marcus

    return 0;
}

// Loop Through an Array
// You can loop through the array elements with the for loop
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string chelseaPlayers[5] = {"Sanchez", "Fofana", "Palmer", "Estevao", "Caicedo"};

    for (int i = 0; i < 5; i++)
    {
        cout << chelseaPlayers[i];
    }

    return 0;
}

// Omitting the array size
// In C++, you don't have to specify the size of the array. The compiler is smart enough to determine the size of the array based on the number of inserted values
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string cars[] = {"Volvo", "BMW", "Ford"}; // Three array elements
    return 0;
}

// Get the Size of an Array
// To get the size of an array, you can use the sizeof() operator
// However the sizeof() operator returns the size of a type in bytes
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int myNumbers[5] = {10, 20, 30, 40, 50};
    cout << sizeof(myNumbers);
    int getArrayLength = sizeof(myNumbers) / sizeof(myNumbers[0]);
    cout << getArrayLength;

    return 0;
}

// Multidimensional Arrays
// A multi-dimensional array is an array of arrays.
// To declare a multi-dimensional array, define the variable type, specify the name of the array followed by square brackets which specify how many elements the main array has, followed by another set of square brackets which indicates how many elements the sub-arrays have
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string letters[2][4] = {
        {"A", "B", "C", "D"},
        {"E", "F", "G", "H"}};

    cout << letters[0][2]; // Outputs "C"

    return 0;
}