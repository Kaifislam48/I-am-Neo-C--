/* Jacob is working in banking software, and he wants to convert the currency from US Dollars to Euros. Help him write a program to perform currency conversion from US Dollars (USD) to Euros (EUR) using a class named CurrencyConverter. The program should allow the user to input an amount in US Dollars and a conversion rate (how many Euros one US Dollar is worth), and then it should display the converted amount in Euros (EUR). Basic to class-type conversion should be employed to achieve this.

Input format :
The first line of the input consists of a double value representing the conversion rate.

The second line consists of a double value representing the amount in US Dollars.

Output format :
The output displays the amount in Euros with two decimal values.



Refer to the sample output for the formatting specifications.

Code constraints :
1.0 <= conversion rate <= 100.0

1.0 <= US Dollars <= 105

Sample test cases :
Input 1 :
30.5
100.0
Output 1 :
Converted amount in Euros (EUR): 3050.00 EUR
Input 2 :
78.9
1550.0
Output 2 :
Converted amount in Euros (EUR): 122295.00 EUR */

#include <iostream>
#include <iomanip>

using namespace std;

class CurrencyConverter {
private:
    double conversionRate;
    double usDollars;

public:
    CurrencyConverter(double rate, double dollars) {
        conversionRate = rate;
        usDollars = dollars;
    }

    double convertToEuros() {
        return usDollars * conversionRate;
    }
};

int main() {
    double conversionRate, usDollars;
    cin >> conversionRate >> usDollars;

    CurrencyConverter converter(conversionRate, usDollars);
    double euros = converter.convertToEuros();

    cout << fixed << setprecision(2);
    cout << "Converted amount in Euros (EUR): " << euros << " EUR" << endl;

    return 0;
}