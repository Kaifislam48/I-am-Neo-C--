/* Jonas wants to create a C++ program that takes an integer 'n' as input. His requirement is as follows:



If 'n' is odd, the program should store first 'n' multiples of 3 from 1 in a file called "num.txt". 
If 'n' is even, the program should store first 'n' multiples of 5 from 1 in the same file. 


Finally, the program reads the contents of "mystery.txt" and displays them in the console.



Note: Use a structure to store the value of 'n'.



For example: If 'n' is 7, generate the first 7 multiples of 3 from 1: 3, 6, 9, 12, 15, 18, 21.

Input format :
The input consists of an integer n.

Output format :
If n > 1000, the output prints "Exceeding Limit!" and terminates.

Otherwise:

If 'n' is odd, the output prints first 'n' multiples of 3 from 1 separated by a space.

If 'n' is even, the output prints first 'n' multiples of 5 from 1 separated by a space.

Code constraints :
1 <= n <= 1000

Sample test cases :
Input 1 :
7
Output 1 :
3 6 9 12 15 18 21 
Input 2 :
6
Output 2 :
5 10 15 20 25 30 
Input 3 :
1224
Output 3 :
Exceeding Limit! */

#include <iostream>
#include <fstream>

using namespace std;

struct Number {
    int n;
};

void generateMultiples(int n) {
    ofstream outputFile("num.txt");
    if (!outputFile) {
        cerr << "Error creating the file 'num.txt'" << endl;
        return;
    }

    if (n > 1000) {
        cout << "Exceeding Limit!" << endl;
        outputFile.close();
        return;
    }

    if (n % 2 == 0) {
        for (int i = 1; i <= n; i++) {
            int multiple = i * 5;
            outputFile << multiple << " ";
        }
    } else {
        for (int i = 1; i <= n; i++) {
            int multiple = i * 3;
            outputFile << multiple << " ";
        }
    }

    outputFile.close();
}

void displayFileContents() {
    ifstream inputFile("num.txt");
    if (!inputFile) {
        cerr << "Error opening the file 'num.txt'" << endl;
        return;
    }

    int number;
    while (inputFile >> number) {
        cout << number << " ";
    }

    inputFile.close();
}

int main() {
    Number num;

    // Get user input
    cin >> num.n;

    generateMultiples(num.n);
    displayFileContents();

    return 0;
}