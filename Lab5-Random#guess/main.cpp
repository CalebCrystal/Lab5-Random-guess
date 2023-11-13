/*
Caleb Crystal 

C++

Lab 5 - Random Number guessing game

Description: Write a number-guessing game in which the computer selects a random
number in the range of 0 to 100, and users get a maximum of 20 attempts to guess it. At
the end of each game, users should be told whether they won or lost, and then be asked
whether they want to play again. When the user quits, the program should output the
total number of wins and losses. To make the game more interesting, the program
should vary the wording of the messages that it outputs for winning, for losing, and for
asking for another game. Create 10 different messages for each of these cases, and use
random numbers to choose among them. 

*/

#include "Number.h" // includes header file

using namespace std; // using namespace 
int main() 
{
	playGame r; // class play game
	r.countGuess = 0; // guess counter is set to zero 
	r.countGames = 0; // game counter is set to zero

	do { // sets up the do while statment 
		cout << "Hello this is a number guessing game from 1 - 100" << endl << "you have 20 chances to win please enter your first guess: " << endl;
		// outputs what the user must do to play the game and how many chances they get 
		r.randomNum = r.random100(); // sets the random number to a random number, otherwise the number kept changing while I was playing 
		r.gamePlay(); // calls the function game play and plays the game
		r.countGuess = 0; // resets the guess count to 0


		cout << "if you wish to play again please enter 1 " << endl << "if you wish to exit enter 0..." << endl;
		cin >> r.play; // displays what is expected of the user and assumes that the user input correctly 
		r.countGames++; // adds one to the game counter 

		if (true == 1) // evaluates if the player wishes to play again and if yes then is displys a random phrase for the user to see. 
		{
			std::string resultagain = r.playAgain(); // opens string 
			std::cout << resultagain << std::endl; // displays string 

		}

	} while (r.play == true); // evaluates if the while loop is still valid 

	cout << "Thanks for playing your final score was: " << endl << "wins: " << r.countWin << endl << "losses:" << r.countLose << endl;
	cout << "number of games played: " << r.countGames << endl;
	return 0;
	// thanks the user and outputs the wins loses and games played 
}
