#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    cout << "Welcoming to guessing" << endl;
    // give guidelines
    cout << "Here are some guidelines about the game \n"
            "1. Press 1 To start game \n"
            "3. Press 3 to  stop the game\n"
            "2. Press 2 for help \n"
            "4. Press 4 to quit \n";

    bool isCorrect = true;

    while (isCorrect)
    {
        srand(time(0));

        int secretNumber = rand() % 10;

        cout << "Enter random number: " << endl;
        int number;
        cin >> number;

        // check to see if the random number is equal or not
        if (number == secretNumber)
        {
            cout << "You guessed the right number";
        }
        else
        {
            cout << "You guessed the wrong number";
        }
    }

    /*
     * 1. Allow user to guess number between 1 up to 10
     * 2. Check if the number is equal to randomNumber (correct), if the number
     * is not equal to random number ,user lost
     * 3. */
    return 0;
}
