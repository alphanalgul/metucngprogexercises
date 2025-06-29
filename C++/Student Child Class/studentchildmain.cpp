#include <iostream>
#include "student.h"
#include "undergraduatestudent.h"
using namespace std;
int main() {
    Student s1;
    s1.printStudent();

    Student s2;
    s2.createStudent("Zekican Budin",1234,4.0);
    s2.printStudent();

    UndergraduateStudent us1;
    us1.createUndergradStudent("Zekican Budindi",12345,3.8,4);
}
