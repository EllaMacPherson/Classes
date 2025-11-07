#include <iostream>
#include <cstring>
#include <vector>
#include "videogames.h"
#include "music.h"
#include "movies.h"

//OKAY everything compiles and variables collection and assignment works. make sure variables are like fully cleared. like add multiple movies in a row and make sure its still saving old + saving new as a seperate struct. and then work through search.

using namespace std;
void Add(vector<parent*>& list);
void Search(vector<parent*>& list);
void Delete(vector<parent*>& list);


int main(){
  
  vector<parent*> list;
  bool go = true;

  while(go == true){
    char input[10];
    cout<<"Would you like to ADD, SEARCH or DELETE"<<endl;

    cin.get(input, 9);
    cin.ignore(); //clear my buffer

    if(strcmp(input, "ADD") == 0){
      Add(list);
    }
    else if(strcmp(input, "SEARCH") == 0){
      Search(list);
    }
    else if(strcmp(input, "DELETE") == 0){
      Delete(list);
    }
    else{
      cout<<"Please enter a valid command"<<endl;
      input[0] = '\0';
    }

  }
  return 0;
}

void Add(vector<parent*>& list){
  char mediatype[15];
  cout<<"What type of media would you like to add? (videogames, movie, music)"<<endl;
  cin.get(mediatype, 14);
  cin.ignore();
  if(strcmp(mediatype, "videogames") == 0){
    char inTitle[50];
    int inYear = 0;
    float inRating = 0;
    char inPublisher[50];
    cout<<"Title of videogame?"<<endl;
    cin.get(inTitle, 49);
    cin.ignore();
    cout<<"Year published?"<<endl;
    cin>>inYear;
    cin.ignore();
    cout<<"Rating?"<<endl;
    cin>>inRating;
    cin.ignore();
    cout<<"Publisher?"<<endl;
    cin.get(inPublisher, 49);
    cin.ignore();
    
    videogames* v = new videogames(inYear, inTitle, inRating, inPublisher);
    list.push_back(v);
    
    cout<<"Successfully added: "<<endl;
    cout<<"Title: "<< v->getTitle()<<" Year: "<< v->getYear()<<" Rating: "<<v->getRating()
	<<" Publisher: "<<v->getPublisher()<<endl;
  }
  if(strcmp(mediatype, "music") == 0){
    char inTitle[50];
    int inYear = 0;
    int inDuration = 0;
    char inArtist[50];
    char inPublisher[50];
    cout<<"Title of music?"<<endl;
    cin.get(inTitle, 49);
    cin.ignore();
    cout<<"Year published?"<<endl;
    cin>>inYear;
    cin.ignore();
    cout<<"Artist?"<<endl;
    cin.get(inArtist, 49);
    cin.ignore();
    cout<<"Duration?"<<endl;
    cin>>inDuration;
    cin.ignore();
    cout<<"Publisher?"<<endl;
    cin.get(inPublisher, 49);
    cin.ignore();
    music* m = new music(inYear, inTitle, inDuration, inArtist, inPublisher);
    list.push_back(m);

        
    cout<<"Successfully added: "<<endl;
    cout<<"Title: "<< m->getTitle()<<" Year: "<< m->getYear()<<" Artist: "<<m->getArtist()
	<<" Publisher: "<<m->getPublisher()<<endl;
    }
  if(strcmp(mediatype, "movie") == 0){
    char inTitle[50];
    int inYear = 0;
    int inDuration = 0;
    char inDirector[50];
    float inRating = 0;
    cout<<"Title of movie?"<<endl;
    cin.get(inTitle, 49);
    cin.ignore();
    cout<<"Year published?"<<endl;
    cin>>inYear;
    cin.ignore();
    cout<<"Rating?"<<endl;
    cin>>inRating;
    cin.ignore();
    cout<<"Duration?"<<endl;
    cin>>inDuration;
    cin.ignore();
    cout<<"Director?"<<endl;
    cin.get(inDirector, 49);
    cin.ignore();
    movies* mo = new movies(inYear, inTitle, inDirector, inRating, inDuration);
    list.push_back(mo);

        
    cout<<"Successfully added: "<<endl;
    cout<<"Title: "<< mo->getTitle()<<" Year: "<< mo->getYear()<<" Rating: "<<mo->getRating()
	<<" Duration: "<<mo->getDuration()<< " Director: "<<mo->getDirector()<<endl;
    }
}

void Search(vector<parent*>& list){
  cout<<"Search"<<endl;
}

void Delete(vector<parent*>& list){
  cout<<"Delete"<<endl;
}
