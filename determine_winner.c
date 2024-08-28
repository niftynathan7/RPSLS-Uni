//determines winner depending on gesture inputs
//returns 0 for a tie, 1 for gesture 1 winning, 2 for gesture 2 winning.

int determine_winner(gesture_1, gesture_2){
  if(gesture_1 == 0){ //if gesture_1 is rock
    if(gesture_2 == 0){//if gesture_2 is rock
      return 0;
    }
    else if(gesture_2 == 1){//if gesture_2 is paper
      return 2;
    }
    else if(gesture_2 == 2){//if gesture_2 is scissors
      return 1;
    }
    else if(gesture_2 == 3){//if gesture_2 is lizard
      return 1;
    }
    else if(gesture_2 == 4){//if gesture_2 is spock
      return 2;
    }
  }
  else if(gesture_1 == 1){ //if gesture_1 is paper
    if(gesture_2 == 0){//if gesture_2 is rock
      return 1;
    }
    else if(gesture_2 == 1){//if gesture_2 is paper
      return 0;
    }
    else if(gesture_2 == 2){//if gesture_2 is scissors
      return 2;
    }
    else if(gesture_2 == 3){//if gesture_2 is lizard
      return 2;
    }
    else if(gesture_2 == 4){//if gesture_2 is spock
      return 1;
    }
  }
  else if(gesture_1 == 2){//if gesture_1 is scissors
    if(gesture_2 == 0){//if gesture_2 is rock
      return 2;
    }
    else if(gesture_2 == 1){//if gesture_2 is paper
      return 1;
    }
    else if(gesture_2 == 2){//if gesture_2 is scissors
      return 0;
    }
    else if(gesture_2 == 3){//if gesture_2 is lizard
      return 1;
    }
    else if(gesture_2 == 4){//if gesture_2 is spock
      return 2;
    }
  }
  else if(gesture_1 == 3){//if gesture_1 is lizard
    if(gesture_2 == 0){//if gesture_2 is rock
      return 2;
    }
    else if(gesture_2 == 1){//if gesture_2 is paper
      return 1;
    }
    else if(gesture_2 == 2){//if gesture_2 is scissors
      return 2;
    }
    else if(gesture_2 == 3){//if gesture_2 is lizard
      return 0;
    }
    else if(gesture_2 == 4){//if gesture_2 is spock
      return 1;
    }
  }
  else if(gesture_1 == 4){//if gesture_1 is spock
    if(gesture_2 == 0){//if gesture_2 is rock
      return 1;
    }
    else if(gesture_2 == 1){//if gesture_2 is paper
      return 2;
    }
    else if(gesture_2 == 2){//if gesture_2 is scissors
      return 1;
    }
    else if(gesture_2 == 3){//if gesture_2 is lizard
      return 2;
    }
    else if(gesture_2 == 4){//if gesture_2 is spock
      return 0;
    }
  }
  return -1;
}