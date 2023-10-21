/* Help Rita to write a program that performs file operations on the text file "sample.txt". The program should allow the user to input a string, which will be written to the file. Then, the program should read the contents of the file and display them on the console.

Input format :
The input consists of a string, which can be a word or a sentence.

Output format :
The output displays the contents written in the file.

Sample test cases :
Input 1 :
C++ is the most widely used System Programming Language.
Output 1 :
C++ is the most widely used System Programming Language.
Input 2 :
1234 ABCD @#$%
Output 2 :
1234 ABCD @#$%
Input 3 :
Landslide!
Output 3 :
Landslide! */

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string input;

    // Get user input
    getline(cin, input);

    // Write input to file
    ofstream outputFile("sample.txt");
    if (!outputFile) {
        cerr << "Error creating the file 'sample.txt'" << endl;
        return 1;
    }
    outputFile << input;
    outputFile.close();

    // Read and print file contents
    ifstream inputFile("sample.txt");
    if (!inputFile) {
        cerr << "Error opening the file 'sample.txt'" << endl;
        return 1;
    }
    string output;
    getline(inputFile, output);
    cout << output << endl;
    inputFile.close();

    return 0;
}