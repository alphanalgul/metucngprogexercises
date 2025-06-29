#ifndef CRECTANGLE_H 
#define CRECTANGLE_H 
#include "CPolygon.h" 
class CRectangle : public CPolygon{ 
public: 
float area(void){ 
return width * height; 
} 
string getName(void){ 
return "CRectangle"; 
} 
void show(void){ 
cout << "This is a rectangle" << endl; 
} 
}; 
#endif 
