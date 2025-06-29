#include <iostream>
#include "address.h"
#include<cstring>
using namespace std;
int main() {
    Address a1;
     a1.printAddress();

     char *country = new char[50],*city = new char[50],*street = new char[50];
     int house_no;
     Address a2;

     std::cout<<"Enter Country: "<<std::endl;
     cin.getline(country,50);
     a2.setCountry(country);

     std::cout<<"Enter City: "<<std::endl;
     cin.getline(city,50);
     a2.setCity(city);

     std::cout<<"Enter Street: "<<std::endl;
     cin.getline(street,50);
     a2.setStreet(street);

     std::cout<<"Enter House Number: "<<std::endl;
     cin>>house_no;
     a2.setHouseNo(house_no);

     a2.printAddress();

    delete[] country;
    delete[] city;
    delete[] street;
}