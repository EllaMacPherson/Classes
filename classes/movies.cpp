#include "movies.h"
#include<iostream>
#include <cstring>

using namespace std;

movies::movies(){
  cout<<"movies constructor running"<<endl;
  
}

const char* movies::getDirector(){
  return director;
}

int movies::getDuration(){
  return duration;
}

float movies::getRating(){
  return rating;
}


