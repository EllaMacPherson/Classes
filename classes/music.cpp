#include "music.h"
#include <iostream>
#include <cstring>

using namespace std;

music::music(int inYear, char* inTitle, int inDuration, char* inArtist, char* inPublisher ):parent(inYear, inTitle){
  duration = inDuration;
  strcpy(artist, inArtist);
  strcpy(publisher, inPublisher);
}

char* music::getArtist(){
  return artist;
}

char* music::getPublisher(){
  return publisher;
}

int music::getDuration(){
  return duration;
}
