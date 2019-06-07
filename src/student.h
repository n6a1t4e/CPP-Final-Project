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
      Student(
        string id,string first,string last,
        string email,int age,int c1,
        int c2,int c3,string degree
      );
      void   SetStudentId(string id);
      void   SetFirstName(string first);
      void   SetLastName(string last);
      void   SetEmailAddress(string email);
      void   SetAge(int age);
      void   SetDaysToCompleteCourses(int c1, int c2, int c3);
      void   SetDegreeType(string degree);

      string GetStudentId();
      string GetFirstName();
      string GetLastName();
      string GetEmailAddress();
      void   GetAge() const;
      void   GetDaysToCompleteCourses();
      string GetDegreeProgram();


};

#endif
