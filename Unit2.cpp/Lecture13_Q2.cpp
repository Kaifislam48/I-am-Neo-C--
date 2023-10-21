/* Harry wants to write a program that takes an integer input from the user and determines the number of digits in the input number. Help Harry implement the program using a class named Input using a member function called count. Beginning zeros will be ignored while counting the number of digits.


Note: This question is a sample question asked in a Wipro interview.
Input format :

The input consists of an integer n.
Output format :

The output displays the count of the number of digits in the entered number.


Note: Beginning zeros will be ignored while counting the number of digits.
Code constraints :

0 < n <= 109
Sample test cases :
Input 1 :

12345

Output 1 :

5

Input 2 :

4321

Output 2 :

4 */

#include <iostream>
using namespace std;

class Input {
public:
    int n;

    Input(int num) {
        n = num;
    }

    int count() {
        int digitCount = 0;
        int num = n;

        // Ignore leading zeros
        while (num > 0 && num % 10 == 0) {
            num /= 10;
        }

        // Count digits in the remaining number
        while (num > 0) {
            digitCount++;
            num /= 10;
        }

        return digitCount;
    }
};

int main() {
    int n;
    cin >> n;
    Input input(n);

    int digitCount = input.count();
    cout << digitCount << endl;

    return 0;
}
