#include "videogames.h"
#include <iostream>
#include <cstring>

using namespace std;

videogames::videogames(int inYear, const char* inTitle, float inRating, const char* inPublisher):parent(int inYear, const char* inTitle){
  //assign variables to rating and publisher
  rating = inRating;
  strycpy(inPublisher,publisher);
}

float videogames::getRating(){
  return rating;
}

const char* videogames::getPublisher(){
  return publisher;
}
