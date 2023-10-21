/* You have been assigned the task of designing a program that converts a given sentence into reverse order, extracts the vowels and consonants from the sentence, and prints them separately.


Write a function reverseSentence that takes a sentence (string) as input and returns the sentence with the order of words reversed.


Write a function extractVowelsAndConsonants that takes a sentence (string) as input and extracts the vowels and consonants from it. The extracted vowels and consonants should be stored in the provided vowels and consonant strings, respectively.


Implement the functions reverseSentence and extractVowelsAndConsonants, and write a main program to test them. The main program should prompt the user to enter a sentence, display the reversed sentence, and print the extracted vowels and consonants separately.


Note: This kind of question helps in clearing AMCAT tests.
Input format :

The input consists of a sentence.
Output format :

The program outputs the reversed sentence, followed by the extracted vowels on one line and the extracted consonants in separate lines.
Code constraints :

Length of the sentence < 1000
Sample test cases :
Input 1 :

Hello, world!

Output 1 :

world! Hello, 
eoo
Hllwrld */

#include <iostream>
#include <string>
using namespace std;

string reverseSentence(string sentence) {
    string reversedSentence;
    string word;
    for (int i = sentence.length() - 1; i >= 0; i--) {
        if (sentence[i] != ' ') {
            word = sentence[i] + word;
        } else {
            reversedSentence += word + ' ';
            word = "";
        }
    }
    reversedSentence += word;
    return reversedSentence;
}

void extractVowelsAndConsonants(string sentence, string& vowels, string& consonants) {
    for (char c : sentence) {
        if (isalpha(c)) {
            if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u') {
                vowels += c;
            } else {
                consonants += c;
            }
        }
    }
}

int main() {
    string sentence;
    getline(cin, sentence);

    string reversedSentence = reverseSentence(sentence);
    cout << reversedSentence << endl;

    string vowels, consonants;
    extractVowelsAndConsonants(sentence, vowels, consonants);
    cout << vowels << endl;
    cout << consonants << endl;

    return 0;
}