/* Meena is a fitness enthusiast who wants to track her fitness statistics. She wants to create a program that allows her to input and update her fitness data. She needs to keep track of her name and weight. Meena prefers to use a class called "FitnessData" to store and manage her fitness information.


Write a program that utilizes the "FitnessData" class and allows Meena to input and update her fitness data. Use a pointer to a data member to access and modify the weight field.


Note: This is a sample question asked in a TCS interview.
Input format :

The first input consists of the name as a string.

The second input consists of the initial weight as a double.

The third input consists of the updated weight as a double.
Output format :

The output display the updated fitness information, including Meena's name and weight.


Refer to the sample output for formatting specifications.
Code constraints :

The name input will contain no spaces and be a single word.

1.0 <= weight <= 300.0
Sample test cases :
Input 1 :

Meena
60.5
65.2

Output 1 :

Updated fitness information:
Name: Meena
Weight: 65.2 */

#include <iostream>
#include <string>

using namespace std;

class FitnessData {
public:
    string name;
    double weight;

    FitnessData(const string& n, double w) {
        name = n;
        weight = w;
    }

    void updateWeight(double newWeight) {
        weight = newWeight;
    }
};

int main() {
    string name;
    double initialWeight, updatedWeight;

    cin >> name >> initialWeight >> updatedWeight;

    FitnessData meena(name, initialWeight);

    // Use a pointer to access and update the weight field
    FitnessData* meenaPtr = &meena;
    meenaPtr->updateWeight(updatedWeight);

    cout << "Updated fitness information:" << endl;
    cout << "Name: " << meena.name << endl;
    cout << "Weight: " << meena.weight << endl;

    return 0;
}
