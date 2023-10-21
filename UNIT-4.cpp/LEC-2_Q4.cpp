/* In a magical realm, a talented wizard named Merlin crafted a magnificent RepeatableString class with the enchanting ability to replicate strings using the * operator.



One day, a curious adventurer named Arthur discovered Merlin's creation and decided to test its magical powers. Arthur entered a captivating string into the console and chose a magical number of repetitions.



As the * operator worked its charm, the string multiplied and unfolded into an extraordinary sequence. Arthur marveled at the operator overloading concept, realizing its potential to create spellbinding patterns and unleash the magic of repetition in their incredible quests through the mystical lands.



Note: The program has to be implemented using the character array.

Input format :
The input consists of a string, followed by the number of repetitions.

Output format :
The output displays the result of repeating the input string as per the given number of repetitions.



Refer to the sample output for further formatting specifications.

Code constraints :
The input string can contain any printable ASCII characters except for '\0' (null character).
The maximum length of the input string is 100 characters.
The number of repetitions should be a non-negative integer.
Sample test cases :
Input 1 :
this
4
Output 1 :
Result: thisthisthisthis
Input 2 :
S
6
Output 2 :
Result: SSSSSS */


#include <iostream>
#include <cstring>

using namespace std;

class RepeatableString {
private:
    char str[101];

public:
    RepeatableString(const char* s) {
        strcpy(str, s);
    }

    RepeatableString operator*(int n) {
        char result[101];
        strcpy(result, str);
        for (int i = 1; i < n; i++) {
            strcat(result, str);
        }
        return RepeatableString(result);
    }

    const char* getString() {
        return str;
    }
};

int main() {
    char input[101];
    cin.getline(input, 101);

    RepeatableString rs(input);

    int repetitions;
    cin >> repetitions;

    RepeatableString result = rs * repetitions;

    cout << "Result: " << result.getString() << endl;

    return 0;
}