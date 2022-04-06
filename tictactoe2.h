#ifndef TICTACTOE2
#define TICTACTOE2

int tableData[9];

bool programIsRunning;
bool gameIsRunning;

int menuStorage;
char menuStorage;

void printWelcome();
void printTableInfo();
void printMenuChoices();

void inputMenuChoices();

void gameInstance();

void exitProgram();

#endif