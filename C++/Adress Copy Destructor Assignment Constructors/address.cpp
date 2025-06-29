#include "address.h"
#include <iostream>
#include <cstring>
using std::cout;
Address::Address() {
    country = new char[50];
    city = new char[50];
    street = new char [50];

    strcpy(country,"Not Provided");
    strcpy(city,"Not Provided");
    strcpy(street,"Not Provided");
    house_number = 0;
}

Address::Address(char *co, char *c, char *s, int hnumber) {
    country = new char[50];
    city = new char[50];
    street = new char [50];

    strcpy(country,co);
    strcpy(city,c);
    strcpy(street,s);
    house_number = hnumber;
}
Address::~Address() {
    delete[] country;
    delete[] city;
    delete[] street;
}

void Address::setCountry(char *c) {
    delete[] country;
    country = new char[50];
    strcpy(country,c);
}
void Address::setCity(char *c) {
    delete[] city;
    city = new char[50];
    strcpy(city,c);
}
void Address::setStreet(char *c) {
    delete[] street;
    street = new char[50];
    strcpy(street,c);
}
void Address::setHouseNo(int house_no){
    house_number = house_no;
}

char *Address::getCity() {
    return city;
}

char *Address::getCountry() {
    return country;
}

char *Address::getStreet() {
    return street;
}

int Address::getHouseNo() {
    return house_number;
}
void Address::printAddress() {
    std::cout<<"Country: "<<country<<std::endl;
    std::cout<<"City: "<<city<<std::endl;
    std::cout<<"Street: "<<street<<std::endl;
    std::cout<<"House Number: "<<house_number<<std::endl;
}

Address::Address(const Address &a) {
    country = new char[50];
    city = new char[50];
    street = new char [50];

    strcpy(country,a.country);
    strcpy(city,a.city);
    strcpy(street,a.street);
    house_number = a.house_number;
}

Address &Address::operator=(const Address &a) {
    if(this == &a)
    {
        return *this;
    }
    delete[] country;
    delete[] city;
    delete[] street;

    country = new char[50];
    city = new char[50];
    street = new char [50];

    strcpy(country,a.country);
    strcpy(city,a.city);
    strcpy(street,a.street);
    house_number = a.house_number;

    return *this;
}