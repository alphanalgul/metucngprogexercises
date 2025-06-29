
#ifndef STUDENT_CHILD_CLASS_STUDENT_H
#define STUDENT_CHILD_CLASS_STUDENT_H
class Student{
private:
    char name[50];
    int student_number;
    float cgpa;
public:
    Student();
    void createStudent(const char *name,int student_number,float cgpa);
    void printStudent();
};
#endif //STUDENT_CHILD_CLASS_STUDENT_H