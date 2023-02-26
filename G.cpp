#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int guess;
    int number;
    int attempts = 0;

    srand(time(0)); // Seed the random number generator with the current time

    number = rand() % 100 + 1; // Generate a random number between 1 and 100

    cout << "I'm thinking of a number between 1 and 100. Can you guess what it is?\n";

    do
    {
        cout << "Enter your guess: ";
        cin >> guess;

        attempts++;

        if (guess > number)
        {
            cout << "Too high! Try again.\n";
        }
        else if (guess < number)
        {
            cout << "Too low! Try again.\n";
        }
        else
        {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts.\n";
        }
    } while (guess != number);

    return 0;
}
