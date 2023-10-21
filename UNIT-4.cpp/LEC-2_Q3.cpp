/* Rithik wants to write a program to compare the ages of individuals. Help him to implement a program that defines a Person class to represent individuals by their ages. The program should take user input for the ages of three people and determine if Person 1 is of the same age as Person 2 or not and if Person 1 is of the same age as Person 3 or not.

Input format :
The input consists of three integers representing the ages, separated by a space.

Output format :
The output consists of two lines, each containing a sentence describing the comparison result between Person 1 and the other individuals.



Refer to the sample output for further formatting specifications.

Code constraints :
1 <= age <= 100

Sample test cases :
Input 1 :
23 45 23
Output 1 :
Person 1 is not the same age as Person 2.
Person 1 is the same age as Person 3.
Input 2 :
67 39 39
Output 2 :
Person 1 is not the same age as Person 2.
Person 1 is not the same age as Person 3.
Input 3 :
50 50 50
Output 3 :
Person 1 is the same age as Person 2.
Person 1 is the same age as Person 3.
Input 4 :
31 31 51
Output 4 :
Person 1 is the same age as Person 2.
Person 1 is not the same age as Person 3. */

#include <iostream>
using namespace std;

class Person {
public:
    int age;
    Person(int a) : age(a) {}
    
    bool isSameAgeAs(const Person& other) {
        return age == other.age;
    }
};

int main() {
    int age1, age2, age3;
    cin >> age1 >> age2 >> age3;

    Person person1(age1);
    Person person2(age2);
    Person person3(age3);

    if (person1.isSameAgeAs(person2)) {
        cout << "Person 1 is the same age as Person 2." << endl;
    } else {
        cout << "Person 1 is not the same age as Person 2." << endl;
    }

    if (person1.isSameAgeAs(person3)) {
        cout << "Person 1 is the same age as Person 3." << endl;
    } else {
        cout << "Person 1 is not the same age as Person 3." << endl;
    }

    return 0;
}
