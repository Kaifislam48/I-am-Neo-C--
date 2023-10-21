/* Dharun is a teacher and has just finished grading the exams of his students. He wants to analyze the performance of his students by finding the smallest difference between the scores of any two students. Help him write the formula that will help him calculate this smallest difference so that he can generate the report for the same using pointer arithmetic.


Function Name: int findSmallestDifference - This function calculates and returns the smallest difference between any two students' scores.


Example


Input:

5

100 89 95 56 66


Output:

5


Explanation:

In this scenario, the program takes input for the number of students (5) and their respective exam scores. It calculates the smallest difference between any two scores (100 and 95), which in this case is 5. This indicates that the closest scores among the students differ by a margin of 5 points.


Note: This is a sample question asked in a TCS interview.
Input format :

The first line of input consists of the number of students, n.

The second line of input consists of n space-separated scores.
Output format :

The output displays the smallest difference between any two students.
Code constraints :

3 < n <= 10
Sample test cases :
Input 1 :

5
100 89 95 56 66

Output 1 :

5

Note :
The program will be evaluated only after the “Submit Code” is clicked.
Extra spaces and new line characters in the program output will result in the failure of the test case.  */

#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int findSmallestDifference(int* scores, int n) {
    // Sort the array in ascending order
    sort(scores, scores + n);

    // Initialize the minimum difference with a large value
    int minDiff = INT_MAX;

    // Find the minimum difference by comparing adjacent elements
    for (int i = 1; i < n; ++i) {
        int diff = scores[i] - scores[i - 1];
        if (diff < minDiff) {
            minDiff = diff;
        }
    }

    return minDiff;
}

int main() {
    int n;
    cin >> n;

    int* scores = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> scores[i];
    }

    int result = findSmallestDifference(scores, n);

    cout << result << endl;

    // Deallocate memory for the dynamic array
    delete[] scores;

    return 0;
}
