/* You are developing a simple banking application that allows users to manage their account balance. To implement this, you have two classes: "AddAmountBase" and "AddAmount". The "AddAmountBase" class serves as the base class, which contains a protected data member amount to store the current balance. It has two constructors: one initializes the balance to 50, and another adds a given amount, 'a' to the balance.



Your task is to create a derived class "AddAmount" that inherits from the "AddAmountBase" class. The "AddAmount" class should have two constructors, one initializes the balance to 50, and another adds a given amount to the balance using the base class constructors.



The "AddAmount" class should also have a member function named print_amount() to display the current balance.

Input format :
The input consists of the amount in the piggy bank.

Output format :
The output prints the total amount in Piggie Bank after adding the input to the initial amount.

Code constraints :
0<=amount<=100000

Sample test cases :
Input 1 :
400
Output 1 :
450
Input 2 :
250
Output 2 :
300 */


#include <iostream>
using namespace std;

class AddAmountBase {
protected:
    int amount;

public:
    // Constructor to initialize the balance to 50
    AddAmountBase() : amount(50) {}

    // Constructor to add a given amount to the balance
    AddAmountBase(int a) : amount(50 + a) {}
};

class AddAmount : public AddAmountBase {
public:
    // Constructor to initialize the balance to 50
    AddAmount() {}

    // Constructor to add a given amount to the balance
    AddAmount(int a) : AddAmountBase(a) {}

    // Member function to print the current balance
    void print_amount() {
        cout << amount << endl;
    }
};

int main() {
    int input;
    cin >> input;

    // Create an AddAmount object and use the appropriate constructor
    AddAmount piggyBank(input);

    // Call the print_amount function to display the current balance
    piggyBank.print_amount();

    return 0;
}
