/* Imagine you are developing a weather monitoring system for a meteorological research institute. As part of the system, you need to implement a feature that finds the highest recorded temperature for a specific region. Temperature data is stored in a 2D array, where each row represents a day and each column represents a different region.


The program should prompt the user to enter the temperature data for each region and day. Afterward, it should display the highest recorded temperature.


Function Name: int findMaxElement


Note: This is a sample question asked in an HCL interview.
Input format :

The first line of the input consists of the values of rows n and columns m, separated by a space.

The next n lines consist of m space-separated integers.
Output format :

The output prints the maximum element in the given 2D array.
Code constraints :

Define m and n = 10

1 <= m, n <= 10

-105 <= Elements of the 2D array <= 105
Sample test cases :
Input 1 :

3 4
34 37 -26 -63
78 95 -61 -44
16 61 45 -16

Output 1 :

95 */

#include <iostream>
using namespace std;

const int m = 10;  // Maximum number of columns
const int n = 10;  // Maximum number of rows

int findMaxElement(int arr[][m], int rows, int cols) {
    int maxTemp = INT32_MIN;  // Initialize maxTemp to a very low value

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] > maxTemp) {
                maxTemp = arr[i][j];
            }
        }
    }

    return maxTemp;
}

int main() {
    int rows, cols;
    int arr[n][m];

    // Input the number of rows and columns
    cin >> rows >> cols;

    // Input the temperature data
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    // Find and display the highest recorded temperature
    int maxTemperature = findMaxElement(arr, rows, cols);
    cout << maxTemperature << endl;

    return 0;
}
