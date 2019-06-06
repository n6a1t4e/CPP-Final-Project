#include <iostream>
#include <string>
#include <vector>

using namespace std;

#include "src/student.h"
#include "src/student.cpp"
#include "src/networkStudent.h"
#include "src/networkStudent.cpp"

int main () {

    NetworkStudent student;

    student.SetAge(21);
    student.GetAge();
    student.SetDaysToCompleteCourses(10,44,50);
    student.GetDaysToCompleteCourses();
    cout << student.GetDegreeType() << endl;

    return 0;
}
