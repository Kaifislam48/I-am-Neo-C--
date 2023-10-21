/* You are tasked with writing a C++ program to manage objects of the class Z. The program should perform the following actions:


    Prompt the user to enter the number of Z objects they want to create.
    Create the specified number of Z objects using an array.
    After creating the objects, the program should automatically call the constructor for each object and display "Constructor called."
    Then, the program should automatically call the destructor for each object and display "Destructor called."


Ensure that your program handles the creation and destruction of objects correctly based on the user's input.


Note: This is a sample question asked in an HCL interview.
Input format :

The input consists of an integer n representing the number of objects you want to create.
Output format :

The output displays the message "Constructor called" each time an object of class Z is created.

The output displays the message "Destructor called" each time an object of class Z is destroyed.


Refer to the sample output for the formatting specifications.
Code constraints :

1 <= n <= 100
Sample test cases :
Input 1 :

3

Output 1 :

Constructor called
Constructor called
Constructor called
Destructor called
Destructor called
Destructor called
 */

#include <iostream>
using namespace std;

class Z {
public:
    Z() {
        cout << "Constructor called" << endl;
    }

    ~Z() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    int n;
    cin >> n;

    Z* objects = new Z[n]; // Create an array of n Z objects

    delete[] objects; // Delete the array, which will call the destructors

    return 0;
}
