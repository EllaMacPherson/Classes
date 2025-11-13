#include "movies.h"
#include<iostream>
#include <cstring>

using namespace std;

movies::movies(int inYear, char* inTitle, char* inDirector, float inRating, int inDuration):parent(inYear, inTitle){
  strcpy(director, inDirector);
  duration = inDuration;
  rating = inRating;
}

char* movies::getDirector(){
  return director;
}

int movies::getDuration(){
  return duration;
}

float movies::getRating(){
  return rating;
}


