#include "videogames.h"
#include <iostream>
#include <cstring>

using namespace std;

//Videogame constructer!
videogames::videogames(int inYear, char* inTitle, float inRating, char* inPublisher):parent(inYear, inTitle){
  rating = inRating;
  publisher = new char[100];
  strcpy(publisher, inPublisher);  
}

float videogames::getRating(){
  return rating;
}

char* videogames::getPublisher(){
  return publisher;
}

void videogames::print(){
  cout<<"Title: " << title <<" Year: " << year<<" Rating: " <<rating<<" Publisher " << publisher<<endl;
}

videogames::~videogames(){
    delete publisher;
}
