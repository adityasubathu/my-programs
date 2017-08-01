#include<iostream>
using namespace std;
#include<stdlib.h>
#include <ctime>

const int totchan = 8;
int main()
{
	int number;        //the computer's random number
	int guess;         //the user's guess
	int chances = 0, score = 0, chanscor;        //chanscor stores score for 1 successful chance.
	int max = 500;
	cout << "Welcome to the Guessing game." << endl;
	cout << "I have picked a random number between 1 and " << max <<".";
	cout << " You must try to guess it. " << endl;
	srand(time(0));
	number = int (rand() % max);
	chanscor = 100 / totchan;        //score for each successful chance
	do
	{
		cout << "\n\nWhat is your guess?: ";
		cin >> guess;
		if ((guess < 0) || (guess > max)) //check if the guess is in the right range
		{
			cout << "Sorry, but your guess must be from 0 to " << max <<".";
		}
		else if ((guess < number) && (totchan - chances > 1))
		{
			cout << guess << " is low. Try a higher number.";
		}
		else if ((guess > number) && (totchan - chances > 1))
		{
			cout << guess << " is high. Try a lower number.";
		}
		else if (guess == number)		//if correct number is guessed
		{
			cout << "\n" << guess << " is correct. Congratulations!";
			score = chanscor*(totchan - chances);   //accuracy calculated for number of guesses left
			cout << "You have " << score << "% accuracy"<< endl;
			break; //The loop will end here
		}
		chances++; //increment in guesses
		if ((guess != number) && (totchan - chances > 1)) //Counter of remaining guesses
			cout << " Now you have " << totchan - chances << " guesses left.";
        else if (totchan - chances == 1) //Different text for the last guess
            cout << "This is your last guess";
		if (chances == totchan) //No guesses left
		{
			cout << "Only " << totchan << " guesses are allowed. Better luck next time." << endl << endl;
			cout << "The number was " << number << endl;
			break;
		}
	} while (guess != number);
    cout << "\nThank you for playing The Guessing Game\n";
    return 0;
}
