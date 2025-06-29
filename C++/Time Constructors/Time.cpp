#include <iostream>
#include "Time.h"
using std::cout;

Time::Time()
{
    hour = 0;
    minute = 0;
    second = 0;
}

void Time::createTime(int h, int m, int s) {
    this->hour = h;
    this->minute = m;
    this->second = s;
}

void Time::printTime() {
    std::cout<<"Hour: "<<hour<<std::endl;
    std::cout<<"Minute: "<<minute<<std::endl;
    std::cout<<"Second:"<<second<<std::endl;
}