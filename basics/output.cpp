// The cout object, together with the << operator, is used to output values and print text.

// PRINT TEXT TO THE CONSOLE

#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World, I am Omillo Fidel Charles and I am learning C++!";
    return 0;
}

// You can add as many cout objects as you want. However, note that it does not insert a new line at the end of the output:

// PRINT NUMBERS TO THE CONSOLE
// You can also use cout() to print numbers.However, unlike text, we don't put numbers inside double quotes:

#include <iostream>
using namespace std;

int main()
{
    cout << 1000;
    return 0;
}

// PRINT NEW LINES
// To print text on a new line, you can use the newline character \n inside the string:

#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World!\n";
    cout << "I am Omillo Fidel Charles\n and I love C++!";
    return 0;
}

// Another way to insert a new line, is with the endl manipulator:

#include <iostream>>
using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    cout << "I am Omillo Fidel Charles!";
    return 0;
}