//PLAYER vs COMPUTER

#include <stdio.h>
#include <cs50.h>

int get_computer_gesture();
int determine_winner();
string choice();

int playerComputer_rounds;
int playerComputer_playerGesture;
int playerComputer_computerGesture;
int playerComputer_winner;
int playerComputer_computerScore;
int playerComputer_playerScore;
int playerComputer_computerRound1Score;
int playerComputer_computerRound2Score;
int playerComputer_computerRound3Score;
int playerComputer_computerRound4Score;
int playerComputer_playerRound1Score;
int playerComputer_playerRound2Score;
int playerComputer_playerRound3Score;
int playerComputer_playerRound4Score;

void player_computer(){
  
  //define variables

  playerComputer_computerRound1Score = 0;
  playerComputer_computerRound2Score = 0;
  playerComputer_computerRound3Score = 0;
  playerComputer_computerRound4Score = 0;
  playerComputer_playerRound1Score = 0;
  playerComputer_playerRound2Score = 0;
  playerComputer_playerRound3Score = 0;
  playerComputer_playerRound4Score = 0;
  playerComputer_rounds = 0;
  playerComputer_computerScore = 0;
  playerComputer_playerScore = 0;

  printf("\nPlayer vs Computer Mode\n");
  
  playgame:
  //play 4 rounds
  while(playerComputer_rounds < 4){
    
    //determine player input
    playerComputer_playerGesture = get_int(
      "\nPlease choose: \n 0 for Rock\n 1 for Paper\n 2 for Scissors\n 3 for Lizard\n 4 for Spock\n"
    );
    
    //input validation
    if(
      playerComputer_playerGesture == 0 || 
      playerComputer_playerGesture == 1 || 
      playerComputer_playerGesture == 2 || 
      playerComputer_playerGesture == 3 || 
      playerComputer_playerGesture == 4
    ){
      
      //determine computer input
      playerComputer_computerGesture = get_computer_gesture();

      //determine winner
      playerComputer_winner = determine_winner(
        playerComputer_playerGesture,playerComputer_computerGesture
      );

      //print choices
      printf(
        "The Player chose: %d (%s)\n", playerComputer_playerGesture,choice(
          playerComputer_playerGesture
        )
      );
      printf(
        "The Computer chose: %d (%s)\n", playerComputer_computerGesture,choice(
          playerComputer_computerGesture
        )
      );

      //print round winner
      if(playerComputer_winner == 2){
        printf("\nComputer Wins!\n");
        playerComputer_computerScore ++;
      }
      else if(playerComputer_winner == 1){
        printf("\nYou Win!\n");
        playerComputer_playerScore ++;
      }  
      else if(playerComputer_winner == 0){
        printf("\nIt's a Tie!\nPlease try Again!\n");
        goto playgame;
      }
      else{
        printf("Error Occured, Please try Again.");
      }


    }
    //input validation
    else{
      printf("Invalid input, please try again! \n");
      goto playgame;
    }

    if(playerComputer_rounds == 0){
      playerComputer_playerRound1Score = ("%i",playerComputer_playerScore);
      playerComputer_computerRound1Score = ("%i",playerComputer_computerScore);
    }
    else if(playerComputer_rounds == 1){
      playerComputer_playerRound2Score = ("%i",playerComputer_playerScore);
      playerComputer_computerRound2Score = ("%i",playerComputer_computerScore);
    }
    else if(playerComputer_rounds == 2){
      playerComputer_playerRound3Score = ("%i",playerComputer_playerScore);
      playerComputer_computerRound3Score = ("%i",playerComputer_computerScore);
    }
    else if(playerComputer_rounds == 3){
      playerComputer_playerRound4Score = ("%i",playerComputer_playerScore);
      playerComputer_computerRound4Score = ("%i",playerComputer_computerScore);
    }
    
    //add 1 to round count
    playerComputer_rounds ++;
    
  }
  
  //print final score & overall winner
  printf(
    "\n\n\nRound 1: %d:%d\nRound 2: %d:%d\nRound 3: %d:%d\nRound 4: %d:%d\n", 
    playerComputer_playerRound1Score, playerComputer_computerRound1Score, 
    playerComputer_playerRound2Score, playerComputer_computerRound2Score, 
    playerComputer_playerRound3Score, playerComputer_computerRound3Score, 
    playerComputer_playerRound4Score, playerComputer_computerRound4Score
    );
  
  printf(
    "\nThe Final Score was:\n Player: %i\n Computer: %i\n", 
    playerComputer_playerScore, playerComputer_computerScore
  );
  if(playerComputer_computerScore > playerComputer_playerScore){
    printf("\nThe Computer Wins the Best of 4!\n");
  }
  else if(playerComputer_computerScore < playerComputer_playerScore){
    printf("\nYou Win the Best of 4!\n");
  }
  else if(playerComputer_playerScore == playerComputer_computerScore){
    printf("\nThe Best of 4 was a Tie!\n");
  }
}