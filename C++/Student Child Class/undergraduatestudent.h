
#ifndef STUDENT_CHILD_CLASS_UNDERGRADUATESTUDENT_H
#define STUDENT_CHILD_CLASS_UNDERGRADUATESTUDENT_H
#include<iostream>
#include "student.h"
using namespace std;
class UndergraduateStudent:public Student{
private:
    int year;
public:
    UndergraduateStudent(){
        year = 0;
    }
    void createUndergradStudent(const char *sname, int student_no, float scgpa,int syear)
    {
        createStudent(sname,student_no,scgpa);
        printStudent();
        this->year = syear;
        std::cout<<"Year: "<<year<<std::endl;
    }
};
#endif //STUDENT_CHILD_CLASS_UNDERGRADUATESTUDENT_H
