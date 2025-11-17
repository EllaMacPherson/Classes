#ifndef videogames_H
#define videogames_H

#include<iostream>
#include "parent.h"
#include <cstring>

using namespace std;

class videogames : public parent {
 public:
  videogames(int inYear, char* inTitle, float inRating, char* inPublisher);
  virtual ~videogames();
  float getRating();
  char* getPublisher();
  void print();
 protected:
  float rating;
  char* publisher;

};
#endif
