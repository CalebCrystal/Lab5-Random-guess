#include "Number.h"

playGame::playGame() { //constructor

	srand(time(NULL)); //sets time strand to NULL
	int countGuess = 0; // initiates the counter for the your guesses
	int randomNum = 0; // initializes the random number 
    int countWin = 0;
    int countLose = 0;

}

playGame::~playGame(){} // destructor

int playGame::random10() { // random number generator function 
    int Random10 = rand() % 10; // randomly generates the number 0-9
    return Random10; //returns the function

}

int playGame::random100() { // random number generator function
    int Random100 = rand() % 100 + 1; // randomly generates the number 1-100
    return Random100; //returns the function
}

std::string playGame::guesscheck() { // function checks the guess that the users makes and asserts if it is correct or not

    std::string result;  // Initialize an empty string

        std::cin >> guess; // takes the guess from the user 

        if (guess == randomNum) { // checks the guess to differnt situations 
            result = "win";
            countWin++;
        }
        if (guess != randomNum) { // is guess is incorrect it responds with guess again
            result = "guess again";
            countGuess++;
        }
        if (guess > 100 || guess < 1) { // checks that the guess is valid
            result = "Wrong input: guess again";
        }
        return result; // returns the result as a string 
    }

std::string playGame::winStat() { // outputs random phrases or word in the case of winning 

    std::string resultWin; // intializes a string to have them stored in

    switch (random10()) // using the random number generator function picks a random number to choose a case in the switch
    {
    case 0:
        resultWin = "Great job!";
        break;
    case 1:
        resultWin = "Can you win again?";
        break;
    case 2:
        resultWin = "YOU WIN!!!!";
        break;
    case 3:
        resultWin = "Win";
        break;
    case 4:
        resultWin = "You Won by The Skin of Your Teeth ";
        break;
    case 5:
        resultWin = "just keep swiming and you can win again";
        break;
    case 6:
        resultWin = "Another win or Not... ";
        break;
    case 7:
        resultWin = "Great Win";
        break;
    case 8:
        resultWin = "A near loss but came out on top";
        break;
    case 9:
        resultWin = "A Win for everyone ";
        break;
    }
    return resultWin;
}


std::string playGame::loseStat() { // the function to call a random phrase in the case of a loss 

    std::string resultLose; // initialized the string to take result of the random switch

    switch (random10()) // uses the random number generator to pick a random response
    {
    case 0:
        resultLose = "You Lost";
        break;
    case 1:
        resultLose = "Incorrect and you had 20 chances";
        break;

    case 2:
        resultLose = "Wrong";
        break;

    case 3:
        resultLose = "Be Better...";
        break;

    case 4:
        resultLose = "lost";
        break;

    case 5:
        resultLose = "you lost AGAIN... or was that the last guy?";
        break;

    case 6:
        resultLose = "keep on lossing your doing great at it. ";
        break;

    case 7:
        resultLose = "try again, and don't lose";
        break;

    case 8:
        resultLose = "can you get worse";
        break;

    case 9:
        resultLose = "just guess the number it's not that hard";
        break;
        
    }

    return resultLose; // returns the choosen response 

}

std::string playGame::playAgain() { // outputs random phrases or word in the case of winning 

    std::string resultagain; // intializes a string to have them stored in

    switch (random10()) // using the random number generator function picks a random number to choose a case in the switch
    {
    case 0:
        resultagain = "Welcome Back ";
        break;
    case 1:
        resultagain = "you only have a 20% chance of winning ";
        break;
    case 2:
        resultagain = "I hope you won last time";
        break;
    case 3:
        resultagain = "if you win I'll cry";
        break;
    case 4:
        resultagain = "I trust that you can lose ";
        break;
    case 5:
        resultagain = "don't go to the light ";
        break;
    case 6:
        resultagain = "trust can't lose the game, so trust it's 10 ";
        break;
    case 7:
        resultagain = "I hope you do better than the last guy who played";
        break;
    case 8:
        resultagain = "I hope you win";
        break;
    case 9:
        resultagain = "A Win for everyone, not for you. ";
        break;
    }
    return resultagain;
}
void playGame::gamePlay() { // game play fuction 
    int countWin = 0; // sets count wins to zero
    int countLose = 0; // sets count lossses to zero

    do {
        std::string result = guesscheck(); // calls string 

        std::cout << "guess #: " << countGuess << "    "; // displays the number of guess they are on
        std::cout << result << std::endl; // displays the result from the number check function

        //std::cout << randomNum << std::endl;

    } while (countGuess < 20 && guess != randomNum); // does this code while the number of guess is below 20 and that the guess is not 
                                                     // equal to the random number 
    if (guess != randomNum) { // after the code runs if the last guess was not equal to the random number than it outputs 
        std::cout << "the correct number was: " << randomNum << std::endl; // the correct number 
        std::string resultLose = loseStat(); // if so it generate one of ten random response in they lost
        std::cout << resultLose << std::endl; 
        countLose++; // adds one to the lose counter 
    }
    else {
        std::string resultWin = winStat(); // anything else they win and it outputs the win statment 
        std::cout << resultWin << std::endl; // returns the string from the function
        countWin++; // adds one to the win counter 
    }

}
