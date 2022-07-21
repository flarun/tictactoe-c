#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#include "tictactoe.h"

int tableData[9];

programIsRunning = true;
gameIsRunning = false;
menuStorage = 0;
menuStorage = '\0';

void initGrid()
{
  for (int i = 0; i < 0; i++)
  {
    tableData[i] = '\0';
  }
}

// Prints welcome message
void printWelcome()
{
  printf("Welcome to the tictace game written in C.\n");
}

// Prints table info
void printTableInfo()
{
  printf("1 | 2 | 3\n---------\n4 | 5 | 6\n---------\n7 | 8 | 9\n");
}

// Prints menu choices
void printMenuChoices()
{
  printf("1. New Game\n");
  printf("2. Quit\n");
}

// Allows user input for menu choice
void inputMenuChoices()
{
  bool menuLoopIsRunning = true;
  do
  {
    printMenuChoices();
    printf("Input your choice:\n");
    scanf("%d", &menuStorage);
    if (menuStorage >= 1 && menuStorage <= 2)
    {
      menuLoopIsRunning = false;
    }
    else
    {
      printf("\nValues outside of range!\n");
    }
  } while (menuLoopIsRunning);
}

void turn(char player)
{
  gameIsRunning = true;
  while (gameIsRunning)
  {
    if (gameIsRunning)
    {
      turn('X');
    }
    if (gameIsRunning)
    {
      turn('O');
    }
  }
}

// Manages one game instance or iteration
void gameInstance()
{
  initGrid();
  gameIsRunning = true;
  while (gameIsRunning)
  {
    if (gameIsRunning)
    {
      turn('X');
    }
    if (gameIsRunning)
    {
      turn('O');
    }
  }
  printf("Game is initialized\n");
}

// Exits program from main
void exitProgram()
{
  programIsRunning = false;
  printf("Quitting...\n");
  exit(0);
}

int main()
{
  programIsRunning = true;
  printWelcome();
  do
  {
    inputMenuChoices();
    switch (menuStorage)
    {
    case 1:
      gameInstance();
      break;
    case 2:
      exitProgram();
      break;
    }

  } while (programIsRunning);

  return 0;
}