// Student Name: Sarah Bland
// Filename: ghost.cpp 
// Description: ghost game implementation 

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>

using namespace std;

//FORWARD DECLARATIONS 

/*
class ghost {
public:
  ghost();
  ~ghost();
  int ghostNum;
  bool hasLost;
  char inputVal;
  string challenge(Player p);

 private:
  Player player;
};
*/

bool gameOver = true;

//MAIN METHOD 
int main() {
  
  string word = "";

  while(!gameOver) {
    //pass to playGame 
  }
}

//METHOD IMPLEMENTATIONS 
Player() { //constructor
  int ghostNum = 0;
  bool hasLost = false;
  bool isChallenge = false;
  char input;
}

~Player() { //destructor 
}

string challenge(Player p) {
}

//all the junk that goes with a given round 
bool playGame(Player p1, Player p2) {
  makeDictArray();

  
  
}

char input(/*something here from Scott's code*/){
  
}

string[] makeDictArray() {
  int numLines = 0;
  int i = 0;
  string line;

  //read through file to get the number of lines 
  ifstream myfile("dictionary.txt");
  if (myfile.is_open()) {
    while (getline (myfile,line)) {
      numLines++;
    }
    myfile.close();
  }
  else {
    cout << "Error. Couldn't open file #1"; //can remove later 
  }

  //pass size to array
  string[] dictArray = dictArray[numLines];

  //read through file to store lines in the array
  myfile.open("dictionary.txt");
  if (myfile.is_open()) {
    while (getline (myfile,line)) {
      a[i] = line;
      i++;
    }
    myfile.close();
  }
  else {
    cout << "Error. Couldn't open file #2"; //can remove later 
  }

  return dictArray;
}
