
#ifndef UNTITLED_ADDRESS_H
#define UNTITLED_ADDRESS_H
class Address
{
private:
    int house_number;
    char street_name[50];
    char city[50];
public:
    Address();
    void createAddress(int house_number,const char *street_name,const char *city);
    void printAddress();
};
#endif //UNTITLED_ADDRESS_H
