/* Teju is in the process of developing a program that combines two input strings into a single string. To achieve this, let's create a function named concatenateStrings that utilizes string objects. This function will accept three string arguments: the result string (where the concatenated string will be stored) and two input strings: str1 and str2.


Additionally, the main program will engage with the user by requesting the first and second strings. It will subsequently invoke the concatenateStrings function to generate the concatenated string and, finally, print the result.


Note: This is a sample question asked in an HCL interview.
Input format :

The first line consists of the first string, str1.

The second line consists of the second string, str2.
Output format :

The output displays the concatenated string.
Code constraints :

1 <= Length of the input strings <= 100

The input string contains lowercase and uppercase characters, digits, and special characters.
Sample test cases :
Input 1 :

under
ground

Output 1 :

underground

Input 2 :

inner124
@class.hi

Output 2 :

inner124@class.hi
 */

#include <iostream>
#include <string>
using namespace std;

void concatenateStrings(string& result, const string& str1, const string& str2) {
    result = str1 + str2;
}

int main() {
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);

    string result;
    concatenateStrings(result, str1, str2);

    cout << result << endl;

    return 0;
}