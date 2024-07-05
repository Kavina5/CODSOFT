#include<iostream>
#include<ctime>
using namespace std;

int main() {
    srand(time(0));
    int randnum = rand()%1000;
    cout<< "Random Number :"<< randnum<<endl;
    cout << "Guess the number (between 1 and 100): ";
    int guess;

    while (true) {
        cin >> guess; // Get user input
        if (guess < randnum) {
            cout << "Too low! Try again: ";
        } else if (guess > randnum) {
            cout << "Too high! Try again: ";
        } else {
            cout << "Congratulations! You guessed it!\n";
            break;
        }
    }

    return 0;
}
