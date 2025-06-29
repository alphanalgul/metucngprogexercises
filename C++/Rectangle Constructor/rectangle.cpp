#include<iostream>
#include "rectangle.h"
using std::cout;

Rectangle::Rectangle() {
    length = 1.0;
    width = 1.0;
}

void Rectangle::setlength(float l) {
    if (l > 0.0 && l < 20.0)
    {
        this->length=l;
    }
    else
    {
        std::cout<<"Error! Enter values within the parameters"<<std::endl;
    }
}

void Rectangle::setwidth(float w) {
    if (w > 0.0 && w < 20.0 )
    {
        this->width=w;
    }
    else
    {
        std::cout<<"Error! Enter values within the parameters"<<std::endl;
    }

}

float Rectangle::getlength() {
    return length;
}
float Rectangle::getwidth() {
    return width;
}

float Rectangle::area() {
    return length * width;
}

float Rectangle::parameter() {
    return (length + width) / 2;
}

void Rectangle::printRectangle() {
    std::cout<<"Length: "<<length<<std::endl;
    std::cout<<"Width: "<<width<<std::endl;
}