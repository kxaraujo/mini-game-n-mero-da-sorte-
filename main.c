#include "stdio.h"
#include "stdlib.h"
#include "time.h"

//develop by kARAUJO on repl.it
//input and output command, repetition loops, conditional structures, random numbers



int main (void) {
  srand(time(NULL));
  printf("\n\n");
  printf("|==================================|");
  printf("\n|-----------LUCKY NUMBER-----------|\n");
  printf("|==================================|");
  printf("\n\n");

int lck_num = rand() %101; 

int number;
int attempts=0;
char option;

do{//controls whether the game continues

int lck_num = rand() %101; 
int attempts=0;


do//running the game 

{
  printf("\nenter a number: ");
  scanf("%i" , &number);

  getchar();
  
  attempts++;

  if(number==lck_num)
{
  printf("\nyou got it right with %i attempts\n", attempts);
}

else if (number>lck_num)
{
  printf("\n%i is greater than the lucky number. Try again!\n" , number);
}
else
{
  printf("\n%i is less than the lucky number. Try again!\n" , number);
}

}while(number!= lck_num);



printf("do you wish to continue? (y/n)");
scanf("%c" , &option);

}while(option == 'y');



}

