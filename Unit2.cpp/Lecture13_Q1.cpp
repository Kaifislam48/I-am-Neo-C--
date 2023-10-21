/* Sena wants to upskill in C++ by learning about member functions. Help him solve the following question: Create a class called BankATM to represent an ATM machine having attributes: ATM ID (integer), location (string), and available cash (float). 


Implement member functions to withdraw cash, deposit cash, and display the current available cash in the ATM.


Note: This kind of question helps in clearing Mettl tests.
Input format :

The input consists of the following in separate lines:

    An integer value for the ATM ID.
    A string for the location of the ATM.
    A floating-point value for the available cash in the ATM.
    A floating-point value representing the amount to withdraw.
    A floating-point value representing the amount to deposit.

Output format :

The output prints the following:

For a successful withdrawal, it should display

    "Withdrawal successful. Available cash: [cash]" where [cash] is the updated available cash in the ATM after withdrawal, displayed with one decimal place.

For an unsuccessful withdrawal: it should display: "Insufficient cash in the ATM."


After a successful deposit, it should display:

    "Deposit successful. Available cash: [cash]" where [cash] is the updated available cash in the ATM after deposit, displayed with one decimal place.


Finally, it should display the available cash in the ATM:

    "Available cash in ATM: [cash]" where [cash] is the available cash in the ATM, displayed without any decimal places.


Refer to the sample outputs for the formatting specifications.
Code constraints :

ATM id > 0

0 < available cash, amount to withdraw and deposit < 105
Sample test cases :
Input 1 :

1234
Main Street
1000.5
200.7
300.0

Output 1 :

Withdrawal successful. Available cash: 799.8
Deposit successful. Available cash: 1099.8
Available cash in ATM: 1099.8

Input 2 :

4321
High Street
1500.07
2000.5
3000.55

Output 2 :

Insufficient cash in the ATM.
Deposit successful. Available cash: 4500.6
Available cash in ATM: 4500.6 */

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class BankATM {
private:
    int atmID;
    string location;
    float availableCash;

public:
    BankATM(int id, const string& loc, float cash) : atmID(id), location(loc), availableCash(cash) {}

    void withdraw(float amount) {
        if (amount > availableCash) {
            cout << "Insufficient cash in the ATM." << endl;
        } else {
            availableCash -= amount;
            cout << fixed << setprecision(1);
            cout << "Withdrawal successful. Available cash: " << availableCash << endl;
        }
    }

    void deposit(float amount) {
        availableCash += amount;
        cout << fixed << setprecision(1);
        cout << "Deposit successful. Available cash: " << availableCash << endl;
    }

    void displayAvailableCash() {
        cout << "Available cash in ATM: " << availableCash << endl;
    }
};

int main() {
    int atmID;
    string location;
    float availableCash, withdrawAmount, depositAmount;

    cin >> atmID;
    cin.ignore(); // Clear the newline character
    getline(cin, location);
    cin >> availableCash;
    cin >> withdrawAmount;
    cin >> depositAmount;

    BankATM atm(atmID, location, availableCash);

    atm.withdraw(withdrawAmount);
    atm.deposit(depositAmount);
    atm.displayAvailableCash();

    return 0;
}
