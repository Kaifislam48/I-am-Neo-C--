/* Create a program to manage student data that includes a student's roll number, name, and marks for five subjects. Store these data inside a file called "student.txt" in separate lines. After that read the data in the file, and print them in the console. 



Note: Use a structure to implement this program.

Input format :
The first line consists of an integer: roll number.

The second line consists of a string: name.

The third line consists of five space-separated integers: marks for 5 subjects.



Note: For the name: instead of a string class, a character array is used.

Output format :
The first line displays an integer: roll number.

The second line displays a string: name.

The third line displays five space-separated integers: marks for 5 subjects.

Code constraints :
Length of the student's name (char array) <= 30 characters

Roll number and marks should be positive integers.

Sample test cases :
Input 1 :
131
Sunil J
45 65 87 88 99
Output 1 :
131
Sunil J
45 65 87 88 99  */

#include <iostream>
#include <fstream>

using namespace std;

struct Student {
    int rollNumber;
    char name[31];
    int marks[5];
};

int main() {
    Student student;

    
    cin >> student.rollNumber;

   
    cin.ignore();
    cin.getline(student.name, 31);

    
    for (int i = 0; i < 5; i++) {
        cin >> student.marks[i];
    }

    ofstream file("student.txt");
    file << student.rollNumber << endl;
    file << student.name << endl;
    for (int i = 0; i < 5; i++) {
        file << student.marks[i] << " ";
    }
    file.close();

    ifstream readFile("student.txt");
    string line;
    while (getline(readFile, line)) {
        cout << line << endl;
    }
    readFile.close();

    return 0;
}