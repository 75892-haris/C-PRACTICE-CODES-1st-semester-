#include<iostream>
#include<cstdlib>   // for random nymbers randomness
#include<ctime>  //for time
using namespace std;
int main(){
	int secretnumber;
	int guess;
	srand(time(0)); // this makes the number differnet each time
	secretnumber=rand()%20+1;
    cout << "guess rhe correct number  between 1 and 20.\n";
    cout << "Try to guess it!\n";
    do {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess < secretnumber) {
            cout << "Too low. Try again.\n";
        }
        else if (guess > secretnumber) {
            cout << "Too high. Try again.\n";
        }
        else {
            cout << "Great! You guessed the correct number!\n";
        }

    } while (guess != secretnumber);

    return 0;
}

