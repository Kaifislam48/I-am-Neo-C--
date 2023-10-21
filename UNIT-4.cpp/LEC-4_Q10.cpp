/* You are a teacher and want to calculate the grade for a student based on their obtained marks. You have a grading system that assigns grades based on the percentage of marks obtained out of the total marks. You need to develop a program that takes the obtained marks as input, calculates the grade, and displays the marks and grade.



Write a program that takes the obtained marks as input and calculates the percentage based on the given marks and a total mark value. Using the percentage, determine the grade according to the following criteria:



Percentage >= 90: Grade A+

Percentage >= 80: Grade A

Percentage >= 70: Grade B

Percentage >= 60: Grade C

Percentage >= 50: Grade D

Percentage < 50: Grade F



The program should create a Grade object with the obtained marks and the determined grade. It should then convert the Grade object to two basic types: an int for the marks and a string for the grade: int marks = studentGrade; . Finally, the program should display the marks and grades.



Note: This kind of question will help in clearing Wipro recruitment.

Input format :
The input contains an integer value representing the obtained marks.

Output format :
The output will display the following information:

The first line of output contains obtained marks

The second line of output contains the corresponding grade based on the percentage calculated from the obtained marks.



Refer to the sample output for format specifications.

Code constraints :
The obtained marks should be a non-negative integer.

The obtained marks should not exceed the total marks (500 in this case).

Sample test cases :
Input 1 :
490
Output 1 :
Marks: 490
Grade: A+
Input 2 :
420
Output 2 :
Marks: 420
Grade: A
Input 3 :
380
Output 3 :
Marks: 380
Grade: B
Input 4 :
300
Output 4 :
Marks: 300
Grade: C
Input 5 :
280
Output 5 :
Marks: 280
Grade: D
Input 6 :
200
Output 6 :
Marks: 200
Grade: F */

#include <iostream>
#include <string>

using namespace std;

class Grade {
public:
    int marks;
    string grade;

    Grade(int marks, string grade) {
        this->marks = marks;
        this->grade = grade;
    }
};

int main() {
    int obtainedMarks;
    int totalMarks = 500;

    // Input the obtained marks
    cin >> obtainedMarks;

    // Calculate the percentage
    float percentage = static_cast<float>(obtainedMarks) / totalMarks * 100;

    // Determine the grade
    string grade;
    if (percentage >= 90) {
        grade = "A+";
    } else if (percentage >= 80) {
        grade = "A";
    } else if (percentage >= 70) {
        grade = "B";
    } else if (percentage >= 60) {
        grade = "C";
    } else if (percentage >= 50) {
        grade = "D";
    } else {
        grade = "F";
    }

    // Create a Grade object
    Grade studentGrade(obtainedMarks, grade);

    // Display the marks and grade
    cout << "Marks: " << studentGrade.marks << endl;
    cout << "Grade: " << studentGrade.grade << endl;

    return 0;
}
