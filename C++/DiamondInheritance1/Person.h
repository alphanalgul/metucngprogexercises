
#ifndef DIAMONDINHERITANCE1_PERSON_H
#define DIAMONDINHERITANCE1_PERSON_H
#include<iostream>
#include<cstring>
class Person{
protected:
    char name[20];
    int id;
public:
    Person()
    {
        strcpy(name,"Not Provided");
        id = 0;
    }
    Person(char n[],int i)
    {
        strcpy(name,n);
        id = i;
    }
    void setName(char n[])
    {
        strcpy(name,n);
    }
    void setID(int i)
    {
        id = i;
    }
    void show()
    {
        std::cout<<"Name: "<<name<<std::endl;
        std::cout<<"ID: "<<id<<std::endl;
    }
};

#endif
