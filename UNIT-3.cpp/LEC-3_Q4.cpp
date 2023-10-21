/* Sathana is developing a program for a math tutor who needs a tool to create customized practice exercises for their students. The tutor wants to generate a file with a specified number of practice questions, followed by an additional user-provided number. The program should write these numbers to a file named "numbers.txt" and then read the contents of the file to display them on the console.



Write a program that takes two integers as input: the count of practice questions (numberCount) and an additional number (additionalNumber). The program should generate a file named "numbers.txt" and populate it with numbers from 1 to the count of practice questions. It should then append the additional number to the file. Finally, the program should read the contents of the file and display each number on a separate line.



Note: This is a sample question asked in a Capgemini interview.

Input format :
The input contains two integers separated by spaces, representing the count of practice questions (numberCount) and the additional number (additionalNumber).

Output format :
The output displays the numbers stored in the file "numbers.txt" to the console, each number on a separate line.

Code constraints :
The input values for additionalNumber should be within the range of integer values.

The input values for numberCount should not exceed 100.

The program assumes that the file "numbers.txt" is writable and readable in the current directory.

Sample test cases :
Input 1 :
5  15
Output 1 :
1
2
3
4
5
15
Input 2 :
10 11
Output 2 :
1
2
3
4
5
6
7
8
9
10
11 */
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int numberCount, additionalNumber;

    cin >> numberCount >> additionalNumber;

    ofstream outputFile("numbers.txt");

    if (!outputFile) {
        cout << "Unable to create the file." << endl;
        return 1;
    }

    for (int i = 1; i <= numberCount; i++) {
        outputFile << i << endl;
    }

    outputFile << additionalNumber << endl;

    outputFile.close();

    ifstream inputFile("numbers.txt");

    if (!inputFile) {
        cout << "Unable to open the file." << endl;
        return 1;
    }

    int number;

    while (inputFile >> number) {
        cout << number << endl;
    }

    inputFile.close();

    return 0;
}