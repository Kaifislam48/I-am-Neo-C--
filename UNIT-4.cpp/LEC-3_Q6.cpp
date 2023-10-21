/* Peter is working on a project, and his task is to create a program that takes an input integer representing a total number of seconds and utilizes basic to class type conversion to convert it into a Time object. The Time class, defined in the code, has private member variables for hours, minutes, and seconds and a constructor that converts the input seconds into these time components. After inputting the total seconds, the program constructs a Time object and then calls its display() function to print the time in the format "hours:minutes:seconds". 



For example, if the user enters 3661 seconds, the program will output "1:1:1" as it corresponds to 1 hour, 1 minute, and 1 second.



Note: This kind of question will help in clearing Wipro recruitment.

Input format :
The input contains an integer representing the time in seconds.

Output format :
The output displays the converted time in the following format: "hours:minutes:seconds"



Refer to the sample output for formatting specifications.

Code constraints :
0 <= seconds <= 86400

Sample test cases :
Input 1 :
3661
Output 1 :
1:1:1
Input 2 :
45034
Output 2 :
12:30:34 */

#include <iostream>

using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    Time(int totalSeconds) {
        hours = totalSeconds / 3600;
        totalSeconds %= 3600;
        minutes = totalSeconds / 60;
        seconds = totalSeconds % 60;
    }

    void display() {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }
};

int main() {
    int totalSeconds;
    cin >> totalSeconds;

    Time time(totalSeconds);
    time.display();

    return 0;
}