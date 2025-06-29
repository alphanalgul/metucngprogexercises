#include <iostream>
#include <string.h>
#include "Student.h"

using std::cout;

Student::Student()
{
  int sizename = sizeof("Not Provided") - 1;
  strncpy(name,"Not provided",sizename);
  name[sizename] = '\0';//to ensure NULL termination

  int sizesurname = sizeof("Not Provided") - 1;
  strncpy(surname,"Not Provided",sizesurname);
  surname[sizesurname] = '\0';

  student_number = 0;

  int size_birthdate = sizeof("Not Provided") - 1;
  strncpy(birthdate,"Not Provided",size_birthdate);
  birthdate[size_birthdate] = '\0';

  cgpa = 0.0;

}
void Student::createStudent(const char *sname, const char *ssurname, int snum, const char *sBD, float scgpa) {
    int size_sname = sizeof(sname) - 1;
    strncpy(this->name,sname,size_sname);


    int size_ssurname = sizeof(ssurname) - 1;
    strncpy(this->surname,ssurname,size_ssurname);


    this->student_number=snum;

    int size_bdate = sizeof(birthdate) - 1;
    strncpy(this->birthdate,sBD,size_bdate);



    this->cgpa=scgpa;
}
void Student::printStudent()

{
 std::cout<<"Name: "<<name<<std::endl;
 std::cout<<"Surname: "<<surname<<std::endl;
 std::cout<<"Student No: "<<student_number<<std::endl;
 std::cout<<"Birth Date: "<<birthdate<<std::endl;
 std::cout<<"CGPA: "<<cgpa<<std::endl;
}