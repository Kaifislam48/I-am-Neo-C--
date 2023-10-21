/* You are tasked with creating a Height class for a health and fitness application. The class should have the following features:


    A default constructor that initializes the height to 0 feet and 0.0 inches.
    A setHeight method to allow users to input their height in three different formats: directly in feet, in feet and inches separated by a space and in decimal format representing inches.
    A show method that displays the height in the format "Feet=feet inches=inches."


Your program should create three instances of the Height class, h1, h2, and h3, using the default constructor. Users will provide their heights, and you should use the appropriate method to set the height for each instance. Finally, you should display the heights of all three instances using the show method.


Note: 1 feet equals 12 inches.


Note: This is a sample question asked in a Wipro interview.
Input format :

The first line of the input consists of an integer that represents the feet

The second line consists of a double value, which represents the feet in fractions.

The last line consists of an integer and a double value, which represent the feet and inches separated by a space.
Output format :

The output displays feet and inches separated by a space in separate lines.


Refer to the sample output for the formatting specifications.
Code constraints :

1 <= feet <= 100

1.0 <= feet in fraction <=100.0

1 <= inches <= 100
Sample test cases :
Input 1 :

4
4.23
4 13

Output 1 :

Feet=4 inches=0
Feet=4 inches=2.76
Feet=4 inches=13
 */

#include <iostream>
using namespace std;

class Height {
private:
    int feet;
    double inches;

public:
    Height() : feet(0), inches(0.0) {}

    void setHeight(int feet, double inches) {
        this->feet = feet;
        this->inches = inches;
    }

    void setHeight(double totalInches) {
        feet = static_cast<int>(totalInches / 12);
        inches = totalInches - feet * 12;
    }

    void show() {
        cout << "Feet=" << feet << " inches=" << inches << endl;
    }
};

int main() {
    Height h1, h2, h3;
    int feet1, feet3;
    double fraction, totalInches;

    cin >> feet1;
    cin >> fraction;
    cin >> feet3 >> totalInches;

    h1.setHeight(feet1, 0.0); // Initialize h1 with feet and 0 inches
    h2.setHeight(fraction * 12); // Convert fraction to inches for h2
    h3.setHeight(feet3, totalInches);

    h1.show();
    h2.show();
    h3.show();

    return 0;
}
