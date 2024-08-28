#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void testcode(){
  
      /* printf(
        "This is 5 random numbers each should be from 0 to 4\n"
      );
      printf(
        "%i\n%i\n%i\n%i\n%i\n",
          get_computer_gesture(),get_computer_gesture(), 
          get_computer_gesture(), get_computer_gesture(), 
          get_computer_gesture()
      );

      printf("\n\n\nThis inputs int's 0 through 5 into the choice function\nIt 
      should return:\nRock\nPaper\nScissors\nLizard\nSpock\nError\n");
  
      printf("\nReturns:\n%s\n%s\n%s\n%s\n%s\n%s\n", choice(0), choice(1),   
      choice(2), choice(3), choice(4), choice(5));
      */
  
  if ((determine_winner(0,0) == 0) && (determine_winner(0,1) == 2) && (determine_winner(0,2) == 1) && (determine_winner(0,3) == 1) && 
  (determine_winner(0,4) == 2)) {
    printf ("\nWhen Gesture 1 is Rock and Gesture 2 is all values, the function works correctly.\n");}

  if ((determine_winner(1,0) == 1) && (determine_winner(1,1) == 0) && (determine_winner(1,2) == 2) && (determine_winner(1,3) == 2) &&
  (determine_winner(1,4) == 1)) {
    printf ("\nWhen Gesture 1 is Paper and Gesture 2 is all values, the function works correctly.\n");}

  if ((determine_winner(2,0) == 2) && (determine_winner(2,1) == 1) && (determine_winner(2,2) == 0) && (determine_winner(2,3) == 1) && 
  (determine_winner(2,4) == 2)) {
    printf ("\nWhen Gesture 1 is Scissors and Gesture 2 is all values, the function works correctly.\n");}

  if ((determine_winner(3,0) == 2) && (determine_winner(3,1) == 1) && (determine_winner(3,2) == 2) && (determine_winner(3,3) == 0) && 
  (determine_winner(3,4) == 1)) {
    printf ("\nWhen Gesture 1 is Lizard and Gesture 2 is all values, the function works correctly.\n");}

  if ((determine_winner(4,0) == 1) && (determine_winner(4,1) == 2) && (determine_winner(4,2) == 1) && (determine_winner(4,3) == 2) && 
  (determine_winner(4,4) == 0)) {
    printf ("\nWhen Gesture 1 is Spock and Gesture 2 is all values, the function works correctly.\n");}  
}



