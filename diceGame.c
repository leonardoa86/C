#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <math.h>

int main() {

srand(time(0));
int diceRollA, diceRollB;
int diceSumA = 0;
int diceSumB = 0;
char option;

printf("Betting Game\n");
printf("Game consist of three dice\n");
printf("Roll the dice and guess if the next sum will be lower or higher or same\n");

  for(int i=0; i<3; i++){
     diceRollA = (rand() % 6) + 1;
     diceSumA += diceRollA;
  }
   printf("Sum of the 3 rolls is: %d\n",diceSumA);

   printf("Guess if the next total will be higher, same or lower than this one. (h/s/l)? ");
   scanf("%c",&option);

  for(int i=0; i<3; i++){
      diceRollB = (rand() % 6) + 1;
      diceSumB += diceRollB;
    }
   printf("Sum of the 3 rolls is: %d\n",diceSumB);
      if((option == 's' || option == 'S' && diceSumA == diceSumB) || (option == 'h' ||
      option == 'H' && (diceSumB > diceSumA)) || (option == 'l' || option == 'L' && diceSumB < diceSumA))
      {
        printf("You guessed right!\n");
      }else{
        printf("Wrong guess\n");
      }
 return 0;
}
