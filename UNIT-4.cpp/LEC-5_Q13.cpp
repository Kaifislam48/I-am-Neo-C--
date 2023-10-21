/* Swathi is working on a project that involves managing parent-child relationships. In this scenario, you need to create classes representing parents and children and define their behaviors.



The Parent class contains two private member functions, m1() and m2(int a), as well as two public member functions, m1Public() and m2Public(int a). The Child class inherits privately from the Parent class.



You are required to implement a simple program that utilizes the Parent and Child classes for specific tasks. The program should prompt the user to input two integers, 'a' and 'b'. The program should then demonstrate the behavior of the classes and their functions as follows:



Create an object of the Parent class and an object of the Child class.
Call the m1Public() and m2Public(a) functions of the Parent class using the object of the Parent class.
Call the m1Child() and m2Child(b) functions of the Child class using the object of the Child class.
Observe and print the output produced by each function call to the console.


Note: This kind of question will help in clearing Wipro recruitment.

Input format :
The input consists of the integer values a and b for both classes, separated by a space.

Output format :
The output displays the following lines:



"From parent m1()" indicates the call to the parent class's private member function m1().

The input integer value entered for a.

"From child m1()" indicates the call to the child class's member function m1Child().

The input integer value entered for b.



Refer to the sample outputs for the formatting specifications.

Code constraints :
The input values should be valid integer numbers.

Sample test cases :
Input 1 :
484 848
Output 1 :
From parent m1()
484
From child m1()
848
Input 2 :
100 7
Output 2 :
From parent m1()
100
From child m1()
7 */

#include <iostream>
using namespace std;

class Parent {
private:
    void m1() {
        cout << "From parent m1()" << endl;
    }

    void m2(int a) {
        cout << a << endl;
    }

public:
    void m1Public() {
        m1();
    }

    void m2Public(int a) {
        m2(a);
    }
};

class Child : private Parent {
public:
    void m1Child() {
        cout << "From child m1()" << endl;
    }

    void m2Child(int b) {
        cout << b << endl;
    }
};

int main() {
    int a, b;
    cin >> a >> b;

    Parent parentObj;
    Child childObj;

    parentObj.m1Public();
    parentObj.m2Public(a);

    childObj.m1Child();
    childObj.m2Child(b);

    return 0;
}
