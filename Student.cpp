#include "Student.h"
#include <iostream>
#include<cstring>
using namespace std;

void Student::assignDetails(int pstdID, char pname) {
  studentID=pstdID;
  strcpy(name,pname);
}

void Student::display() {
cout <<"student id\n"<<studentID;
cout <<"student name\n"<<name;
  }
