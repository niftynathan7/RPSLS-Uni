// TO DO:
// Print results of individual rounds at the end of the game...
// Extension 1
// Extension 2
// LinkedIn Tasks

#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <time.h>

int gamemode;
void player_player();
void player_computer();
void computer_computer();
void testcode();

int main(){
	//reset random number gen
	srand(time(NULL));
	//get gamemode
	gamemode = get_int("Please choose:\n 0 for Player vs Player\n 1 for Player vs Computer\n 2 for Computer vs Computer\n");
	if (gamemode == 0){
		player_player();
	}
	else if(gamemode == 1){
		player_computer();
	}
	else if(gamemode == 2){
		computer_computer();
	}
	else if(gamemode == -1){
		testcode();
	}
	else{
		printf("Invalid input, please try again! \n");
		main();
	}
}

//generate random int for computer gesture
int computer_gesture;
int get_computer_gesture(){
	return rand() % 5;
	
}