#ifndef movies_h
#define movies_h

#include "parent.h"
#include <iostream>
#include <cstring>

using namespace std;

class movies : public parent{
 public:
  movies(int inYear, char* inTitle, char* inDirector, float inRating, int inDuration);
  char* getDirector();
  int getDuration();
  float getRating();
  void print();
  virtual ~movies();
 protected:
  char* director;
  int duration;
  float rating;
};
#endif
