#include <iostream>
#include "Student.h"

using namespace std;
int main()
{
  Student student1;
  student1.printStudent();

  Student student2;
  student2.createStudent("Ahmet","Yilmaz",2584635,"14/11/2003",2.65);
  student2.printStudent();
}
