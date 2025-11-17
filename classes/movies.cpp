#include "movies.h"
#include<iostream>
#include <cstring>

using namespace std;

//movies constructer!
movies::movies(int inYear, char* inTitle, char* inDirector, float inRating, int inDuration):parent(inYear, inTitle){
  director = new char[100];
  strcpy(director, inDirector);
  duration = inDuration;
  rating = inRating;
}

movies::~movies(){
  delete director;
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

void movies::print(){
  cout<<"Title: " <<title <<" Year: " << year<<" Rating: " <<rating<<" Director: "
      << director<< " Duration: " << duration<<endl;
}
