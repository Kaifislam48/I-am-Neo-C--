/* Guna wants to create a program that allows a teacher to input student information and generate their report cards. The program should take the number of students as input, followed by their names, roll numbers, and marks for five subjects. Finally, it should display the report cards for all the students. 


He created a class called Student to store all the attributes and use an array of objects to solve the problem. Help him meet his expectations.


Note: This question is a sample question asked in an Accenture interview.
Input format :

The input begins with an integer, n, representing the number of students

For each student, the following inputs are provided and separated by a space:

-A string representing the student's name.

-An integer representing the student's roll number.

-Five integers representing the marks obtained by the student in each of the five subjects.
Output format :

The output displays the report cards for all the students.

Each report card should be displayed in the following format:


Name: [name]

Roll Number: [rollNumber]

Total Marks: [totalMarks]


where [name] represents the student's name, [rollNumber] represents the student's roll number, and [totalMarks] represents the total marks obtained by the student.


Refer to the sample output for the exact format.
Code constraints :

1 <= n <= 100

1 <= Length of the name <= 100

1 <= roll number <= 100

0 <= Each marks <= 100
Sample test cases :
Input 1 :

2
John 1 90 85 95 80 92
Emma 2 88 92 78 85 90

Output 1 :

Student Report Cards:
Name: John
Roll Number: 1
Total Marks: 442
Name: Emma
Roll Number: 2
Total Marks: 433 */


#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int rollNumber;
    int marks[5];
    int totalMarks;

    Student() {
        totalMarks = 0;
    }

    void calculateTotalMarks() {
        totalMarks = 0;
        for (int i = 0; i < 5; i++) {
            totalMarks += marks[i];
        }
    }

    void displayReportCard() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Total Marks: " << totalMarks << endl;
    }
};

int main() {
    int n;
    cin >> n; // Number of students
    Student students[n];

    cout << "Student Report Cards:" << endl;

    for (int i = 0; i < n; i++) {
        cin >> students[i].name >> students[i].rollNumber;
        for (int j = 0; j < 5; j++) {
            cin >> students[i].marks[j];
        }
        students[i].calculateTotalMarks();
    }

    for (int i = 0; i < n; i++) {
        students[i].displayReportCard();
    }

    return 0;
}
