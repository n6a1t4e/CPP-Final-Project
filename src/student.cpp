#include <iostream>
#include <string>
#include <vector>

using namespace std;

#include "student.h"

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

void   Student::SetDegreeType(int degree) {
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

int    Student::GetAge() {
    return age;
}

int    Student::GetDaysToCompleteCourses() {
    return daysToCompleteCourses;
}

string Student::GetDegreeType() {
    return degreeType;
}
