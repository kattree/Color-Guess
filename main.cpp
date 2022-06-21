#include <cstdio>
#include <cstdlib>
#include <ctime>


int main() {
  srand(time(0));
  printf("Ah I see your back. Unless you're new\n...I suppose you can stay.\nAnyways the only thing I seem to like doing is guessing, except this time YOU'RE the one guessing!! It's going to be colors. I hope you've been an art student at some point because you're going to need to know some color theory ;)\n\n Okay okay okay fine. The colors to pick from are: red, orange, yellow, green, purple, blue, black, white, grey(bri'ish)((sorry I'm part bri'ish)) You have 3 guesses. Good luck!! Your first clue is....");

   const char* colors[] = {"red", "orange", "yellow", "green", "purple", "blue", "black", "white", "grey"};

  const char* colour = colors[rand() % 9];
  bool notWinning = true;
  char* input = new char[7];
  //guess number VV
  int gn = 3;
  
  //game loop
  while(notWinning){
    //red
  if(colour == colors[0]){
    if (gn == 3) printf("\nI am hot");
    else if (gn == 2) printf("\nI am analogous to orange");
    else if (gn == 1) printf("\nI am the colour of blood");
  }
    //orange
  else if(colour == colors[1]){
    if (gn == 3) printf("\nI am hot");
   else  if (gn == 2) printf("\nI am brown in disguise");
  else   if (gn == 1) printf("\nI share a name with a fruit :D");
  }
    //yellow
 else if(colour == colors[2]){
    if (gn == 3) printf("\nI am hot");
   else if (gn == 2) printf("\nI am the colour of something that can come out of a wound");
   else if (gn == 1) printf("\nI am the sun <3");
 }
    //green
 else if(colour == colors[3]){
   if (gn == 3) printf("\nI am cold");
   else if (gn == 2) printf("\nI am what no one wants to eat");
   else if (gn == 1) printf("\nI am nature");
 }
    //purple
 else if(colour == colors[4]){
    if (gn == 3) printf("\nI am cold");
   else if (gn == 2) printf("\nI am a rare colour");
   else if (gn == 1) printf("\nI am the colour of my shirt in my profile picture on github!");
 }
    //blue
 else if(colour == colors[5]){
   if (gn == 3) printf("\nI am cold");
   else if (gn == 2) printf("\nI am complementary to orange");
   else if (gn == 1) printf("\nI am the ocean");
 }
    //black
 else if(colour == colors[6]){
   if (gn == 3) printf("\nI am neutral");
   else if (gn == 2) printf("\nI am common around you");
   else if (gn == 1) printf("\nI am the absence of everything");
 }
    //white
 else if(colour == colors[7]){
    if (gn == 3) printf("\nI am neutral");
   else if (gn == 2) printf("\nI am everything");
   else if (gn == 1) printf("\nI am a blank slate");
 }
    //grey/gray
else  if(colour == colors[8]){
    if (gn == 3) printf("\nI am neutral");
   else if (gn == 2) printf("\nI am really lame");
   else if (gn == 1) printf("\nI am the colour of most metals");
 }
   fgets(input,10,stdin);
    //checks the player's answer
    if (input[0] == colour[0]){
      if(input[2]==colour[2]){
      printf("\nI am so proud of you! We both have grown so much in this journey. Yes you were correct in your guess. It was %s. It only took you %d guess(s) to figure it out",colour,4-gn);
        break;
        notWinning = false;
        }
    }
    
 gn--;
    //checks to see if the player has exeeded the number of guesses
    if (gn ==0) {
      printf("\nI do not know how, but you some how managed to fail to guess correctly. I thought I made it easy enough for you, but alas it seems as though you are an absolute idiot. I cannot do anything about that. At a sad time like this, I am afraid that I must depart. Before I go I just wanted to let you know that the colour you failed to guess was %s.",colour);
      break;
      notWinning = false;
    }
  
    }
}
