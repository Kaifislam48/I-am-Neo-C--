/* Banu wants to write a program that allows her to enter text and a count value. The program will store the given text multiple times in a file named "sample.txt". Later, Banu wants to read the contents of the file and display them on the console.



You should write the main() method where you call the setup code, and if it returns 0, then proceed to do the following:



a) check if the file is open

b) read through the contents of the file

c) check if the eof is reached and if yes, then print "End of file reached"

d) close the file.



If the setup code fails, then return non-zero, upon receiving which the main method will print "Unable to setup data." If you cannot open the file for either reading or writing, then you have to print "Unable to open file."



Note: This is a sample question asked in an Accenture interview.

Input format :
The first line of input consists of text (a single line).

The second line input consists of a count value, indicating the number of times the text should be repeated in the file.

Output format :
The output displays, Create or overwrite the file "sample.txt" and store the given text multiple times, according to the count value.

The output displays the contents of the file and displays each line on the console.

If the end of the file is reached, the output display the message "End of file reached".



Refer to the sample output for the formatting specifications.

Code constraints :
Length of the text <= 10

Sample test cases :
Input 1 :
HelloWorld
10
Output 1 :
HelloWorld
HelloWorld
HelloWorld
HelloWorld
HelloWorld
HelloWorld
HelloWorld
HelloWorld
HelloWorld
HelloWorld
End of file reached
Input 2 :
Universal
4
Output 2 :
Universal
Universal
Universal
Universal
End of file reached */

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string text;
    int count;

    getline(cin, text);
    cin >> count;

    ofstream outputFile("sample.txt");
    if (!outputFile) {
        cout << "Unable to open file." << endl;
        return 1;
    }

    for (int i = 0; i < count; i++) {
        outputFile << text << endl;
    }

    outputFile.close();

    ifstream inputFile("sample.txt");
    if (!inputFile) {
        cout << "Unable to open file." << endl;
        return 1;
    }

    string line;
    while (getline(inputFile, line)) {
        cout << line << endl;
    }

    if (inputFile.eof()) {
        cout << "End of file reached" << endl;
    }

    inputFile.close();

    return 0;
}