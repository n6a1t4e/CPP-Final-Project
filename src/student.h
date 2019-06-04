#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student {
    private:


       string studentId;
       string firstName;
       string lastName;
       string emailAddress;
       int age;
       vector<int> daysToCompleteCourses;
       string degreeType;



   public:
      Student() : daysToCompleteCourses(3) {};

      void   SetStudentId(string id);
      void   SetFirstName(string first);
      void   SetLastName(string last);
      void   SetEmailAddress(string email);
      void   SetAge(int ageYears);
      void   SetDaysToCompleteCourses(int c1, int c2, int c3);
      void   SetDegreeType(string degree);

      string GetStudentId();
      string GetFirstName();
      string GetLastName();
      string GetEmailAddress();
      int    GetAge();
      int    GetDaysToCompleteCourses();
      string GetDegreeType();


};

#endif
