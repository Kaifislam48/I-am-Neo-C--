/* Jai and Rekha are planning to paint their newly built house and are trying to automate the calculation of their wall area in order to order the amount of paint they might need. 


Help them by creating a Wall class where the length and height of the wall are provided via a setData method. Use only the default constructors. Provide a method called calculateArea which would return the area of the wall.
Input format :

The input consists of two space-separated float values: length and height of the wall.
Output format :

The output prints a float value representing the area of the wall rounded off to one decimal place.
Code constraints :

1.0 <= length and height <= 1000.0
Sample test cases :
Input 1 :

10.5 8.6

Output 1 :

90.3

Input 2 :

98.77 48.99

Output 2 :

4838.7
 */

#include <iostream>
#include <iomanip>
using namespace std;

class Wall {
private:
    float length;
    float height;

public:
    void setData(float length, float height) {
        this->length = length;
        this->height = height;
    }

    float calculateArea() {
        return length * height;
    }
};

int main() {
    Wall wall;
    float length, height;

    cin >> length >> height;
    wall.setData(length, height);

    float area = wall.calculateArea();

    cout << fixed << setprecision(1) << area << endl;

    return 0;
}
