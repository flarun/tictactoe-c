#include <stdio.h>
#include "tictactoe.h"

//print information about the table
void printTableInfo() {
  printf("\nxy coordinates:\n");
  printf("\n1 | 2 | 3 \n---------- \n4 | 5 | 6 \n--------- \n7 | 8 | 9 \n\n");
}

//print table (at each turn)
void printTable() {
  printf("\n%c | %c | %c \n--------- \n%c | %c | %c \n--------- \n%c | %c | %c \n\n",
  myGrid[0],myGrid[1],myGrid[2],
  myGrid[3],myGrid[4],myGrid[5],
  myGrid[6],myGrid[7],myGrid[8]);
}

//lets the user input the quadrant number
void inputChoice() {
  bool loopIsRunning = true;
  do {
    printf("\nInput quadrant number between 1 and 9: "); 
    scanf("%d", &userChoice);
    if(userChoice >= 1 && userChoice <= 9 && userChoice >= 1 && userChoice <= 9) {
      loopIsRunning = false;
    }	else {
      printf("\nValues outside of range!\n");
    }	
  } while (loopIsRunning);
  userChoice--;
} 

//kinda meme checking system
//looks at the myGrid and returns true if current player won
bool checkWin(){
  bool won = false;
  //check all rows, ys are same
  if(myGrid[0] == 'X' && myGrid[0] == myGrid[1] && myGrid[1] == myGrid[2]){
    won = true;
    //printf("Condition 1");
  }
  if(myGrid[3] == 'X' && myGrid[3] == myGrid[4] && myGrid[4] == myGrid[5]){
    won = true;
    //printf("Condition 2");
  }
  if(myGrid[6] == 'X' && myGrid[6] == myGrid[7] && myGrid[7] == myGrid[8]){
    won = true;
    //printf("Condition 3");
  }
  //check all columns, xs are same
  if(myGrid[0] == 'X' && myGrid[0] == myGrid[3] && myGrid[3] == myGrid[6]){
    won = true;
    //printf("Condition 4");
  }
  if(myGrid[1] == 'X' && myGrid[1] == myGrid[4] && myGrid[4] == myGrid[7]){
    won = true;
    //printf("Condition 5");
  }
  if(myGrid[2] == 'X' && myGrid[2] == myGrid[5] && myGrid[5] == myGrid[8]){
    won = true;
    //printf("Condition 6");
  }
  //1st diagonal
  if(myGrid[6] == 'X' && myGrid[6] == myGrid[4] && myGrid[4] == myGrid[2]){
    won = true;
    //printf("Condition 7");
  }
  //2nd diagonal
  if(myGrid[0] == 'X' && myGrid[0] == myGrid[4] && myGrid[4] == myGrid[8]){
    won = true;
    //printf("Condition 8");
  }
  //check all rows, ys are same
  if(myGrid[0] == 'O' && myGrid[0] == myGrid[1] && myGrid[1] == myGrid[2]){
    won = true;
    //printf("Condition 9");
  }
  if(myGrid[3] == 'O' && myGrid[3] == myGrid[4] && myGrid[4] == myGrid[5]){
    won = true;
    //printf("Condition 10");
  }
  if(myGrid[6] == 'O' && myGrid[6] == myGrid[7] && myGrid[7] == myGrid[8]){
    won = true;
    // printf("Condition 11");
  }
  //check all columns, xs are same
  if(myGrid[0] == 'O' && myGrid[0] == myGrid[3] && myGrid[3] == myGrid[6]){
    won = true;
    //printf("Condition 12");
  }
  if(myGrid[1] == 'O' && myGrid[1] == myGrid[4] && myGrid[4] == myGrid[7]){
    won = true;    
    //printf("Condition 13");
  }
  if(myGrid[2] == 'O' && myGrid[2] == myGrid[5] && myGrid[5] == myGrid[8]){
    won = true;
    // printf("Condition 14");
  }
  //1st diagonal
  if(myGrid[6] == 'O' && myGrid[6] == myGrid[4] && myGrid[4] == myGrid[2]){
    won = true;
     //printf("Condition 15");
  }
  //2nd diagonal
  if(myGrid[0] == 'O' && myGrid[0] == myGrid[4] && myGrid[4] == myGrid[8]){
    won = true;
     //printf("Condition 16");
  }
  return won;
}

//manages a player turn
void playerTurn(char p) {
  inputChoice();
  myGrid[userChoice] = p;
  gameWon = checkWin();
  if(gameWon) {
    gameIsRunning = false;
    printf("\n--- YEAH BABY ----\n");
    printf("Player %c won!!!\n", p);
    printf("------------------\n");
  }
  // printf("game won?? : %i", gameWon);
}

//mnages the game from start to finish
void manageGame() {
  gameIsRunning = true;
  printf("Welcome to the tictactoe app!\n");
  printf("These are the numbers identifying the qyadrants on the game grid: \n");
  printTableInfo();
  printf("X starts! \n");
  /*
  do {
    playerTurn('X');
    printTable();
    cellsFilled++;
    if(cellsFilled == 9){
      gameDraw = true;
      gameIsRunning = false;
      return;
    }
    playerTurn('O');
    printTable();
    cellsFilled++;
  } while (gameIsRunning);
  */
  while(gameIsRunning) {
    playerTurn('X');
    printTable();
    cellsFilled++;
    if(cellsFilled == 9){
      gameDraw = true;
      gameIsRunning = false;
    }
    if(gameWon){
      break;
    }
    playerTurn('O');
    printTable();
    cellsFilled++;
  }
  
}

//one single program iteration is equal to one game
int main() {

  manageGame();

  return 0;
}

