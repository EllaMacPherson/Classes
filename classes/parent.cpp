#include<iostream>
#include<cstring>
#include "parent.h"

using namespace std;

parent::parent(int inYear, const char* inTitle){
  year = inYear;
  title = inTitle
}

int parent::getYear(){
  return year;
}

const char* parent::getTitle(){
  return title;
}
