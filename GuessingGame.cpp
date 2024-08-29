#include <iostream>

using namespace std;

//cin >> , cout<<

int main() {
  int srand(time(NULL));
  int num = rand() % 100;
  int input = 0;
  int guessNum = 0;
  char answ = 'a';
  bool gameStatus = true;


  while (gameStatus) { 
  cout << "Guess a number between 0 and 100" << endl;
  cin >> input;
  cout << input;

   if (input > num) {
    cout << "Your number is too high" << endl;
    guessNum++;
   } else if (input < num) {
    cout << "Your number is too low" << endl;
    guessNum++;
    }
    cout << "Good Job you won in" << guessNum << "guesses" << endl;
    cout << "Do you want to play again?" << "(y/n)" << endl;
    cin >> answ;
    cout << answ;

    if (answ == 'n') {
      gameStatus = false;
    }
   
  } 
  return 0;
}
