#include "music.h"
#include <iostream>
#include <cstring>

using namespace std;

music::music(){
  cout<<"music constructor running"<<endl;
}

const char* music::getArtist(){
  return artist;
}

const char* music::getPublisher(){
  return publisher;
}

int music::getDuration(){
  return duration;
}
