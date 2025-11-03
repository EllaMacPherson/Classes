#include<iostream>
#include<cstring>
#include "parent.h"

using namespace std;

parent::parent(){
  cout<<"#parent constructor is runnningggg"<<endl;
  cin>>year;
}

int parent::getYear(){
  return year;
}

const char* parent::getTitle(){
  return title;
}
