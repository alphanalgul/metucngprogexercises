
#include<iostream>
#include<cstring>
#include "Business.h"
using std::cout;

Business::Business()
{
  name = new char[strlen("Not Provided") + 1];
  strcpy(name,"Not Provided");
  size = -1;
  employeeCount = 0;
  type = -1;
}

Business::Business(const char *bname, int bsize) {
    name = new char[strlen(bname) + 1];
    strcpy(name,bname);
    size = bsize;
    employeeCount = 0;
    type = -1;
}

Business::Business(const Business& b) {
    name = new char[strlen(b.name) + 1];
     strcpy(name,b.name);
     size = b.size;
     employeeCount = b.employeeCount;
     type = b.type;

    for (int i = 0; i < employeeCount; i++) {
        employees[i] = b.employees[i];
    }
}

Business::~Business() {
    delete[] name;

}

Business &Business::operator=(const Business &b) {
    if(this==&b)
    {
        return *this;
    }

    delete[] name;

    name = new char[strlen(b.name) + 1];
    strcpy(name,b.name);
    size = b.size;
    employeeCount = b.employeeCount;
    type = b.type;

    for (int i = 0; i < employeeCount; i++) {
        employees[i] = b.employees[i];
    }
    return *this;
}

void Business::setBusinessName(const char *bname) {
    delete[] name;
    name = new char[strlen(bname) + 1];
    strcpy(name,bname);
}

char *Business::getBusinessName() {
    return name;
}

void Business::setBusinessSize(int bsize) {
    size = bsize;
}

int Business::getBusinessSize() {
    return size;
}

int Business::getEmployeeCount() {
    return employeeCount;
}

void Business::addEmployee(Employee e) {
    if(employeeCount<20)
    {
        employees[employeeCount] = e;
        employeeCount++;
        std::cout<<"\nEmployee "<<e.getFirstName()<<" "<<e.getLastName()<<" added."<<std::endl;
    }
    else{
        std::cout<<"\nYou cant add any more employees"<<std::endl;
    }
}

void Business::printBusiness() {
    std::cout<<"\nBusiness Name: "<<name<<std::endl;
    std::cout<<"\nBusiness Size: "<<size<<std::endl;
    std::cout<<"\nNumber of Employees: "<<employeeCount<<std::endl;
}

void Business::printBusinessEmployees() {
    std::cout<<"\nBusiness Name: "<<name<<std::endl;
    std::cout<<"\nBusiness Size: "<<size<<std::endl;

    std::cout<<"\nEmployees: "<<std::endl;
    int i = 0;
    while(i<employeeCount)
    {
       employees[i].printEmployee();
       i++;
    }
}

void Business::searchByName(char *keyword) {
    int i = 0;
    while(i<employeeCount)
    {
        if(strstr(employees[i].getFirstName(),keyword) != nullptr
        ||strstr(employees[i].getLastName(),keyword) != nullptr)
        {
            std::cout<<"Workplace: \n"<<name<<std::endl;
            employees[i].printEmployee();
        }
        i++;
    }
}

int Business::getType()
{
    return  type;
}

