#include <iostream>
#include <cstring>
#include <vector>
#include "videogames.h"
#include "music.h"
#include "movies.h"

//OKAY FILES ALL COMPLIE BEAUTIULLY!! NOW TEST ACCESSS AND START THINKING ABOUT ALL THAT FUN STUFF COMMIT AT BEGINNING OF NEXT CLASS!!!

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
    cout<<"Rating?"<<endl;
    cin>>inRating;
    cin.ignore();
    cout<<"Publisher"<<endl;
    cin.get(inPublisher, 49);
    cin.ignore();
    
    videogames* v = new videogames(inYear, inTitle, inRating, inPublisher);
    list.push_back(v);
  }

}

void Search(vector<parent*>& list){
  cout<<"Search"<<endl;
}

void Delete(vector<parent*>& list){
  cout<<"Delete"<<endl;
}
