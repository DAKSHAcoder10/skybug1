#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // Seed the random number generator

    int randomNumber = rand() % 100 + 1; // Generate random number between 1 and 100
    int guess;

    cout << "Guess the number between 1 and 100: ";

    do {
        cin >> guess;

        if (guess > randomNumber)
            cout << "Too high! Try again: ";
        else if (guess < randomNumber)
            cout << "Too low! Try again: ";
        else
            cout << "Congratulations! You guessed the correct number!";
    } while (guess != randomNumber);

    return 0;
}


