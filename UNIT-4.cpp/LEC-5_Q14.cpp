/* Imagine you are developing a school management system, and you have two types of individuals: "Person" and "Student". Both types of individuals have some common attributes, such as their first name, last name, and ID number. The "Person" class serves as the base class for all individuals, and it contains a method to print their information.



You need to create a specialized class called "Student" that inherits from the "Person" class. The "Student" class should have additional functionality to store test scores and calculate the student's grade based on those scores. Each student can have up to 10 test scores, and the number of actual scores may vary.

Grading Scale

Letter

Average (a)

O  90 ≤ a ≤ 100


E  80 ≤ a < 90


A  70 < a < 80


P  55 ≤ a < 70


D  40 ≤ a <55


T  a < 40






Input format :
The first line of input consists of a string representing the first name.

The second line of input consists of a string representing the last name.

The third line of input consists of an integer representing the ID.

The fourth line of input consists of the number of test scores.

The fifth line of input consists of an integer array of test scores, separated by a single space.

Output format :
The output displays the Name, ID, and Grade of the student in separate lines.



Refer to the sample output for formatting specifications.

Code constraints :
1<=Length of names <=100

1<=Id number <=1000

1<=Number of tests <=10

1<=Test scores <=100

Sample test cases :
Input 1 :
Shruthi
Ramesh
50
5
70 80 90 87 99
Output 1 :
Name: Shruthi Ramesh
ID: 50
Grade: E
Input 2 :
Monica
Geller
51
7
36 35 40 45 49 47 41
Output 2 :
Name: Monica Geller
ID: 51
Grade: D */

#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string firstName;
    string lastName;
    int id;

public:
    Person() {
        cin >> firstName >> lastName >> id;
    }

    void printInformation() {
        cout << "Name: " << firstName << " " << lastName << endl;
        cout << "ID: " << id << endl;
    }
};

class Student : public Person {
private:
    int numTests;
    int testScores[10];

public:
    Student() {
        cin >> numTests;
        for (int i = 0; i < numTests; i++) {
            cin >> testScores[i];
        }
    }

    char calculateGrade() {
        int totalScore = 0;
        for (int i = 0; i < numTests; i++) {
            totalScore += testScores[i];
        }

        int average = totalScore / numTests;

        if (average >= 90) {
            return 'O';
        } else if (average >= 80) {
            return 'E';
        } else if (average >= 70) {
            return 'A';
        } else if (average >= 55) {
            return 'P';
        } else if (average >= 40) {
            return 'D';
        } else {
            return 'T';
        }
    }

    void printInformation() {
        Person::printInformation();
        cout << "Grade: " << calculateGrade() << endl;
    }
};

int main() {
    Student student;
    student.printInformation();

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string firstName;
    string lastName;
    int id;

public:
    Person() {
        cin >> firstName >> lastName >> id;
    }

    void printInformation() {
        cout << "Name: " << firstName << " " << lastName << endl;
        cout << "ID: " << id << endl;
    }
};

class Student : public Person {
private:
    int numTests;
    int testScores[10];

public:
    Student() {
        cin >> numTests;
        for (int i = 0; i < numTests; i++) {
            cin >> testScores[i];
        }
    }

    char calculateGrade() {
        int totalScore = 0;
        for (int i = 0; i < numTests; i++) {
            totalScore += testScores[i];
        }

        int average = totalScore / numTests;

        if (average >= 90) {
            return 'O';
        } else if (average >= 80) {
            return 'E';
        } else if (average >= 70) {
            return 'A';
        } else if (average >= 55) {
            return 'P';
        } else if (average >= 40) {
            return 'D';
        } else {
            return 'T';
        }
    }

    void printInformation() {
        Person::printInformation();
        cout << "Grade: " << calculateGrade() << endl;
    }
};

int main() {
    Student student;
    student.printInformation();

    return 0;
}
