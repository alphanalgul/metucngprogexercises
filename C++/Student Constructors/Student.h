

#ifndef STUDENT_H
#define STUDENT_H

class Student
{
private:
    char name[50];
    char surname[50];
    int student_number;
    char birthdate[50];
    float cgpa;
public:
    Student();
    void createStudent(const char *name,const char *surname,int num,const char *BD, float cgpa);
    void printStudent();
};



#endif
