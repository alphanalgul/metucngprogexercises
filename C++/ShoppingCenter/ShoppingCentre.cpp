/* Alphan Algül 2584639
I read and accept the submission rules and the extra rules specified
in each question. This is my own work that is done by myself only */
#include<iostream>
#include "ShoppingCentre.h"
#include "Restaurant.h"
#include "Shop.h"
#include <cstring>
using std::cout;

ShoppingCentre::ShoppingCentre() {
    name = new char[strlen("Undefined") + 1];
    strcpy(this->name,"Undefined");
    businessCount = 0;
    for (int i = 0; i < 50; ++i) {
        businesses[i] = nullptr;
    }
}

ShoppingCentre::ShoppingCentre(char *sname) {
    name = new char[strlen(sname) + 1];
    strcpy(name,sname);
    businessCount = 0;
    for (int i = 0; i < 50; ++i) {
        businesses[i] = nullptr;
    }
}

ShoppingCentre::~ShoppingCentre() {
    delete[] name;
    for (int i = 0; i < businessCount; ++i) {
        delete businesses[i];
    }
}

ShoppingCentre::ShoppingCentre(const ShoppingCentre& other) {
    name = new char[strlen(other.name) + 1];
    strcpy(name, other.name);
    size = other.size;
    numBusinesses = other.numBusinesses;
    for (int i = 0; i < numBusinesses; i++) {
        if (other.businesses[i]->getType() == "Shop")
            businesses[i] = new Shop(*(Shop*)other.businesses[i]);
        else if (other.businesses[i]->getType() == "Restaurant")
            businesses[i] = new Restaurant(*(Restaurant*)other.businesses[i]);
    }
}

ShoppingCentre& ShoppingCentre::operator=(const ShoppingCentre& other) {
    if (this != &other) {
        delete[] name;
        for (int i = 0; i < numBusinesses; i++) {
            delete businesses[i];
        }

        name = new char[strlen(other.name) + 1];
        strcpy(name, other.name);
        size = other.size;
        numBusinesses = other.numBusinesses;

        for (int i = 0; i < numBusinesses; i++) {
            if (other.businesses[i]->getType() == "Shop")
                businesses[i] = new Shop(*(Shop*)other.businesses[i]);
            else if (other.businesses[i]->getType() == "Restaurant")
                businesses[i] = new Restaurant(*(Restaurant*)other.businesses[i]);
        }
    }
    return *this;
}


void ShoppingCentre::setShoppingCentreName(char *sname) {
    delete[] name;
    name = new char[strlen(sname) + 1];
    strcpy(name, sname);
}

char *ShoppingCentre::getShoppingCentreName() {
    return name;
}

int ShoppingCentre::getNumberofBusiness() {
    return businessCount;
}

void ShoppingCentre::addBusiness() {
    int type,size,seatno;
    char *name = new char[100];
    std::cout<<"\nEnter business type (0: Restaurant, 1: Clothing, 2: Technology,"
             "3: Accessories,4: Beauty\n):"<<std::endl;
    std::cin>>type;

    std::cin.ignore();

    std::cout<<"Enter business name:\n"<<std::endl;
    std::cin.getline(name,100);

    std::cout<<"Enter business size (m2):\n "<<std::endl;
    std::cin>>size;

    if(type == 0)
    {
        std::cout<<"Enter number of seats:\n"<<std::endl;
        std::cin>>seatno;

        Restaurant *r = new Restaurant();

        r->setBusinessName(name);
        r->setBusinessSize(size);
        r->setSeatNum(seatno);

        businesses[businessCount] = r;
        businessCount++;

        std::cout << "Business  " << name <<"  " << "added"<<std::endl;
    }
    else if ( type == 1 || type == 2 || type == 3 || type == 4)
    {
        Shop *s = new Shop();

        s->setBusinessName(name);
        s->setBusinessSize(size);
        s->setShopType(type);

        businesses[businessCount] = s;
        businessCount++;

        std::cout << "Business" << name << " "<< " added"<<std::endl;
    }
  delete[] name;
}

void ShoppingCentre::printBusinesses() {
    int i = 0;
    while(i<businessCount) {
        if (businesses[i]->getType() == 0) {
            Restaurant *r = (Restaurant *) businesses[i];
            r->printBusiness();
        } else {
            Shop *s = (Shop *) businesses[i];
            s->printBusiness();
        }
        i++;
    }
}

void ShoppingCentre::printBusinessesEmployees() {
    int i = 0;
    while(i<businessCount) {

        if (businesses[i]->getType() == 0) {
            Restaurant *r = (Restaurant *) businesses[i];

            r->printBusinessEmployees();

        } else {
            Shop *s = (Shop *) businesses[i];
            s->printBusinessEmployees();
        }
        i++;
    }
}

void ShoppingCentre::printShopsStatistics() {
    int count1=0,count2=0,count3=0,count4=0;
    int i = 0;
    while (i<businessCount)
    {
        if(businesses[i]->getType()==1)
        {
            count1++;
        }
        if(businesses[i]->getType()==2)
        {
            count2++;
        }
        if(businesses[i]->getType()==3)
        {
            count3++;
        }
        if(businesses[i]->getType()==4)
        {
            count4++;
        }
       i++;
    }
    std::cout<<"\nClothing Shops:"<<count1<<std::endl;
    std::cout<<"\nTechnology Shops:"<<count2<<std::endl;
    std::cout<<"\nAccessories Shops:"<<count3<<std::endl;
    std::cout<<"\nBeauty Shops:"<<count4<<std::endl;

}

void ShoppingCentre::printShopsByType(int type) {
    int i = 0;
    while (i<businessCount)
    {
        if (businesses[i]->getType() == type) {
        Shop *s = (Shop *) businesses[i];
        s->printBusiness();
        }
        i++;
    }
}

void ShoppingCentre::printSuitableRestaurants(int seat_no) {
    int i = 0;
    while(i<businessCount) {
        if (businesses[i]->getType() == 0) {
            Restaurant *r = (Restaurant *) businesses[i];
            if (r->getSeatNum() >= seat_no) {
                r->printBusiness();
            } else {
            }
        }
        i++;
    }
}

void ShoppingCentre::searchByEmployeeName(char *keyword) {
    int i = 0;
    while(i<businessCount)
    {
        businesses[i]->searchByName(keyword);
        i++;
    }
}

void ShoppingCentre::printLargestBusiness() {
    int i = 0,j=0;
    int max = businesses[i]->getBusinessSize();
    if(businessCount == 0)
    {
        return;
    }
    while(i<businessCount)
    {
        if(businesses[i]->getBusinessSize()>max)
        {
            max = businesses[i]->getBusinessSize();
        }
        else
        {
        }
        i++;
    }
    while(j<businessCount)
    {
        if(businesses[j]->getBusinessSize() == max) {
            businesses[j]->printBusiness();
        }
        else
        {
        }
        j++;
    }
}

Business* ShoppingCentre::getBusinessAt(int index) {
    if (index >= 0 && index < businessCount) {
        return businesses[index];
    }
    return nullptr;
}
