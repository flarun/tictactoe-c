#ifndef tictactoe
#define tictactoe

#include <stdbool.h>

char myGrid[9];
int userChoice;
int cellsFilled;
bool gameIsRunning;
bool gameWon;
bool gameDraw;


void printTableInfo();
void printTable();



void manageGame(); // terminal function



void playerTurn(char p);

void inputChoice();

bool XCheckWin(); // terminal functions
bool YCheckWin();



void printWinner();
void printDraw();


#endif