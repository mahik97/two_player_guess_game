#include <iostream>
using namespace std;

    int main () {

        cout << "********************Two_player_guessing_game********************\n";

        int secret_number;
        int guess;
        int attempts;

        cout << "Player 1, Enter a number between 1 and 100: ";
        cin >> secret_number;

        cout << "Player 2, Guess the number: ";
        cin >> guess;

        while (secret_number != guess)
        {
            cout << "Wrong! Please try again: ";
            cin >> guess;
        }
        
        cout << "Congratulations! You finally guessed it!";

        return 0;
    }