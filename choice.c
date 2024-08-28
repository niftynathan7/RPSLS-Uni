#include <cs50.h>
#include <stdio.h>

//convert int value into string choice
string choice(int gesture){
  if(gesture == 0){
    return "Rock";
  }
  else if(gesture == 1){
    return "Paper";
  }
  else if(gesture == 2){
    return "Scissors";
  }
  else if(gesture == 3){
    return "Lizard";
  }
  else if(gesture == 4){
    return "Spock";
  }
  else{
    return "Error";
  }
}