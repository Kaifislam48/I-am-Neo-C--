/* John and Michael play the game of multiplication by multiplying an integer p by one of the numbers 2 to 9. John always starts with p = 1 and multiplies it by 1 and passes the result to Michael. Then, Michael multiplies the number by 2 and sends the result to John, then John multiplies by 3, and so on. Before a game starts, they draw an integer N and the winner is the one who first reaches p >= n. Write a code for this scenario using member functions.


Class Name: class multiplicationGame

Member Function: void game


Note: This is a sample question asked in an Accenture interview.
Input format :

The input consists of the value of n.
Output format :

The output prints the n value and who won the game separated by a space.


Refer to the sample outputs for the formatting specifications.
Code constraints :

1 <= n <= 105
Sample test cases :
Input 1 :

10

Output 1 :

10 Michael wins

Input 2 :

100

Output 2 :

100 John wins*/

#include <iostream>
using namespace std;

class multiplicationGame {
  public:
    void game(int n) {
      int p = 1;
      int multiplier = 1;
      string winner = "";

      while (p < n) {
        if (multiplier % 2 == 1) {
          p *= multiplier;
          winner = "John";
        } else {
          p *= multiplier;
          winner = "Michael";
        }
        multiplier++;
      }

      cout << n << " " << winner << " wins" << endl;
    }
};

int main() {
  multiplicationGame game;
  int n;
  cin >> n;

  game.game(n);

  return 0;
}