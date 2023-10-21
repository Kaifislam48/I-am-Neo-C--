/* Pavani is tasked with implementing a class called Distance that represents a distance in feet and inches. Your goal is to overload the unary operator - to decrement the distance by one foot and one inch. Help her write a program that takes user input for the initial distance, applies the decrement operator, and outputs the updated distance.

Input format :
The input consists of two integers, representing feet and inches, separated by a space.

Output format :
The output displays the updated distance in the format "feet'inches" after applying the decrement operation.



Refer to the sample output for the formatting specifications.

Code constraints :
1 <= feet <= 100

1 <= inches <= 12

Sample test cases :
Input 1 :
8 9
Output 1 :
7'8 */

#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    int inches;

public:
    Distance(int ft, int in) {
        feet = ft;
        inches = in;
    }

    Distance operator-() {
        feet--;
        inches--;
        if (inches < 0) {
            inches += 12;
            feet--;
        }
        return Distance(feet, inches);
    }

    void display() {
        cout << feet << "'" << inches << endl;
    }
};

int main() {
    int ft, in;
    cin >> ft >> in;

    Distance d(ft, in);
    Distance updatedDistance = -d;

    updatedDistance.display();

    return 0;
}