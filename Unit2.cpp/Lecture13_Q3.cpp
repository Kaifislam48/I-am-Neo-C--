/* You are developing a text processing application that requires removing duplicate characters from a given string. Your task is to write a program that takes a string as input and removes all duplicate characters from it. 


After removing the duplicate characters, the program should print the modified string. Write a program to implement this functionality using modifiers of string class.
Input format :

The input consists of a string str.
Output format :

The output prints the updated string after removing the duplicates.
Code constraints :

1 < Length of the string < 100
Sample test cases :
Input 1 :

ABABCDE

Output 1 :

ABCDE

Input 2 :

123412Qq

Output 2 :

1234Qq

Input 3 :

LAZY

Output 3 :

LAZY */

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;

    string updatedStr;
    for (char c : str) {
        if (updatedStr.find(c) == string::npos) {
            updatedStr += c;
        }
    }

    cout << updatedStr << endl;

    return 0;
}