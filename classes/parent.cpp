#include<iostream>
#include<cstring>
#include "parent.h"

using namespace std;

//Parent cosntructer
parent::parent(int inYear, char* inTitle){
  year = inYear;
  title = new char[100];
  strcpy(title, inTitle);
  
}

parent::~parent(){
  delete title;
}

int parent::getYear(){
  return year;
}

char* parent::getTitle(){
  return title;
}

void parent::print(){
}
