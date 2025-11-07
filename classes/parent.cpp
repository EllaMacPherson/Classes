#include<iostream>
#include<cstring>
#include "parent.h"

using namespace std;

parent::parent(int inYear, char* inTitle){
  year = inYear;
  strcpy(title, inTitle); 
}

int parent::getYear(){
  return year;
}

char* parent::getTitle(){
  return title;
}
