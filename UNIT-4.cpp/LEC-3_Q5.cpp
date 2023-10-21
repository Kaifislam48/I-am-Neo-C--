/* Ashwin is tasked with developing a program that focuses on managing fractions and converting them to decimals. The program's core function is to gather user input for both the numerator and denominator of a fraction, execute the conversion to a decimal, and subsequently showcase both the original fraction and its corresponding decimal form. Crucially, you should employ basic-to-class type conversion within the program to facilitate this conversion process seamlessly. This approach will enable users to effortlessly work with fractions and obtain their decimal equivalents through an intuitive and user-friendly interface.



Write a program to accomplish his task.

Input format :
The input consists of two integers, representing the numerator and denominator of the fraction, separated by lines.

Output format :
The first line of the output displays the fraction in the following format: "numerator/denominator".

The second line displays the decimal form of the given fraction with two decimal places.



Refer to the sample output for further formatting specifications.

Code constraints :
0 <= numerator <= 100

1 <= denominator <= 100

Sample test cases :
Input 1 :
3
4
Output 1 :
Fraction: 3/4 is equivalent to decimal: 0.75
Input 2 :
0
3
Output 2 :
Fraction: 0/3 is equivalent to decimal: 0.00 */

#include <iostream>
#include <iomanip>

using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;

public:
    Fraction(int num, int denom) {
        numerator = num;
        denominator = denom;
    }

    double toDecimal() {
        return static_cast<double>(numerator) / denominator;
    }

    void display() {
        cout << "Fraction: " << numerator << "/" << denominator << " is equivalent to decimal: ";
        cout << fixed << setprecision(2) << toDecimal() << endl;
    }
};

int main() {
    int numerator, denominator;
    cin >> numerator >> denominator;

    Fraction fraction(numerator, denominator);
    fraction.display();

    return 0;
}