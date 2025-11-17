#include "music.h"
#include <iostream>
#include <cstring>

using namespace std;

//Music constructer!
music::music(int inYear, char* inTitle, int inDuration, char* inArtist, char* inPublisher ):parent(inYear, inTitle){
  duration = inDuration;
  artist = new char[100];
  strcpy(artist, inArtist);
  publisher = new char[100];
  strcpy(publisher, inPublisher);
}

music::~music(){
  delete artist;
  delete publisher;
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

void music::print(){
  cout<<"Title: " <<title <<" Year: " << year<<
    " Duration: " <<duration<<" Artist: " << artist<< " Publisher: "<<publisher<<endl;
}
