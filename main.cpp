#include <iostream>
#include <string>
#include <vector>

using namespace std;

#include "src/student.h"
#include "src/student.cpp"
#include "src/networkStudent.h"
#include "src/networkStudent.cpp"

int main () {
    const string studentData[] = {"A1,John,Smith,John1989@gmail.com,20,30,35,40,SECURITY",
"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
"A5,Richard,Lewis,rlew152@wgu.edu,21,32,40,38,SOFTWARE"};


    NetworkStudent student("A1","John","Smith","John1989@gmail.com",20,30,35,40,"SECURITY");

    student.GetAge();
    student.GetDaysToCompleteCourses();
    cout << student.GetDegreeProgram() << endl;

    return 0;
}
