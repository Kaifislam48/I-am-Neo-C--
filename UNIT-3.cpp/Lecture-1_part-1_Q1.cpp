/* Manish is creating a two-player game for which he needs a counter that will store the scores of the individual players. He wants to delegate the task of writing the class to you. Write a class called Counter for Manish that would take an initial value for the counter and increment the value every time the increment method is called. You should also have a method to return the counter value, which he can use to display in his application.


Note: This kind of question helps in clearing HCL tests.
Input format :

The first line of input consists of an integer, N representing the initial value for the counter.

The second line of input consists of an integer 'random' that increments N.
Output format :

The first line of output prints the initial value.

The second line of output prints the incremented value.
Code constraints :

-107 <= N, random <= 107
Sample test cases :
Input 1 :

1
100

Output 1 :

1
101

Input 2 :

-5070
777

Output 2 :

-5070
-4293 */

#include <iostream>
using namespace std;

class Counter {
private:
    int value;

public:
    Counter(int initialValue) {
        value = initialValue;
    }

    void increment(int random) {
        value += random;
    }

    int getValue() {
        return value;
    }
};

int main() {
    int initialValue, random;
    
    cin >> initialValue;
    cin >> random;

    Counter counter(initialValue);
    cout << counter.getValue() << endl;

    counter.increment(random);
    cout << counter.getValue() << endl;

    return 0;
}
