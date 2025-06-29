
#ifndef CTRIANGLE_H 
#define CTRIANGLE_H 
#include "CPolygon.h" 
class CTriangle : public CPolygon{ 
public: 
 float area(void){ 
  return (width * height)/2; 
 } 
 
 string getName(void){ 
  return "CTriangle"; 
 } 
 
 void show(void){ 
  cout << "This is a triangle" << endl; 
 } 
}; 
#endif
