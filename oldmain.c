#include <stdio.h>
#include <stdbool.h>


int main() {

  initGame();
  
    for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
        myGrid[i][j] = 'e';
    }
  }
  
  printf("Welcome to the tictactoe app!\n");
  printTableInfo();

  //running game
  bool running = true;

  do {
  playerTurn('X', myGrid);
  playerTurn('O', myGrid);
  } while (running);

  printTable();

  return 0;
}

void playerTurn(char p) {

}

void inputCoords(){
  bool valid = false;
  do {
    printf("\nInput number of quadrant (from 1 to 9): "); 
    scanf("%d", pUserChoice);
    if(userChoice >=0 && userChoice <=  && userChoice >= 0 && userChoice <= 2) {
      valid = true;
    }	else {
      printf("\nValues outside of range!\n");
    }	
  } while (!valid);
  
}

void printTableInfo() {
  printf("\nxy coordinates:\n");
  printf("\n%s | %s | %s \n---------- \n%s | %s | %s \n--------- \n%s | %s | %s \n\n",
  "1", "2", "3",
  "4", "5", "6",
  "7", "8", "9");
}

void printTable() {
  printf("\n%c | %c | %c \n--------- \n%c | %c | %c \n--------- \n%c | %c | %c \n\n",
  myGrid[0],myGrid[1],myGrid[2],
  myGrid[3],myGrid[4],myGrid[5],
  myGrid[6],myGrid[7],myGrid[8])
}