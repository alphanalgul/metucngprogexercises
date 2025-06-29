

#ifndef DIAMONDINHERITANCE1_ARTSTUDENT_H
#define DIAMONDINHERITANCE1_ARTSTUDENT_H
#include "Student.h"
#include "Artist.h"
class ArtStudent: public Student, public Artist{
public:

    ArtStudent()
    {
        strcpy(name,"Not Provided");
        num_courses = 0;
        type = Unknown;
        id = 0;
    }
    ArtStudent(char n[],int i,int typecode)
    {
        strcpy(name,n);
        id = i;
        if(typecode == -1)
        {
            type = Unknown;
        }
        if(typecode == 1)
        {
            type = Painter;
        }
        if(typecode == 2)
        {
            type = Music;
        }
        if(typecode == 3)
        {
            type = Sculp;
        }
        if(typecode == 4)
        {
            type = Actor;
        }
    }
    void show()
    {
        int i = 0;
        std::cout<<"Name: "<<name<<std::endl;
        std::cout<<"ID: "<<id<<std::endl;
        std::cout<<"Type: "<<std::endl;
        if (type == Painter)
            std::cout << "Painter"<<std::endl;
        else if (type == Music)
            std::cout << "Music"<<std::endl;
        else if (type == Sculp)
            std::cout << "Sculptor"<<std::endl;
        else if (type == Actor)
            std::cout << "Actor"<<std::endl;
        else
            std::cout << "Unknown"<<std::endl;
        std::cout << "Courses: "<<std::endl;
        while(i<num_courses)
        {
            std::cout<<courses[i]<<" "<<std::endl;
            i++;
        }
    }
};
#endif //DIAMONDINHERITANCE1_ARTSTUDENT_H
