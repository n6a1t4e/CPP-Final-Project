#include <iostream>
#include <string>
#include <vector>

using namespace std;

#include "src/student.h"


int main () {
    Student student;

    student.SetAge(21);
    cout << student.GetAge();

    return 0;
}
