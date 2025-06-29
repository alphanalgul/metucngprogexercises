
#ifndef ADRESS_CLASS_CONSTRUCTORS_ADDRESS_H
#define ADRESS_CLASS_CONSTRUCTORS_ADDRESS_H
class Address{
private:
    char *country;
    char *city;
    char *street;
    int house_number;
public:
    Address();
    Address(char *country,char *city,char *street,int house_number);
    Address(const Address& a);
    ~Address();
    Address& operator=(const Address& a);
    void setCountry(char *country);
    char *getCountry();
    void setCity(char *city);
    char *getCity();
    void setStreet(char *street);
    char *getStreet();
    void setHouseNo(int house_number);
    int getHouseNo();
    void printAddress();
};
#endif //ADRESS_CLASS_CONSTRUCTORS_ADDRESS_H
