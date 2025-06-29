#include <iostream> 
using namespace std; 
 
#include "CRectangle.h" 
#include "CTriangle.h" 
 
int main(){ 
 CRectangle rectangle; 
 CTriangle triangle; 
 triangle.show(); 
 
 CPolygon *ptr_polygon1 = &rectangle; 
 CPolygon *ptr_polygon2 = &triangle; 
 

 ptr_polygon1->setup(2, 2); 
 ptr_polygon2->setup(2, 2); 
 
 ptr_polygon1->onscreen(); 
 ptr_polygon2->onscreen(); 
 
 cout << "Number of CPolygon created: " << CPolygon::getCounter() << endl; 
 system("PAUSE"); 
 return 0; 
} 
