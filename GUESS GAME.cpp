#include <iostream>

using namespace std;

int main() {
	
	int secretNum = 7;
	int guess;
	int guessCount = 0;
	int guessLimit = 3;
	bool outOfGuesses = false;
	
	while(secretNum != guess && !outOfGuesses)  /*!= means not equal to*/ {
	if(guessCount < guessLimit) {
	
	cout << "enter a guess: ";
	cin >> guess;
	guessCount++;
	} else {
		outOfGuesses = true;
	}
	
	}
	
	if(outOfGuesses){
		cout << "You Lose!";
	} else {
		cout << "You Win!!";
	}
	
	
	return 0;
}
