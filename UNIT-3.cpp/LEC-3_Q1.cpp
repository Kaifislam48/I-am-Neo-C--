/* Regina wants to store the student data in a file and retrieve it. Write a program to save the student ID along with five of their marks in a file called "marks.dat"  retrieve the same, and print it.



Note: This is a sample question asked in an Accenture interview.

Input format :
The first line of input contains N, which represents the number of students.

The next N lines of input contain the student ID, followed by 5 marks.

Output format :
The output displays a comma-separated list of all student data.



Refer to the sample output for formatting specifications.

Code constraints :
The program expects exactly five marks per student.

The program assumes that the file "marks.dat" is writable and readable in the current directory.

Sample test cases :
Input 1 :
5
1 10 20 30 40 50
2 20 30 40 50 60
3 30 40 50 60 70
4 20 40 60 80 20
5 40 45 60 70 80
Output 1 :
1,10,20,30,40,50,
2,20,30,40,50,60,
3,30,40,50,60,70,
4,20,40,60,80,20,
5,40,45,60,70,80, */

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    ofstream outputFile("marks.dat");
    if (!outputFile) {
        cout << "Error opening file!" << endl;
        return 0;
    }

    for (int i = 0; i < n; i++) {
        int studentID;
        vector<int> marks(5);

        cin >> studentID;
        for (int j = 0; j < 5; j++) {
            cin >> marks[j];
        }

        outputFile << studentID;
        for (int j = 0; j < 5; j++) {
            outputFile << "," << marks[j];
        }
        outputFile << "," << endl;
    }

    outputFile.close();

    ifstream inputFile("marks.dat");
    if (!inputFile) {
        cout << "Error opening file!" << endl;
        return 0;
    }

    string line;
    while (getline(inputFile, line)) {
        cout << line << endl;
    }

    inputFile.close();

    return 0;
}