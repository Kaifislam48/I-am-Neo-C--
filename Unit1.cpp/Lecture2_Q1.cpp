/* John wants to write a program that requires the user to enter a username and password. The program should then read the user's input for the username and password and finally display the entered username and password.


Note: This is a sample question asked in a TCS interview.
Input format :

The input consists of the user name and password, separated by space.
Output format :

The output prints the username and password on separate lines.


Refer to the sample output for the formatting specifications.
Sample test cases :
Input 1 :

Alice alice@01

Output 1 :

Name: Alice
Password: alice@01 */

#include<iostream>
#include<string>
using namespace std;

int main(){
    string username;
    string password;
    cin>>username>>password;
    cout<<"Name: "<<username<<endl;
    cout<<"Password: "<<password<<endl;
    return 0;
}