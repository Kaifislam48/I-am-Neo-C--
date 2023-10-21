/* You are tasked with developing a program to process and display full names. The program should accept user input for the first name and last name, create a FullName class using the provided names, and convert the FullName class to a basic-type string FullName fullName(firstName, lastName). Finally, the converted full name should be displayed on the console.



Note: The program can handle multiple-word names correctly.



Note: This kind of question will help in clearing Capgemini recruitment.

Input format :
The first line of input consists of the first name (a string).

The second line of input consists of the last name (a string).

Output format :
The output is a single line displaying the user's full name in the format "First Name Last Name".



Refer to the sample output for format specifications.

Code constraints :
The length of the first and last name strings will not exceed 100 characters.

The user may enter a first or last name with spaces or multiple words.

The input is case-sensitive, so the output will display the names exactly as entered.

Sample test cases :
Input 1 :
John
"Doe"
Output 1 :
John "Doe"
Input 2 :
Emily
Brown, Jr.
Output 2 :
Emily Brown, Jr.
Input 3 :
John
Smith Doe Johnson
Output 3 :
John Smith Doe Johnson */

#include <iostream>
#include <string>

using namespace std;

class FullName {
private:
    string firstName;
    string lastName;

public:
    FullName(string first, string last) {
        firstName = first;
        lastName = last;
    }

    string getFullName() {
        return firstName + " " + lastName;
    }
};

int main() {
    string firstName, lastName;
    getline(cin, firstName);
    getline(cin, lastName);

    FullName fullName(firstName, lastName);
    cout << fullName.getFullName() << endl;

    return 0;
}