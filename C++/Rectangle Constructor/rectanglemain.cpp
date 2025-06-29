#include <iostream>
#include "rectangle.h"
using namespace std;
int main()
{
    Rectangle r;
    r.setlength(5.0);
    r.setwidth(10.0);
    r.printRectangle();
    r.getwidth();
    r.getlength();
    std::cout<<"Area: "<<r.area()<<std::endl;
    std::cout<<"Parameter: "<<r.parameter()<<std::endl;
}