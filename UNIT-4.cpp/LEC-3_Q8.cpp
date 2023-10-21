/* Naveen is working on a calendar application. He wants to write a program that converts a date from the MM/DD/YYYY format to the DD-MM-YYYY format using basic to class type conversion. Implement a DateFormatConverter class to handle the conversion. The program should prompt the user to input a date with separate integers for the month, day, and year, and then display the converted date in the desired format.

Input format :
The input consists of three integers representing the month, date, and year separated by a spaces.

Output format :
The output displays the date in the following format: "DD-MM-YYYY".



Refer to the sample output for further formatting specifications.

Code constraints :
1 <= date <= 31

1 <= month <= 12

1900 <= year <= 2100

Sample test cases :
Input 1 :
11 25 2000
Output 1 :
Date in DD-MM-YYYY format: 25-11-2000
Input 2 :
1 31 1996
Output 2 :
Date in DD-MM-YYYY format: 31-1-1996 */

#include <iostream>
using namespace std;

class DateFormatConverter {
public:
    int day, month, year;

    DateFormatConverter(int d, int m, int y) : day(d), month(m), year(y) {}

    void convertDateFormat() {
        cout << "Date in DD-MM-YYYY format: " << day << "-" << month << "-" << year << endl;
    }
};

int main() {
    int day, month, year;
    cin >> month >> day >> year;

    DateFormatConverter converter(day, month, year);
    converter.convertDateFormat();

    return 0;
}
