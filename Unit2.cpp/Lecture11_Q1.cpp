/* Janu enjoys learning puzzles from her childhood. She is given an N*M matrix and asked to sum the elements in each row. She needs to attain the sum of elements in a matrix.
Input format :

The first line of input consists of a row count.

The second line of input consists of the column count.

The third line of input consists of a matrix element.
Output format :

The output is the matrix elements, with the sum of each row.


Refer to the output for formatting specifications.
Code constraints :

0>N<=10

0>M<=10


Sample test cases :
Input 1 :

2
3
27 38 59
73 88 99

Output 1 :

27 38 59 	SUM: 124
73 88 99 	SUM: 260

Input 2 :

3
4
1 2 3 4
5 6 7 8
9 3 2 4

Output 2 :

1 2 3 4 	SUM: 10
5 6 7 8 	SUM: 26
9 3 2 4 	SUM: 18
 */

#include <iostream>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    int matrix[10][10];

    // Input matrix elements
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> matrix[i][j];
        }
    }

    // Calculate and print row sums
    for (int i = 0; i < N; i++) {
        int rowSum = 0;
        for (int j = 0; j < M; j++) {
            cout << matrix[i][j] << " ";
            rowSum += matrix[i][j];
        }
        cout << "\tSUM: " << rowSum << endl;
    }

    return 0;
}
