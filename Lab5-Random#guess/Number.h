#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string> // includes all neccecary librarys 

#ifndef LAB5RANNUM_H // if not defined then defined 
#define LAB5RANNUM_H

class playGame // 
{

public:

	playGame();
	~playGame();

	int ran100;
	int ran10;

	std::string guesscheck();
	std::string winStat();
	std::string loseStat();
	std::string playAgain();
	int random100();
	int random10();
	void gamePlay();
	bool play;

	int getCountwin() const {
		return countWin;
	}

	int getCountlose() const {
		return countLose;
	}

	



	int countGames;
	int countGuess;
	int guess;
	int randomNum; 

	
	int countWin;
	int countLose;
private:
	
	




};
#endif


