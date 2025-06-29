

#ifndef DIAMONDINHERITANCE1_STUDENT_H
#define DIAMONDINHERITANCE1_STUDENT_H
#include "Person.h"
class Student: virtual public Person{
protected:
    int courses[10];
    int num_courses;
public:
    Student()
    {
        num_courses = 0;
    }
    Student(char n[],int i)
    {
        setName(n);
        setID(i);
        num_courses = 0;
    }
    void addCourse(int course_code)
    {
        if(num_courses<10)
        {
            courses[num_courses] = course_code;
            num_courses++;
        }
    }
    void show()
    {
        int i = 0;
        std::cout << "Courses: "<<std::endl;
        while(i<num_courses)
        {
          std::cout<<courses[i]<<" "<<std::endl;
          i++;
        }
    }
};
#endif //DIAMONDINHERITANCE1_STUDENT_H
