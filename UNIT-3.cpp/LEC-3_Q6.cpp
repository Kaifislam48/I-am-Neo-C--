/* Kala is expected to write a setup function that will write some data that is received from the user to a file named "test.txt". You are provided with the main() method where your setup code is called, and if it returns 0, then it will proceed to read the file and print all the data that was provided in the same format.



The input should be an integer, a float, or a string. The output shall be the integer and float in the first line and the string in the second line. If the setup code fails, then return non-zero upon receipt, upon which the main method will print "Unable to setup." If you cannot open the file for either reading or writing, then you have to print "Cannot open file."



Note: This is a sample question asked in an HCL interview.

Input format :
The input contains an integer, a float, and a string. These inputs can be provided through the console, and they should be entered in that order, separated by spaces.

Output format :
The program reads the contents of the "test.txt" file and prints the values stored in it. The output format is as follows:



The first line of the output will contain the integer and float values retrieved from the file, separated by a space.

The second line of the output will contain the string retrieved from the file.



Refer to the sample output for formatting specifications.

Code constraints :
The integer input can be any valid integer value.

The float input can be any valid float value.

The string input can be any sequence of characters without spaces, up to a maximum of 79 characters.

Sample test cases :
Input 1 :
10 22.34 
HelloWorld!
Output 1 :
10 22.34 
HelloWorld!
Input 2 :
0 0.0
Empty String
Output 2 :
0 0 
Empty
Input 3 :
-50 0.25
Today is a beautiful day.
Output 3 :
-50 0.25 
Today */

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int setup(int num, float fnum, string str) {
    ofstream outputFile("test.txt");

    if (!outputFile) {
        return 1;
    }

    outputFile << num << " " << fnum << endl;
    outputFile << str << endl;

    outputFile.close();

    return 0;
}

int main() {
    int num;
    float fnum;
    string str;

    cin >> num >> fnum >> str;

    if (setup(num, fnum, str) != 0) {
        cout << "Unable to setup." << endl;
        return 0;
    }

    ifstream inputFile("test.txt");

    if (!inputFile) {
        cout << "Cannot open file." << endl;
        return 0;
    }

    int readNum;
    float readFnum;
    string readStr;

    inputFile >> readNum >> readFnum;
    inputFile.ignore(); // Ignore the newline character
    getline(inputFile, readStr);

    cout << readNum << " " << readFnum << endl;
    cout << readStr << endl;

    inputFile.close();

    return 0;
}