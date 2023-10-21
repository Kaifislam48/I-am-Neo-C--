/* Mukesh has a certain number of employees, and he wants to record their names and attendance status for a particular day. Each employee can either be "Present" or "Absent." Mukesh also prefers to use pointers to data members to manage the attendance data.


Note: This is a sample question asked in a Capgemini interview.
Input format :

The first line contains an integer, MAX_EMPLOYEES, representing the maximum number of employees.

For each employee (up to MAX_EMPLOYEES employees):

The next n lines contain a string name, representing the employee's name.and an integer attendanceStatus (0 absent or 1 present), separated by a space.
Output format :

The output will be the attendance report.

For each employee, it will display their name followed by a colon (:) and their attendance status (Present or Absent).


Refer to the sample output for formatting specifications.
Code constraints :

1 <= MAX_EMPLOYEES <= 10.

The name of each employee will be a string of alphanumeric characters without any spaces.

attendance status 0 absent and 1 present
Sample test cases :
Input 1 :

3
John 1
Alice 0
Bob 1

Output 1 :

Attendance Report:
John: Present
Alice: Absent
Bob: Present
 */

#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    string name;
    int attendanceStatus;
};

int main() {
    const int MAX_EMPLOYEES = 10;
    int numEmployees;

    cin >> numEmployees;

    Employee employees[MAX_EMPLOYEES];

    // Input employee data
    for (int i = 0; i < numEmployees; ++i) {
        cin >> employees[i].name >> employees[i].attendanceStatus;
    }

    // Output attendance report
    cout << "Attendance Report:" << endl;
    for (int i = 0; i < numEmployees; ++i) {
        cout << employees[i].name << ": ";
        if (employees[i].attendanceStatus == 0) {
            cout << "Absent" << endl;
        } else if (employees[i].attendanceStatus == 1) {
            cout << "Present" << endl;
        } else {
            cout << "Invalid attendance status" << endl;
        }
    }

    return 0;
}
