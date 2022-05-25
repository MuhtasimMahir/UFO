#include <iostream>
#include "ufo_functions.hpp"
using namespace std;
int main() {
    string codeword = "codecademy";
    string answer = "___________";
    int misses = 0;
    vector<char> incorrect;
    bool guess = false;
    char letter;
    greet();

    while(answer != codeword && misses < 7){

        display_misses(misses);
        display_status(incorrect, answer);
        cout << "\n\nPlease enter your guess: " << endl;
        cin >> letter;

        for(int i = 0; i < codeword.length(); i++){

            if( letter == codeword[i]){

                answer[i] = letter;
                guess = true;

            }

        }

        if (guess){
            cout << "\nCorrect! You're closer to cracking the codeword." << endl;
        } else {
            cout << "\nIncorrect! The tractor beam pulls the person in further.\n";
            incorrect.push_back(letter);
            misses++;

        }

        guess = false;

    }

    end_game(answer, codeword);

}
