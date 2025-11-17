/* Ella MacPherson
11/17/2025
Classes C++ 
*/

#include <iostream>
#include <cstring>
#include <vector>
#include "videogames.h"
#include "music.h"
#include "movies.h"

using namespace std;
//Function headers
void Add(vector<parent*>& list);
void Search(vector<parent*>& list);
void Delete(vector<parent*>& list);

int main(){

  //create vector of media class
  vector<parent*> list;
  bool go = true;
  //While file runs
  while(go == true){
    char input[10];
    cout<<"Would you like to ADD, SEARCH, DELETE or QUIT"<<endl;
    
    cin.get(input, 9);
    cin.ignore();
    
    if(strcmp(input, "ADD") == 0){
      Add(list);
    }
    else if(strcmp(input, "SEARCH") == 0){
      Search(list);
    }
    else if(strcmp(input, "DELETE") == 0){
      Delete(list);
    }
    else if(strcmp(input, "quit") == 0|| strcmp(input, "QUIT") == 0){
      for (vector<parent*>::iterator it = list.begin(); it != list.end(); ++it) {
	parent* p = *it;
	delete p;
      }
      return 0;
    }
    else{
      cout<<"Please enter a valid command"<<endl;
      input[0] = '\0';
    }
  }
}

//Function to take in inputs and ADD a new parent pointer 
void Add(vector<parent*>& list){
  char mediatype[15];
  
  cout<<"What type of media would you like to add? (videogames, movie, music)"<<endl;
  cin.get(mediatype, 14);
  cin.ignore();
  
  //Take in videogame inputs
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

  //Take in music inputs
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

  //Take in movie inputs
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

//Search for media function
void Search(vector<parent*>& list){
  int inYear = 0;
  bool found = false;
  
  cout<<"Enter the YEAR of the media you're looking for was published: "<<endl;
  cin>>inYear;
  cin.ignore();
  
  cout<<"Search results: "<<endl;
  for(int i = 0; i < list.size(); i++){
    if(list[i]->getYear() == inYear){
      parent* p = list[i];
      found = true;
      p->print();
    }
  }
  
  if(found == false){
    cout<<"No item matches your search!"<<endl;
  }
  
}

//delete function
void Delete(vector<parent*>& list){
  int inYear = 0;
  char input;
  bool found = false;
  int currentI = 0;
  parent* p;
  
  cout<<"Enter the YEAR of the media you'd like to delete: "<<endl;
  cin>>inYear;
  cin.ignore();
  
  cout<<"Are you SURE you want to delete the following media?(Y/N): "<<endl;
  for(int i = 0; i < list.size(); i++){
    if(list[i]->getYear() == inYear){
      found = true;
      currentI = i;
      p = list[i];
      p->print();
    }
  }
  if(found == false){
    cout<<"No media matches your search!"<<endl;
    return;
  }

  //Verify they want to delete, and then use an iterator and erase the memory in the vector
  cin>>input;
  cin.ignore();
  if(input == 'Y'){
    for (vector<parent*>::iterator it = list.begin(); it != list.end(); ++it) { 
      if (*it == p) {
	delete p;
	list.erase(it);
	return;
      }
    }
  }else{
    return;
  }
  
}
