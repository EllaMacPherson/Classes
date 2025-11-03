#include "videogames.h"
#include <iostream>
#include <cstring>

using namespace std;

videogames::videogames(){
  cout<<"videogames constructor running"<<endl;
  
}

float videogames::getRating(){
  return rating;
}

const char* videogames::getPublisher(){
  return publisher;
}
