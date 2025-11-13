#include <iostream>
#include <cstring>
#include <vector>
#include "videogames.h"
#include "music.h"
#include "movies.h"

//all media adding CORRECTLY!!! to the vector. now need to work on searching through. dont understand how to know what child at list[i] it is, and then how to print that? maybe its the casting thing. or virtual functions. i dont get it.

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

void Add(vector<parent*>& list){ //only TITLE string works and musics PUBLISHER
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
    inTitle[0] = '\0';
    int inYear = 0;
    int inDuration = 0;
    char inDirector[50];
    inDirector[0] = '\0';
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
  int inYear = 0;
  cout<<"Enter the YEAR of the media you're looking for was published: "<<endl;
  cin>>inYear;
  cin.ignore();
  cout<<"Search results: "<<endl;
  for(int i = 0; i < list.size(); i++){
    if(list[i]->getYear() == inYear){
      parent* p = list[i];
      //check what child class the parent class is at this 
      if (videogames* v = dynamic_cast<videogames*>(p)) {
	//is a videogame!
	cout << "This is a VIDEOGAME" << endl;
	cout << v->getPublisher() << endl;
      }
    }
  }
  
}

void Delete(vector<parent*>& list){
  cout<<"Delete"<<endl;
}
