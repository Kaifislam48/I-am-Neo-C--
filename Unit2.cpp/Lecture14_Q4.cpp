/* You have been assigned the task of designing a program that checks whether a given string is a valid phone number or not.


Write a function isValidPhoneNumber that takes a phoneNumber (string) as input and determines whether it is a valid phone number. The phone number format should be XXX-XXX-XXXX, where X represents a digit. The number is considered valid if the hyphens are in exact same positions and the length of the string is 12.


Implement the function isValidPhoneNumber and write a main program to test it. The main program should prompt the user to enter a phone number, and then display whether the entered string is a valid phone number or not. If the number is valid, print the numbers without using hyphens.


Note: This kind of question helps in clearing Capgemini tests.
Input format :

The input consists of a phone number in the format XXX-XXX-XXXX, where X represents a digit.
Output format :

The output displays whether the entered string is a valid phone number or not as shown in the sample output.

If the number is valid, the output displays the number without hyphens.
Code constraints :

The phone number should be in the format XXX-XXX-XXXX, with a total length of 12 characters.

Each X in the phone number should be a digit (0-9).

No additional characters or spaces should be present in the input.
Sample test cases :
Input 1 :

123-456-7890

Output 1 :

Yes, the phone number is valid.
1234567890

Input 2 :

123-456-789

Output 2 :

No, the phone number is not valid.

Input 3 :

123456-7890

Output 3 :

No, the phone number is not valid.
 */

#include <iostream>
#include <string>
using namespace std;

bool isValidPhoneNumber(string phoneNumber) {
  if (phoneNumber.length() != 12) {
    return false;
  }

  for (int i = 0; i < phoneNumber.length(); i++) {
    if (i == 3 || i == 7) {
      if (phoneNumber[i] != '-') {
        return false;
      }
    } else {
      if (!isdigit(phoneNumber[i])) {
        return false;
      }
    }
  }

  return true;
}

int main() {
  string phoneNumber;
  cin >> phoneNumber;

  if (isValidPhoneNumber(phoneNumber)) {
    cout << "Yes, the phone number is valid." << endl;
    cout << phoneNumber.substr(0, 3) << phoneNumber.substr(4, 3) << phoneNumber.substr(8) << endl;
  } else {
    cout << "No, the phone number is not valid." << endl;
  }

  return 0;
}