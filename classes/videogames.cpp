#include "videogames.h"
#include <iostream>
#include <cstring>

using namespace std;

videogames::videogames(int inYear, char* inTitle, float inRating, char* inPublisher):parent(inYear, inTitle){
  //assign variables to rating and publisher
  rating = inRating;
  strcpy(publisher, inPublisher);
}

float videogames::getRating(){
  return rating;
}

char* videogames::getPublisher(){
  return publisher;
}
