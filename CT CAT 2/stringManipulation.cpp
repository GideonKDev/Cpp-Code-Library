/*
FINAL CAT 2
Question 1: .
File Processing & String Manipulation (30 marks) Task: Write a C++ program that:
Reads a text file named input.txt.
Counts occurrences of each vowel (a, e, i, o, u) case-insensitively.
Replaces all digits 0-9 in the file with #.
Writes the modified text to output.txt and displays vowel counts on the console.
Example: If input.txt contains: Hello123 World, then output.txt should contain: Hello### World! and the console should display:
A: 0 | E: 1 | I: 0 | O: 2 | U: 0
*/
#include <iostream>
#include <fstream>  // Required for file handling
#include <cctype>   // Required for tolower() and isdigit()

using namespace std;

int main() {
    // 1. Open input and output files
    ifstream inputFile("input.txt");
    ofstream outputFile("output.txt");

    // Check if input file exists
    if (!inputFile) {
        cerr << "Error: Unable to open input.txt. Make sure the file exists." << endl;
        return 1;
    }

    char ch;
    // Variables to store vowel counts
    int countA = 0, countE = 0, countI = 0, countO = 0, countU = 0;

    // Read the file character by character
    while (inputFile.get(ch)) {
        
        // 2. Count occurrences of each vowel case-insensitively
        char lowerCh = tolower(ch); // Convert to lowercase for easy checking

        switch (lowerCh) {
            case 'a': countA++; break;
            case 'e': countE++; break;
            case 'i': countI++; break;
            case 'o': countO++; break;
            case 'u': countU++; break;
        }

        // 3. Replace all digits 0-9 with #
        if (isdigit(ch)) {
            ch = '#';
        }

        // 4. Write the modified text to output.txt
        outputFile.put(ch);
    }

    // Close the files
    inputFile.close();
    outputFile.close();

    // 4 (continued). Display vowel counts on the console
    cout << "A: " << countA << " | " 
         << "E: " << countE << " | " 
         << "I: " << countI << " | " 
         << "O: " << countO << " | " 
         << "U: " << countU << endl;

    return 0;
}
