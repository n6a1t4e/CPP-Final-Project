#include <iostream>
#include <string>
#include <vector>

using namespace std;

#include "student.h"



Student::Student(
  string id,string first,string last,
  string email,int age,int c1,
  int c2,int c3,string degree
){
  daysToCompleteCourses.resize(3);
  SetStudentId(id);
  SetFirstName(first);
  SetLastName(last);
  SetEmailAddress(email);
  SetAge(age);
  SetDaysToCompleteCourses(c1,c2,c3);
  SetDegreeType(degree);
}

//Set Functions
void   Student::SetStudentId(string id) {
    studentId = id;
    return;
}

void   Student::SetFirstName(string first) {
    firstName = first;
    return;
}

void   Student::SetLastName(string last) {
    lastName = last;
    return;
}

void   Student::SetEmailAddress(string email) {
    emailAddress = email;
    return;
}

void   Student::SetAge(int ageYears) {
    age = ageYears;
    return;
}

void   Student::SetDaysToCompleteCourses(int c1, int c2, int c3) {
    daysToCompleteCourses.at(0) = c1;
    daysToCompleteCourses.at(1) = c2;
    daysToCompleteCourses.at(2) = c3;
    return;
}

void   Student::SetDegreeType(string degree) {
    degreeType = degree;
    return;
}

//Get Functions
string Student::GetStudentId() {
    return studentId;
}

string Student::GetFirstName() {
    return firstName;
}

string Student::GetLastName(){
    return lastName;
}

string Student::GetEmailAddress() {
    return emailAddress;
}

void   Student::GetAge() const{
    cout << age << endl;;
    return;
}

void    Student::GetDaysToCompleteCourses() {
    cout << "Days to complete courses: ";
    for (int i=0; i<daysToCompleteCourses.size(); i++){
      cout << daysToCompleteCourses.at(i);
      if (i != daysToCompleteCourses.size() - 1){
      cout << ", ";
      }
    }
    cout << "." << endl;
    return;
}

string Student::GetDegreeProgram() {
    return degreeType;
}
