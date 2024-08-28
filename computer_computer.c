// COMPUTER vs COMPUTER

#include <stdio.h>
#include <cs50.h>

int get_computer_gesture();
int determine_winner();
string choice();

int computerComputer_rounds;
int computerComputer_computer1Gesture;
int computerComputer_computer2Gesture;
int computerComputer_winner;
int computerComputer_computer1Score;
int computerComputer_computer2Score;
int computerComputer_computer1Round1Score;
int computerComputer_computer1Round2Score;
int computerComputer_computer1Round3Score;
int computerComputer_computer1Round4Score;
int computerComputer_computer2Round1Score;
int computerComputer_computer2Round2Score;
int computerComputer_computer2Round3Score;
int computerComputer_computer2Round4Score;

void computer_computer(){
  //define variables
  computerComputer_computer1Round1Score = 0;
  computerComputer_computer1Round2Score = 0;
  computerComputer_computer1Round3Score = 0;
  computerComputer_computer1Round4Score = 0;
  computerComputer_computer2Round1Score = 0;
  computerComputer_computer2Round2Score = 0;
  computerComputer_computer2Round3Score = 0;
  computerComputer_computer2Round4Score = 0;
  computerComputer_rounds = 0;
  computerComputer_computer1Score = 0;
  computerComputer_computer2Score = 0;

  printf("\nComputer vs Computer Mode\n");

  playgame:
  //play 4 rounds
  while(computerComputer_rounds < 4){

    //determine computer 1 input
    computerComputer_computer1Gesture = get_computer_gesture();

    //determine computer 2 input
    computerComputer_computer2Gesture = get_computer_gesture();

    //determine winner
    computerComputer_winner = determine_winner(
      computerComputer_computer1Gesture,computerComputer_computer2Gesture
    );

    //print choices
    printf(
      "Computer 1 chose: %d (%s)\n", computerComputer_computer1Gesture,choice(
        computerComputer_computer1Gesture
      )
    );
    printf(
      "Computer 2 chose: %d (%s)\n", computerComputer_computer2Gesture,choice(
        computerComputer_computer2Gesture
      )
    );

    //print round winner
    if( computerComputer_winner == 2){
      printf("\nComputer 2 Wins!\n");
      computerComputer_computer2Score ++;
    }
    else if(computerComputer_winner == 1){
      printf("\nComputer 1 Wins!\n");
      computerComputer_computer1Score ++;
    }  
    else if(computerComputer_winner == 0){
      printf("\nIt's a Tie!\nPlease try Again!\n");
      goto playgame;
    }
    else{
      printf("Error Occured, Please try Again.");
    }

    if(computerComputer_rounds == 0){
      computerComputer_computer1Round1Score = ("%i",computerComputer_computer1Score);
      computerComputer_computer2Round1Score = ("%i",computerComputer_computer2Score);
    }
    else if(computerComputer_rounds == 1){
      computerComputer_computer1Round2Score = ("%i",computerComputer_computer1Score);
      computerComputer_computer2Round2Score = ("%i",computerComputer_computer2Score);
    }
    else if(computerComputer_rounds == 2){
      computerComputer_computer1Round3Score = ("%i",computerComputer_computer1Score);
      computerComputer_computer2Round3Score = ("%i",computerComputer_computer2Score);
    }
    else if(computerComputer_rounds == 3){
      computerComputer_computer1Round4Score = ("%i",computerComputer_computer1Score);
      computerComputer_computer2Round4Score = ("%i",computerComputer_computer2Score);
    }
    
  //add 1 to round count
  computerComputer_rounds ++;
  }
    
  //print final score & overall winner
  printf(
    "\n\n\nRound 1: %d:%d\nRound 2: %d:%d\nRound 3: %d:%d\nRound 4: %d:%d\n", 
    computerComputer_computer1Round1Score, computerComputer_computer2Round1Score, 
    computerComputer_computer1Round2Score, computerComputer_computer2Round2Score, 
    computerComputer_computer1Round3Score, computerComputer_computer2Round3Score, 
    computerComputer_computer1Round4Score, computerComputer_computer2Round4Score
    );
  
  printf(
    "\nThe Final Score was:\n Computer 1: %i\n Computer 2: %i\n", 
    computerComputer_computer1Score, computerComputer_computer2Score
  );
  if(computerComputer_computer1Score > computerComputer_computer2Score){
    printf("\nComputer 1 Wins the Best of 4!\n");
  }
  else if(computerComputer_computer1Score < computerComputer_computer2Score){
    printf("\nComputer 2 Wins the Best of 4!\n");
  }
  else if(computerComputer_computer1Score == computerComputer_computer2Score){
    printf("\nThe Best of 4 was a Tie!\n");
  }
}