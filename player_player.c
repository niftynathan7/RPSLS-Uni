//PLAYER vs PLAYER

#include <stdio.h>
#include <cs50.h>

int determine_winner();
string choice();

int playerPlayer_rounds;
int playerPlayer_player1Gesture;
int playerPlayer_player2Gesture;
int playerPlayer_winner;
int playerPlayer_player1Score;
int playerPlayer_player2Score;
int playerPlayer_player1Round1Score;
int playerPlayer_player1Round2Score;
int playerPlayer_player1Round3Score;
int playerPlayer_player1Round4Score;
int playerPlayer_player2Round1Score;
int playerPlayer_player2Round2Score;
int playerPlayer_player2Round3Score;
int playerPlayer_player2Round4Score;

void player_player(){
  //define variables
  playerPlayer_player1Round1Score = 0;
  playerPlayer_player1Round2Score = 0;
  playerPlayer_player1Round3Score = 0;
  playerPlayer_player1Round4Score = 0;
  playerPlayer_player2Round1Score = 0;
  playerPlayer_player2Round2Score = 0;
  playerPlayer_player2Round3Score = 0;
  playerPlayer_player2Round4Score = 0;
  playerPlayer_rounds = 0;
  playerPlayer_player1Score = 0;
  playerPlayer_player2Score = 0;

  printf("\nPlayer vs Player Mode\n");

  playgame:
  //play 4 rounds
  while(playerPlayer_rounds < 4){

    //determine player 1 input
    playerPlayer_player1Gesture = get_int(
      "\nPlayer 1\nPlease choose:\n 0 for Rock\n 1 for Paper\n 2 for Scissors\n 3 for Lizard\n 4 for Spock\n"
    );

    //determine player 2 input
    playerPlayer_player2Gesture = get_int(
      "\nPlayer 2\nPlease choose:\n 0 for Rock\n 1 for Paper\n 2 for Scissors\n 3 for Lizard\n 4 for Spock\n"
    );

    //input validation
    if(
      (playerPlayer_player1Gesture == 0 || 
      playerPlayer_player1Gesture == 1 || 
      playerPlayer_player1Gesture == 2 || 
      playerPlayer_player1Gesture == 3 || 
      playerPlayer_player1Gesture == 4) && 
      (playerPlayer_player2Gesture == 0 || 
      playerPlayer_player2Gesture == 1 || 
      playerPlayer_player2Gesture == 2 || 
      playerPlayer_player2Gesture == 3 || 
      playerPlayer_player2Gesture == 4)
    ){

      //determine winner
      playerPlayer_winner = determine_winner(
        playerPlayer_player1Gesture,playerPlayer_player2Gesture
      );

      //print choices
      printf(
        "Player 1 chose: %d (%s)\n", playerPlayer_player1Gesture,choice(
          playerPlayer_player1Gesture
        )
      );
      printf(
        "Player 2 chose: %d (%s)\n", playerPlayer_player2Gesture,choice(
          playerPlayer_player2Gesture
        )
      );

      //print round winner
      if(playerPlayer_winner == 1){
        printf("\nPlayer 1 Wins!\n");
        playerPlayer_player1Score ++;
      }
      else if(playerPlayer_winner == 2){
        printf("\nPlayer 2 Wins!\n");
        playerPlayer_player2Score ++;
      }  
      else if(playerPlayer_winner == 0){
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
    
    if(playerPlayer_rounds == 0){
      playerPlayer_player1Round1Score = ("%i",playerPlayer_player1Score);
      playerPlayer_player2Round1Score = ("%i",playerPlayer_player2Score);
    }
    else if(playerPlayer_rounds == 1){
      playerPlayer_player1Round2Score = ("%i",playerPlayer_player1Score);
      playerPlayer_player2Round2Score = ("%i",playerPlayer_player2Score);
    }
    else if(playerPlayer_rounds == 2){
      playerPlayer_player1Round3Score = ("%i",playerPlayer_player1Score);
      playerPlayer_player2Round3Score = ("%i",playerPlayer_player2Score);
    }
    else if(playerPlayer_rounds == 3){
      playerPlayer_player1Round4Score = ("%i",playerPlayer_player1Score);
      playerPlayer_player2Round4Score = ("%i",playerPlayer_player2Score);
    }
    
    //add 1 to round count
    playerPlayer_rounds ++;
  }
  //print final score & overall winner
  printf(
    "\n\n\nRound 1: %d:%d\nRound 2: %d:%d\nRound 3: %d:%d\nRound 4: %d:%d\n", 
    playerPlayer_player1Round1Score, playerPlayer_player2Round1Score, 
    playerPlayer_player1Round2Score, playerPlayer_player2Round2Score, 
    playerPlayer_player1Round3Score, playerPlayer_player2Round3Score, 
    playerPlayer_player1Round4Score, playerPlayer_player2Round4Score
    );
  
  printf(
    "\nThe Final Score was:\n Player 1: %i\n Player 2: %i\n", 
    playerPlayer_player1Score, playerPlayer_player2Score
  );
  if(playerPlayer_player1Score > playerPlayer_player2Score){
    printf("\nPlayer 1 Wins the Best of 4!\n");
  }
  else if(playerPlayer_player1Score < playerPlayer_player2Score){
    printf("\nPlayer 2 Wins the Best of 4!\n");
  }
  else if(playerPlayer_player1Score == playerPlayer_player2Score){
    printf("\nThe Best of 4 was a Tie!\n");
  }
}