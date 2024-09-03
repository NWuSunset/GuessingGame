/*
  A simple game where the user guesses a random number between 0 and 100
  Nathaniel Wu 9/3/2024
 */

#include <iostream>
#include <time.h>

using namespace std;

int main() {
  srand(time(NULL));
  int num = rand() % 100;
  int input = 0;
  int guessNum = 1; //starts at one guess
  char answ = 'a';
  bool gameStatus = true;

  //When this is true the guessing game will run
  while (gameStatus) { 
  cout << "Guess a number between 0 and 100" << endl;

  cin >> input;

  //Check for an invalid character (only integers allowed)
  while (cin.fail()) {
    cin.clear();
    //cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cin.ignore(100, '\n');
    cout << "You entered an incorrect value. Try again" << endl;
    cin >> input;
  }
  
  //Checking all of the conditions of the input 
   if (input > num) {
    cout << "Your number is too high" << endl;
    guessNum++;
   } else if (input < num) {
    cout << "Your number is too low" << endl;
    guessNum++;
   } else { 
    cout << "Good Job you won in " << guessNum << " guesses" << endl;
    cout << "Do you want to play again? " << "(y/n)" << endl;
    cin >> answ;

    if (answ == 'n') {
      gameStatus = false;
    }

    //reset things if user entered 'y' 
    guessNum = 0;
    num = rand() % 100;
   }
  }
  return 0;
}
