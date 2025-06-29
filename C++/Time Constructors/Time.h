
#ifndef C___TIME_H
#define C___TIME_H

class Time
{
private:
    int hour;
    int minute;
    int second;
public:
    Time();
    void createTime(int h, int m, int s);
    void printTime();
};
#endif //C___TIME_H
