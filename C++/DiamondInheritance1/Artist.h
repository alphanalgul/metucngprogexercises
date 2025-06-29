
#ifndef DIAMONDINHERITANCE1_ARTIST_H
#define DIAMONDINHERITANCE1_ARTIST_H
#include "Person.h"
enum ArtistType {
    Unknown,
    Painter,
    Music,
    Sculp,
    Actor
};
class Artist: virtual public Person{
protected:
   ArtistType type;
public:

   Artist()
   {
       type = Unknown;
   }
   Artist(char n[],int i, int typecode)
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
    }

};
#endif //DIAMONDINHERITANCE1_ARTIST_H
