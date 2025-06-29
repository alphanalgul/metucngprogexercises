/* Alphan Algül 2584639
I read and accept the submission rules and the extra rules specified
in each question. This is my own work that is done by myself only */
#include<iostream>
#include<cstring>
#include "Employee.h"
using std::cout;
Employee::Employee() {

   firstname = new char[strlen("Not Provided") + 1];
    lastname = new char[strlen("Not Provided") + 1];
   strcpy(firstname,"Not Provided");
   strcpy(lastname,"Not Provided");
   SSN = -1;
}

Employee::Employee(const char *fname, const char *lname) {
    firstname = new char[strlen(fname) + 1];
    lastname = new char[strlen(lname) + 1];
    strcpy(this->firstname,fname);
    strcpy(this->lastname,lname);
    this->SSN = -1;
}

Employee::Employee(const Employee &e) {

    firstname = new char[strlen(e.firstname) + 1];
    lastname = new char[strlen(e.lastname) + 1];

    strcpy(firstname, e.firstname);
    strcpy(lastname, e.lastname);

    SSN = e.SSN;
}

Employee::~Employee() {
    delete[] firstname;
    delete[] lastname;
}

Employee &Employee::operator=(const Employee& e) {
    if (this == &e)
    {
        return *this;
    }

    delete[] firstname;
    delete [] lastname;

    firstname = new char[strlen(e.firstname) + 1];
    lastname = new char[strlen(e.lastname) + 1];

    strcpy(firstname,e.firstname);
    strcpy(lastname,e.lastname);
    SSN = e.SSN;

    return *this;
}

void Employee::setFirstName(const char *fname) {
    delete[] firstname;
    firstname = new char[strlen(fname) + 1];
    strcpy(firstname,fname);
}

void Employee::setLastName(const char *lname) {
    delete[] lastname;
    lastname = new char[strlen(lname) + 1];
    strcpy(lastname,lname);
}

void Employee::setSSN(int ssn) {
    this->SSN = ssn;
}

const char *Employee::getFirstName() const {
    return firstname;
}

const char *Employee::getLastName() const {
    return lastname;
}

int Employee::getSSN() const {
    return SSN;
}

void Employee::printEmployee() const {
    std::cout<<"Employee Name:"<<firstname<<std::endl;
    std::cout<<"Employee Surname:"<<lastname<<std::endl;
    std::cout<<"Employee SSN:"<<SSN<<std::endl;
}

bool Employee::checkName(const char *keyword) const {
    if (strstr(firstname,keyword) != nullptr
    || strstr(lastname,keyword) != nullptr)
    {
        return true;
    }
    else
    {
        return false;
    }
}