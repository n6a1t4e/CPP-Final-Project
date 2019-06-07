#ifndef NETWORKSTUDENT_H
#define NETWORKSTUDENT_H

#include <iostream>
#include <string>
#include <vector>

#include "student.h"

using namespace std;

class NetworkStudent: public Student {
  public:
    NetworkStudent(
      string id,string first,string last,
      string email,int ageYears,int c1,
      int c2,int c3,string degree
    ) : Student(
      id, first, last,
       email, ageYears, c1,
       c2, c3, degree
    ){};
};

#endif
