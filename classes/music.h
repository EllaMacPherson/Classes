#ifndef music_h
#define music_h

#include "parent.h"
#include <iostream>
#include <cstring>

using namespace std;

class music : public parent{
 public:
  music(int inYear, char* inTitle, int inDuration, char* inArtist, char* inPublisher);
  char* getArtist();
  char* getPublisher();
  int getDuration();
  void print();
  virtual ~music();
 protected:
  char* artist;
  int  duration;
  char* publisher;
};

#endif
