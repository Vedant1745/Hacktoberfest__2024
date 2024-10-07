#include <iostream>
#include <cstdlib> // For rand and srand
#include <ctime>   // For time

using namespace std;

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));
    int numberToGuess = rand() % 100 + 1; // Random number between 1 and 100
    int playerGuess = 0;
    int attempts = 0;

    cout << "Welcome to the Guess the Number game!" << endl;
    cout << "I have selected a number between 1 and 100." << endl;

    while (true) {
        cout << "Enter your guess: ";
        cin >> playerGuess;
        attempts++;

        if (playerGuess < 1 || playerGuess > 100) {
            cout << "Please guess a number between 1 and 100." << endl;
            continue;
        }

        if (playerGuess < numberToGuess) {
            cout << "Too low! Try again." << endl;
        } else if (playerGuess > numberToGuess) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number " << numberToGuess << " in " << attempts << " attempts." << endl;
            break;
        }
    }

    return 0;
}
