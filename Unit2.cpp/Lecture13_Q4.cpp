/* Akil wants to perform various operations on a string. He wants to append additional characters to the end of the string, insert characters into the string at a specified position, and erase characters from the string at a specified position or within a specified range. Akil needs your help to write a program that performs these operations on a given string.


Write a program that takes a string as input and performs the following operations:


    Append - Append additional characters to the end of the string.
    Insert - Insert additional characters into the string at a specified position.
    Erase - Remove characters from the string at a specified position or within a specified range.


Note: This question is a sample question asked in a Mettl interview.
Input format :

The first line of input consists of the initial string.

The second line of input consists of the additional characters to append.

The third line of input consists of the characters to insert.

The fourth line of input consists of the position to insert.

The fifth line of input consists of the starting position to erase.

The sixth line of input consists of the number of characters to erase.
Output format :

The output displays the modified string after each operation (append, insert, and erase).


Refer to the sample output for the formatting specifications.
Code constraints :

1 <= Length of the strings < 50
Sample test cases :
Input 1 :

Hello
 World
in
4
4
2

Output 1 :

Modified string after append: Hello World
Modified string after insert: Hellino World
Modified string after erase: Hello WorldAkil wants to perform various operations on a string. He wants to append additional characters to the end of the string, insert characters into the string at a specified position, and erase characters from the string at a specified position or within a specified range. Akil needs your help to write a program that performs these operations on a given string.


Write a program that takes a string as input and performs the following operations:


    Append - Append additional characters to the end of the string.
    Insert - Insert additional characters into the string at a specified position.
    Erase - Remove characters from the string at a specified position or within a specified range.


Note: This question is a sample question asked in a Mettl interview.
Input format :

The first line of input consists of the initial string.

The second line of input consists of the additional characters to append.

The third line of input consists of the characters to insert.

The fourth line of input consists of the position to insert.

The fifth line of input consists of the starting position to erase.

The sixth line of input consists of the number of characters to erase.
Output format :

The output displays the modified string after each operation (append, insert, and erase).


Refer to the sample output for the formatting specifications.
Code constraints :

1 <= Length of the strings < 50
Sample test cases :
Input 1 :

Hello
 World
in
4
4
2

Output 1 :

Modified string after append: Hello World
Modified string after insert: Hellino World
Modified string after erase: Hello World */

#include <iostream>
#include <string>
using namespace std;

int main() {
    string initialString, appendStr, insertStr;
    int insertPos, eraseStart, eraseCount;

    // Input the initial string
    getline(cin, initialString);

    // Input the string to append
    getline(cin, appendStr);

    // Input the string to insert
    getline(cin, insertStr);

    // Input the position to insert
    cin >> insertPos;

    // Input the starting position to erase
    cin >> eraseStart;

    // Input the number of characters to erase
    cin >> eraseCount;

    // Append operation
    initialString += appendStr;
    cout << "Modified string after append: " << initialString << endl;

    // Insert operation
    initialString.insert(insertPos, insertStr);
    cout << "Modified string after insert: " << initialString << endl;

    // Erase operation
    initialString.erase(eraseStart, eraseCount);
    cout << "Modified string after erase: " << initialString << endl;

    return 0;
}
