/* You are tasked with designing a simple airline reservation system for a small airline company. The system should allow the airline to manage and provide information about their flight destinations and the number of flights available to each destination.


Class and Functions:

You need to implement a class named Airline with the following functions:

void initialize(): Initializes the airline's system with no destinations and no flights.

void addDestination (int destination, int numFlights): Adds a new destination and the number of flights available to that destination. The system can store up to 100 destinations.

int checkFlights (int destination): Checks and returns the number of available flights to a specific destination. If the destination is not found, it returns -1.


Note: This kind of question will be helpful in clearing AMCAT tests.
Input format :

The first input consists of an integer n, representing the number of destinations the airline wants to add.

The next n-line input, n-space separated, consists of two integers for each destination: destination code and numFlight

The last input consists of an integer search for destination Q.
Output format :

The output displays the following one of the format:

If the search destination is found in the system, it prints the number of available flights to that destination.

If the search destination is not found in the system, it prints "Destination not found."


Refer to the sample output for the formatting specifications.
Code constraints :

1 <= N <= 10
Sample test cases :
Input 1 :

3
101 5
102 3
103 7
102

Output 1 :

3

Input 2 :

4
201 8
202 4
203 6
204 2
205

Output 2 :

Destination not found */


#include <iostream>
using namespace std;

class Airline {
private:
    struct Destination {
        int destinationCode;
        int numFlights;
    };

    Destination destinations[100];
    int numDestinations;

public:
    Airline() {
        numDestinations = 0;
    }

    void initialize() {
        numDestinations = 0;
    }

    void addDestination(int destination, int numFlights) {
        if (numDestinations < 100) {
            destinations[numDestinations].destinationCode = destination;
            destinations[numDestinations].numFlights = numFlights;
            numDestinations++;
        }
    }

    int checkFlights(int destination) {
        for (int i = 0; i < numDestinations; i++) {
            if (destinations[i].destinationCode == destination) {
                return destinations[i].numFlights;
            }
        }
        return -1;
    }
};

int main() {
    Airline airline;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int destination, numFlights;
        cin >> destination >> numFlights;
        airline.addDestination(destination, numFlights);
    }

    int searchDestination;
    cin >> searchDestination;

    int result = airline.checkFlights(searchDestination);
    if (result != -1) {
        cout << result << endl;
    } else {
        cout << "Destination not found" << endl;
    }

    return 0;
}
