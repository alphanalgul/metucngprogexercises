#include<iostream>
#include <cstring>
#include "Address.h"
using std::cout;

Address::Address() {
    house_number = 0;

    int street_name_size = sizeof("Not provided") + 1;
    strncpy(street_name,"Not provided",street_name_size);
    street_name[street_name_size] = '\0';

    int city_size = sizeof("Not provided") + 1;
    strncpy(city,"Not provided", city_size);
    city[city_size] = '\0';
}

void Address::createAddress(int house_no, const char *sname, const char *cityname) {
    this->house_number = house_no;

    int street_name_size = sizeof(sname) + 1;
    strncpy(this->street_name,sname,street_name_size);

    int city_size = sizeof(cityname) + 1;
    strncpy(this->city,cityname,city_size);
}

void Address::printAddress() {
    std::cout<<"House Number: "<<house_number<<std::endl;
    std::cout<<"Street Name: "<<street_name<<std::endl;
    std::cout<<"City: "<<city<<std::endl;
}