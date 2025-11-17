#ifndef SOME_UNIQUE_NAME_HERE
#define SOME_UNIQUE_NAME_HERE
#include <iostream>
#include <cstring>

using namespace std;

class parent {
 public:
  parent(int inYear, char* inTitle);
  virtual void print();
  int getYear();
  char* getTitle();
  virtual ~parent();
 protected:
  char* title;
  int year;
};

#endif
