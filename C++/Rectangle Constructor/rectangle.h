
#ifndef UNTITLED_RECTANGLE_H
#define UNTITLED_RECTANGLE_H
class Rectangle {
private:
    float length;
    float width;
public:
    Rectangle();
    void setlength(float length);
    void setwidth(float width);
    float getlength(void);
    float getwidth(void);
    float area();
    float parameter();
    void printRectangle();
};
#endif //UNTITLED_RECTANGLE_H
