/* Once upon a time in ancient Rome, there was a curious young mathematician named Marcus who loved studying Roman numerals. One day, he created a magical class called "RomanNumeral" that could convert these ancient symbols into modern decimal numbers.



With the help of a unique type conversion operator, Marcus' class effortlessly transformed the mysterious Roman numerals into their equivalent decimal forms, unveiling the secrets of the past for all to understand and enjoy.



Write a program to accomplish the above-given scenario.

Input format :
The input consists of a single line containing a valid Roman numeral as a string.

Output format :
The output displays a single line displaying the equivalent decimal number of the input Roman numeral.



Refer to the sample output for further formatting specifications.

Code constraints :
The input Roman numeral should be a valid Roman numeral. It should consist of the following Roman digits only: 'I', 'V', 'X', 'L', 'C', 'D', and 'M'.
The input Roman numeral should represent a valid positive integer within the range of 1 to 3999 (inclusive), since the Roman numeral system has limitations in representing higher numbers.
Sample test cases :
Input 1 :
VII
Output 1 :
Equivalent decimal number: 7 */


#include <iostream>
#include <string>
#include <map>

using namespace std;

class RomanNumeral {
public:
    RomanNumeral(const string& roman) : roman(roman) {}

    operator int() const {
        map<char, int> romanToDecimal = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        int decimal = 0;
        int prevValue = 0;

        for (int i = roman.length() - 1; i >= 0; i--) {
            int currentValue = romanToDecimal[roman[i]];

            if (currentValue < prevValue) {
                decimal -= currentValue;
            } else {
                decimal += currentValue;
            }

            prevValue = currentValue;
        }

        return decimal;
    }

private:
    string roman;
};

int main() {
    string inputRoman;
    cin >> inputRoman;

    RomanNumeral romanNumeral(inputRoman);

    cout << "Equivalent decimal number: " << int(romanNumeral) << endl;

    return 0;
}
