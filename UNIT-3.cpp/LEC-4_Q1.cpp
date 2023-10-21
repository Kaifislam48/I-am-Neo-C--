/* Chris wants to create a program that takes an integer n as input and finds all numbers from 3 to n (inclusive) that are divisible by 3 and writes them in a file named "file1.txt". Then, it reads and prints the contents of the file. Help him with the program as he is unaware of how to deal with files.



Note: The program has to be implemented using a class.

Input format :
The input consists of an integer n.

Output format :
If n < 3 or n > 1000, the output prints "Invalid input!" and terminates.

Otherwise, after writing all the numbers that are divisible from 3 to n (inclusive) inside the file, the output prints the contents of the file.

Code constraints :
3 <= n <= 1000

Sample test cases :
Input 1 :
2
Output 1 :
Invalid input!
Input 2 :
15
Output 2 :
3 6 9 12 15 
Input 3 :
1223
Output 3 :
Invalid input! */

#include <iostream>
#include <fstream>

using namespace std;

class DivisibleNumbers {
public:
    void findAndWriteNumbers(int n) {
        if (n < 3 || n > 1000) {
            cout << "Invalid input!" << endl;
            return;
        }

        ofstream outputFile("file1.txt");
        if (!outputFile) {
            cerr << "Error creating the file 'file1.txt'" << endl;
            return;
        }

        for (int i = 3; i <= n; i++) {
            if (i % 3 == 0) {
                outputFile << i << " ";
            }
        }

        outputFile.close();
    }

    void readAndPrintFile() {
        ifstream inputFile("file1.txt");
        if (!inputFile) {
            cerr << "Error opening the file 'file1.txt'" << endl;
            return;
        }

        int num;
        while (inputFile >> num) {
            cout << num << " ";
        }

        inputFile.close();
        cout << endl;
    }
};

int main() {
    int n;
    cin >> n;

    DivisibleNumbers program;
    program.findAndWriteNumbers(n);
    program.readAndPrintFile();

    return 0;
}