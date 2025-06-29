#include<iostream>
#include "Time.h"
using namespace std;

int main()
{
    Time t1;
    t1.printTime();

    Time t2;
    t2.createTime(18,39,44);
    t2.printTime();
}