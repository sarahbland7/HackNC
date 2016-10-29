// Student Name: Sarah Bland
// Filename: ghost.h //NO MODIFICATIONS
// Description: timer class definition

#ifndef GHOST_H
#define GHOST_H

#include <iostream>
#include <string>

using namespace std;

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

ostream & operator<<(ostream & theStream, timer & theTimer);

#endif
